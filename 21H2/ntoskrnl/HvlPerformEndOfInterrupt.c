/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x1404F5EC0
 * Callers:
 *     HvlDummyInterruptCallback @ 0x1404F17C0 (HvlDummyInterruptCallback.c)
 * Callees:
 *     HalPerformEndOfInterrupt @ 0x14020F440 (HalPerformEndOfInterrupt.c)
 */

__int64 HvlPerformEndOfInterrupt()
{
  __int64 result; // rax

  _disable();
  result = HalPerformEndOfInterrupt(0LL);
  _enable();
  return result;
}
