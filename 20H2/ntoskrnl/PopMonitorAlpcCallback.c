/*
 * XREFs of PopMonitorAlpcCallback @ 0x1408F4F70
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x1407CC3B8 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
