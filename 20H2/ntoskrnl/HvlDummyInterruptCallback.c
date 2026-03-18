/*
 * XREFs of HvlDummyInterruptCallback @ 0x1404EFCA0
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x140402750 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1404028B0 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x1404F43A0 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
