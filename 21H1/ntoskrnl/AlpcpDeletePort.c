/*
 * XREFs of AlpcpDeletePort @ 0x140646340
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1402DA43C (AlpcpFreeCompletionPacketLookaside.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     AlpcpDereferenceBlobEx @ 0x1406103F0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDestroyPort @ 0x14064651C (AlpcpDestroyPort.c)
 *     AlpcpSendCloseMessage @ 0x1406479A4 (AlpcpSendCloseMessage.c)
 */

_QWORD *__fastcall AlpcpDeletePort(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rsi
  struct _DMA_ADAPTER *v7; // rcx
  int v8; // ecx
  void *v9; // rcx
  struct _DMA_ADAPTER *v10; // rcx
  ULONG_PTR v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _DMA_ADAPTER *v16; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
    AlpcpSendCloseMessage();
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    ExAcquirePushLockExclusiveEx(v3 - 16, 0LL);
    v4 = *(_DWORD *)(a1 + 416) & 6;
    switch ( v4 )
    {
      case 2:
        **(_QWORD **)(a1 + 16) = 0LL;
        break;
      case 4:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 0LL;
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
LABEL_8:
        if ( v5 )
        {
          *(_QWORD *)(v5 + 424) = 0LL;
          *(_QWORD *)(v5 + 432) = 0LL;
        }
        break;
      case 6:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 0LL;
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
        goto LABEL_8;
    }
    v6 = *(_QWORD *)(a1 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6 - 16);
    KeAbPostRelease(v6 - 16);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16), 1);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v7 = *(struct _DMA_ADAPTER **)(a1 + 32);
  if ( v7 )
  {
    HalPutDmaAdapter(v7);
    AlpcpFreeCompletionPacketLookaside(*(KSPIN_LOCK **)(a1 + 48));
  }
  v8 = *(_DWORD *)(a1 + 416);
  if ( (v8 & 6) == 4 && (v8 & 0x400) == 0 )
  {
    v16 = *(struct _DMA_ADAPTER **)(a1 + 80);
    if ( v16 )
      HalPutDmaAdapter(v16);
  }
  v9 = 0LL;
  if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
    v9 = *(void **)(a1 + 24);
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x63706C41u);
  v10 = *(struct _DMA_ADAPTER **)(a1 + 368);
  if ( v10 )
    HalPutDmaAdapter(v10);
  v11 = _InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
  if ( v11 )
    AlpcpDereferenceBlobEx(v11, 1);
  AlpcpDestroyPort(a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
}
