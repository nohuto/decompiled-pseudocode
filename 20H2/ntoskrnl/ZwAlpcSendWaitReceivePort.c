/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1403F92F0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140362144 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1406FA228 (PopUmpoProcessMessages.c)
 *     PopMonitorProcessLoop @ 0x1407CC3B8 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x140889DD0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
