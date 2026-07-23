/*
 * XREFs of HvlDummyInterruptCallback @ 0x1404F17C0
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x140404E80 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140404FE0 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x1404F5EC0 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
