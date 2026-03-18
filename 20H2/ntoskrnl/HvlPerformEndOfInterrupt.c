/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x1404F43A0
 * Callers:
 *     HvlDummyInterruptCallback @ 0x1404EFCA0 (HvlDummyInterruptCallback.c)
 * Callees:
 *     HalPerformEndOfInterrupt @ 0x1402F5F40 (HalPerformEndOfInterrupt.c)
 */

__int64 HvlPerformEndOfInterrupt()
{
  __int64 result; // rax

  _disable();
  result = HalPerformEndOfInterrupt(0LL);
  _enable();
  return result;
}
