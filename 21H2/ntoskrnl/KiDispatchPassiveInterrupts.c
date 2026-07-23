/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x1405215D0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403FFB90 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x14050D294 (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
