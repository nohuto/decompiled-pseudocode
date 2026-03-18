/*
 * XREFs of AlpcpDispatchMessage @ 0x1405E85A4
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1405E85DC (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpDispatchReplyToPort @ 0x1405EAB5C (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405EB9E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1405EC7F0 (AlpcpDispatchNewMessage.c)
 */

__int64 __fastcall AlpcpDispatchMessage(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v1 + 24) )
    return AlpcpDispatchNewMessage();
  if ( *(_QWORD *)(v1 + 32) )
    return AlpcpDispatchReplyToWaitingThread();
  return AlpcpDispatchReplyToPort();
}
