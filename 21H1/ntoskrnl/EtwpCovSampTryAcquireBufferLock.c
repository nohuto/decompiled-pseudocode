/*
 * XREFs of EtwpCovSampTryAcquireBufferLock @ 0x1405A9FE0
 * Callers:
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1405A8FE0 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampSampleBufferReserve @ 0x1405A9C5C (EtwpCovSampSampleBufferReserve.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140320478 (KxTryToAcquireSpinLock.c)
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
