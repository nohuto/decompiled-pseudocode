/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x1404F04E0
 * Callers:
 *     HvlDummyInterruptCallback @ 0x1404EBDE0 (HvlDummyInterruptCallback.c)
 * Callees:
 *     HalPerformEndOfInterrupt @ 0x1402EC5B0 (HalPerformEndOfInterrupt.c)
 */

__int64 HvlPerformEndOfInterrupt()
{
  __int64 result; // rax

  _disable();
  result = HalPerformEndOfInterrupt(0LL);
  _enable();
  return result;
}
