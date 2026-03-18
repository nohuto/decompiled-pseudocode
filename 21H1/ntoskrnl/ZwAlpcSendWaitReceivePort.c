/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1403F34B0
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14033D078 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x14070EB24 (PopUmpoProcessMessages.c)
 *     PopMonitorProcessLoop @ 0x1407BA9B8 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
