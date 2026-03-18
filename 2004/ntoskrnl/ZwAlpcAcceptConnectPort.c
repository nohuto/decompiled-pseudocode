/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x1403F44A0
 * Callers:
 *     PopUmpoProcessMessage @ 0x1406A79B4 (PopUmpoProcessMessage.c)
 *     PopMonitorProcessLoop @ 0x1407BDB28 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcAcceptConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
