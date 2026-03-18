/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x1405EAFFC
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1405E5C98 (AlpcpProcessConnectionRequest.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405ECB50 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405EE4E0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1405EF2B0 (AlpcpReceiveMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1405F26F0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406BFF90 (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
