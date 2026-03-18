/*
 * XREFs of PopMonitorAlpcCallback @ 0x1408EE070
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x1407BA9B8 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
