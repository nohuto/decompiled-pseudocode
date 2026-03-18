/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x1404F0B30
 * Callers:
 *     HvlDummyInterruptCallback @ 0x1404EC410 (HvlDummyInterruptCallback.c)
 * Callees:
 *     HalPerformEndOfInterrupt @ 0x140325EE0 (HalPerformEndOfInterrupt.c)
 */

__int64 HvlPerformEndOfInterrupt()
{
  __int64 result; // rax

  _disable();
  result = HalPerformEndOfInterrupt(0LL);
  _enable();
  return result;
}
