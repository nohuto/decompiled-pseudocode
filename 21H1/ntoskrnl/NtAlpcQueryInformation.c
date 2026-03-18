/*
 * XREFs of NtAlpcQueryInformation @ 0x1406B6E40
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpPortQueryBasicInfo @ 0x1406B7070 (AlpcpPortQueryBasicInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x1406B70CC (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpWaitForPortReferences @ 0x1406B71CC (AlpcpWaitForPortReferences.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B7268 (AlpcpPortQueryConnectedSidInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpPortQueryServerInfo @ 0x1408BE7A8 (AlpcpPortQueryServerInfo.c)
 *     ExRaiseAccessViolation @ 0x1409517C0 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall NtAlpcQueryInformation(
        HANDLE Handle,
        __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5)
{
  unsigned int v5; // r12d
  unsigned __int64 v6; // rbx
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  struct _DMA_ADAPTER *v15; // rdi
  NTSTATUS v16; // esi
  NTSTATUS ServerSessionInfo; // eax
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  int v21; // r15d
  int v22; // r15d
  int v23; // r15d
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v25; // [rsp+70h] [rbp+18h] BYREF

  v5 = (unsigned int)a4;
  v6 = a3;
  v7 = a2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !a3 )
  {
    v16 = -1073741811;
    goto LABEL_24;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (((_DWORD)a2 - 3) & 0xFFFFFFF7) != 0 && (_DWORD)a4 )
    {
      a2 = a3;
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = a3 + (unsigned int)a4 - 1LL;
      if ( a3 > v11 || (a3 = 0x7FFFFFFF0000LL, v11 >= 0x7FFFFFFF0000LL) )
        ExRaiseAccessViolation();
      v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)a2 = *(_BYTE *)a2;
        a2 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( a2 != v12 );
    }
    else
    {
      a3 = 0x7FFFFFFF0000LL;
    }
    v13 = a5;
    if ( a5 )
    {
      v14 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
  }
  else
  {
    v13 = a5;
  }
  v15 = 0LL;
  if ( !Handle
    || (v25 = 0LL,
        v16 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &v25, 0LL),
        v15 = (struct _DMA_ADAPTER *)v25,
        v16 >= 0) )
  {
    if ( v7 )
    {
      v21 = v7 - 3;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 7;
          if ( v23 )
          {
            if ( v23 != 1 )
            {
              v16 = -1073741811;
LABEL_22:
              if ( v15 )
                HalPutDmaAdapter(v15);
              goto LABEL_24;
            }
            ServerSessionInfo = AlpcpPortQueryServerSessionInfo(v15, v6, v5, v13);
          }
          else
          {
            ServerSessionInfo = AlpcpWaitForPortReferences((_DWORD)v15, v6, v5, v13, PreviousMode);
          }
        }
        else
        {
          ServerSessionInfo = AlpcpPortQueryServerInfo((int)v15, v6, v5, v13, PreviousMode);
        }
      }
      else
      {
        LOBYTE(Object) = PreviousMode;
        ServerSessionInfo = AlpcpPortQueryConnectedSidInfo(v15, v6, a3, v13, Object);
      }
    }
    else
    {
      ServerSessionInfo = AlpcpPortQueryBasicInfo(v15, v6, v5, v13);
    }
    v16 = ServerSessionInfo;
    goto LABEL_22;
  }
LABEL_24:
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable++ == -1;
  if ( v19
    && ($C774EFD68449142D8271B1EC1EB7FB26 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v18, a2, a3, a4);
  }
  return (unsigned int)v16;
}
