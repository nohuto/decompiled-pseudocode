/*
 * XREFs of AlpcpDispatchMessage @ 0x140648B88
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140648258 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpDispatchReplyToWaitingThread @ 0x14060C1E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x14060DAB0 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14064B1B0 (AlpcpDispatchReplyToPort.c)
 */

__int64 __fastcall AlpcpDispatchMessage(__int64 *a1)
{
  __int64 v1; // rax

  v1 = a1[1];
  if ( !*(_QWORD *)(v1 + 24) )
    return AlpcpDispatchNewMessage(a1);
  if ( *(_QWORD *)(v1 + 32) )
    return AlpcpDispatchReplyToWaitingThread((__int64)a1);
  return AlpcpDispatchReplyToPort();
}
