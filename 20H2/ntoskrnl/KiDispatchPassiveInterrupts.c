/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x14051F8B0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403FD6C0 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x14050B524 (IoProcessPassiveInterrupts.c)
 */

__int64 KiDispatchPassiveInterrupts()
{
  return IoProcessPassiveInterrupts();
}
