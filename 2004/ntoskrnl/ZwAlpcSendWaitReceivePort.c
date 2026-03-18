/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x1403F4740
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402769F8 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessages @ 0x1406A7884 (PopUmpoProcessMessages.c)
 *     PopMonitorProcessLoop @ 0x1407BDB28 (PopMonitorProcessLoop.c)
 *     DbgkpSendErrorMessage @ 0x140884280 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
