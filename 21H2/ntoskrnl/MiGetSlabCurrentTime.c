/*
 * XREFs of MiGetSlabCurrentTime @ 0x1404192EC
 * Callers:
 *     MiFreeSlabEntries @ 0x14023A710 (MiFreeSlabEntries.c)
 *     MiInsertSlabEntry @ 0x1403C2B24 (MiInsertSlabEntry.c)
 *     MiAllocateSlabEntry @ 0x1405B0B24 (MiAllocateSlabEntry.c)
 *     MiSlabAllocatorRecentFailure @ 0x1405B19C8 (MiSlabAllocatorRecentFailure.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTime @ 0x1402A0850 (KeQueryUnbiasedInterruptTime.c)
 */

ULONGLONG MiGetSlabCurrentTime()
{
  ULONGLONG result; // rax

  result = KeQueryUnbiasedInterruptTime();
  if ( !result )
    return 1LL;
  return result;
}
