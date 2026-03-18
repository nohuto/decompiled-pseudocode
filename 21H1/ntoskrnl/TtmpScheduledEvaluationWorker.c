/*
 * XREFs of TtmpScheduledEvaluationWorker @ 0x1408F9980
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     TtmiScheduleSessionWorker @ 0x1408FAA78 (TtmiScheduleSessionWorker.c)
 */

void __fastcall TtmpScheduledEvaluationWorker(PADAPTER_OBJECT DmaAdapter)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  int v4; // eax

  if ( _InterlockedExchange((volatile __int32 *)&DmaAdapter[15].DmaOperations, 0) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    v3 = *(_QWORD *)&DmaAdapter[1].Version;
    if ( v3 )
    {
      v4 = *(_DWORD *)(&DmaAdapter[2].Size + 1);
      if ( (v4 & 1) == 0 && (v4 & 2) == 0 )
      {
        *(_DWORD *)(&DmaAdapter[2].Size + 1) = v4 | 4;
        TtmiScheduleSessionWorker(v3, 2LL);
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    HalPutDmaAdapter(DmaAdapter);
  }
}
