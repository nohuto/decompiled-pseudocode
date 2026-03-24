/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x140521390
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403FF9B0 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x14050D054 (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
