/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x1406CAB5C
 * Callers:
 *     AlpcpReceiveMessage @ 0x14060AA80 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x14060C5B0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x14060DDF0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140611980 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140645C40 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x1406468E8 (AlpcpProcessConnectionRequest.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
