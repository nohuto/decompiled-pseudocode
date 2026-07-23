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

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  PVOID v6; // rbx
  ALPC_PORT_INFORMATION_CLASS v7; // r15d
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  PULONG v13; // r14
  __int64 v14; // rcx
  struct _DMA_ADAPTER *v15; // rdi
  int v16; // esi
  int ServerSessionInfo; // eax
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  __int32 v21; // r15d
  __int32 v22; // r15d
  __int32 v23; // r15d
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v25; // [rsp+70h] [rbp+18h] BYREF

  v6 = PortInformation;
  v7 = PortInformationClass;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !PortInformation )
  {
    v16 = -1073741811;
    goto LABEL_24;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((PortInformationClass - 3) & 0xFFFFFFF7) != 0 && Length )
    {
      *(_QWORD *)&PortInformationClass = PortInformation;
      if ( ((unsigned __int8)PortInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (unsigned __int64)PortInformation + Length - 1;
      if ( (unsigned __int64)PortInformation > v11
        || (PortInformation = (PVOID)0x7FFFFFFF0000LL, v11 >= 0x7FFFFFFF0000LL) )
      {
        ExRaiseAccessViolation();
      }
      v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        **(_BYTE **)&PortInformationClass = **(_BYTE **)&PortInformationClass;
        *(_QWORD *)&PortInformationClass = (*(_QWORD *)&PortInformationClass & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( *(_QWORD *)&PortInformationClass != v12 );
    }
    else
    {
      PortInformation = (PVOID)0x7FFFFFFF0000LL;
    }
    v13 = ReturnLength;
    if ( ReturnLength )
    {
      v14 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
  }
  else
  {
    v13 = ReturnLength;
  }
  v15 = 0LL;
  if ( !PortHandle
    || (v25 = 0LL,
        v16 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &v25, 0LL),
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
            ServerSessionInfo = AlpcpPortQueryServerSessionInfo(v15, v6, Length, v13);
          }
          else
          {
            ServerSessionInfo = AlpcpWaitForPortReferences((_DWORD)v15, (_DWORD)v6, Length, (_DWORD)v13, PreviousMode);
          }
        }
        else
        {
          ServerSessionInfo = AlpcpPortQueryServerInfo((int)v15, (int)v6, Length, (int)v13, PreviousMode);
        }
      }
      else
      {
        LOBYTE(Object) = PreviousMode;
        ServerSessionInfo = AlpcpPortQueryConnectedSidInfo(v15, v6, PortInformation, v13, Object);
      }
    }
    else
    {
      ServerSessionInfo = AlpcpPortQueryBasicInfo(v15, v6, Length, v13);
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
    KiCheckForKernelApcDelivery(
      (__int64)v18,
      *(__int64 *)&PortInformationClass,
      (__int64)PortInformation,
      *(_DWORD **)&Length);
  }
  return v16;
}
