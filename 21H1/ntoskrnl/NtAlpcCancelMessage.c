/*
 * XREFs of NtAlpcCancelMessage @ 0x1406EB270
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCancelMessage(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // edi
  int v7; // r15d
  void *v8; // rsi
  int v9; // ebx
  __int64 v10; // rdx
  struct _DMA_ADAPTER *v11; // rdi
  PVOID Object[6]; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR v14; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  v14 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (a2 & 0xFFFFFFF0) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  LOBYTE(a4) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)a4 )
  {
    if ( (a2 & 4) != 0 )
    {
      if ( (a3 & 3) == 0 )
      {
        v6 = *(_DWORD *)(a3 + 12);
        v7 = *(_DWORD *)(a3 + 16);
        v8 = (void *)*(unsigned int *)(a3 + 4);
        goto LABEL_9;
      }
    }
    else if ( (a3 & 3) == 0 )
    {
      v6 = *(_DWORD *)(a3 + 20);
      v7 = *(_DWORD *)(a3 + 24);
      v8 = *(void **)(a3 + 8);
LABEL_9:
      Object[1] = v8;
      goto LABEL_10;
    }
    ExRaiseDatatypeMisalignment();
  }
  v6 = *(_DWORD *)(a3 + 20);
  v7 = *(_DWORD *)(a3 + 24);
  v8 = *(void **)(a3 + 8);
LABEL_10:
  if ( !v6 )
  {
    v9 = -1073741559;
    goto LABEL_17;
  }
  Object[0] = 0LL;
  v9 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, a4, Object, 0LL);
  if ( v9 >= 0 )
  {
    v10 = v6;
    v11 = (struct _DMA_ADAPTER *)Object[0];
    v9 = AlpcpLookupMessage((__int64)Object[0], v10, v7, a4, &v14);
    if ( v9 >= 0 )
    {
      if ( (v4 & 8) == 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)&v11[26].Version & 6) == 4 )
      {
        if ( v8 == *(void **)(v14 + 104) )
        {
LABEL_14:
          if ( (*(_DWORD *)(v14 + 40) & 0x80u) != 0 )
          {
            AlpcpUnlockMessage(v14);
            v9 = -1073740029;
          }
          else
          {
            v9 = AlpcpCancelMessage((__int64)v11, v14, v4);
          }
          goto LABEL_16;
        }
      }
      else if ( v8 == *(void **)(v14 + 112) )
      {
        goto LABEL_14;
      }
      AlpcpUnlockMessage(v14);
      v9 = -1073740007;
    }
LABEL_16:
    HalPutDmaAdapter(v11);
  }
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), a2, a3, a4);
  return (unsigned int)v9;
}
