/*
 * XREFs of PopUmpoMessageCallback @ 0x14033FB30
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoProcessMessages @ 0x1406FA228 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
