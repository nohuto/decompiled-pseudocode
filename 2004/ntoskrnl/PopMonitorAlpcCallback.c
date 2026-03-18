/*
 * XREFs of PopMonitorAlpcCallback @ 0x1408EF360
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x1407BDB28 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
