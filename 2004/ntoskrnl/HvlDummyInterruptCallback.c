/*
 * XREFs of HvlDummyInterruptCallback @ 0x1404EC410
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x1403FCA60 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1403FCBC0 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x1404F0B30 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
