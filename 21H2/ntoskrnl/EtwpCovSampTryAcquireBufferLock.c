/*
 * XREFs of EtwpCovSampTryAcquireBufferLock @ 0x140460FAC
 * Callers:
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1406360C0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampSampleBufferReserve @ 0x140636A64 (EtwpCovSampSampleBufferReserve.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x1402DA448 (KxTryToAcquireSpinLock.c)
 */

__int64 __fastcall EtwpCovSampTryAcquireBufferLock(volatile signed __int32 *SpinLock, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // r8
  unsigned __int8 v5; // cl
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  *a2 = CurrentIrql;
  if ( CurrentIrql <= 1u )
  {
    v5 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v5 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (v5 + 1)) - 1) & 4;
    }
  }
  else if ( CurrentIrql != 2 )
  {
    return (unsigned __int8)KxTryToAcquireSpinLock(SpinLock);
  }
  KxAcquireSpinLock((PKSPIN_LOCK)SpinLock);
  return 1LL;
}
