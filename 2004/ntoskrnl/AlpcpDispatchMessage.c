/*
 * XREFs of AlpcpDispatchMessage @ 0x14062AFD8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14062A6A8 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpDispatchReplyToPort @ 0x14062D600 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140684350 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x140685C20 (AlpcpDispatchNewMessage.c)
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
