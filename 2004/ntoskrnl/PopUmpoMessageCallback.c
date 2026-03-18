/*
 * XREFs of PopUmpoMessageCallback @ 0x1402DEB30
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoProcessMessages @ 0x1406A7884 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
