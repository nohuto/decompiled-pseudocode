/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x1404F5F40
 * Callers:
 *     HvlDummyInterruptCallback @ 0x1404F1840 (HvlDummyInterruptCallback.c)
 * Callees:
 *     HalPerformEndOfInterrupt @ 0x1402914D0 (HalPerformEndOfInterrupt.c)
 */

__int64 HvlPerformEndOfInterrupt()
{
  __int64 result; // rax

  _disable();
  result = HalPerformEndOfInterrupt(0LL);
  _enable();
  return result;
}
