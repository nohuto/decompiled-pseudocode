/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x14051B890
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403F7370 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x1405075A4 (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
