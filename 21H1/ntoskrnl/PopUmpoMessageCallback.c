/*
 * XREFs of PopUmpoMessageCallback @ 0x14035CC40
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoProcessMessages @ 0x14070EB24 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
