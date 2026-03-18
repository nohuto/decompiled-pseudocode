/*
 * XREFs of HvlDummyInterruptCallback @ 0x1404EBDE0
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x1403FB7D0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1403FB930 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     HvlPerformEndOfInterrupt @ 0x1404F04E0 (HvlPerformEndOfInterrupt.c)
 */

__int64 HvlDummyInterruptCallback()
{
  return HvlPerformEndOfInterrupt();
}
