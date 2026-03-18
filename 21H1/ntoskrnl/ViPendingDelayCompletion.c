/*
 * XREFs of ViPendingDelayCompletion @ 0x1409D2C08
 * Callers:
 *     VfPendingMoreProcessingRequired @ 0x1409D2830 (VfPendingMoreProcessingRequired.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeInitializeTimerEx @ 0x140355110 (KeInitializeTimerEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409D2D74 (ViPendingQueuePassiveLevelCompletion.c)
 */

__int64 __fastcall ViPendingDelayCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // esi
  char *PoolWithTag; // rax
  _DWORD *v11; // rdi
  struct _KTIMER *v12; // r14
  __int64 v13; // rbx
  struct _DMA_ADAPTER *v14; // rbx

  v9 = 1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x64707249u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    v12 = (struct _KTIMER *)(PoolWithTag + 104);
    KeInitializeTimerEx((PKTIMER)(PoolWithTag + 104), SynchronizationTimer);
    *(_DWORD *)(a2 + 56) |= 0x10u;
    *((_QWORD *)v11 + 4) = a5;
    *(_QWORD *)v11 = a2;
    *((_QWORD *)v11 + 1) = a1;
    *((_QWORD *)v11 + 3) = a4;
    *((_QWORD *)v11 + 2) = a3;
    *((_BYTE *)v11 + 172) = *(_BYTE *)(a2 + 185);
    v13 = *(_QWORD *)(a2 + 216);
    if ( v13 && (v14 = *(struct _DMA_ADAPTER **)(v13 + 40)) != 0LL )
      ObfReferenceObject(v14);
    else
      v14 = 0LL;
    if ( KeGetCurrentIrql() >= 2u )
    {
      v11[42] = 2;
      KeInitializeDpc((PRKDPC)(v11 + 10), (PKDEFERRED_ROUTINE)ViPendingCompleteAtDPC, v11);
      KiSetTimerEx((__int64)v12, -3000LL, 0, 0, (__int64)(v11 + 10));
    }
    else
    {
      v11[42] = 1;
      KiSetTimerEx((__int64)v12, -3000LL, 0, 0, 0LL);
      v9 = ViPendingQueuePassiveLevelCompletion(v11);
      if ( !v9 )
      {
        KeCancelTimer(v12);
        ExFreePoolWithTag(v11, 0);
        *(_DWORD *)(a2 + 56) &= ~0x10u;
        if ( v14 )
          HalPutDmaAdapter(v14);
      }
    }
  }
  else
  {
    return 0;
  }
  return v9;
}
