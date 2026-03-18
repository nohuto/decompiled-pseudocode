/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x14051BEE0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403F8600 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x140507BF4 (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
