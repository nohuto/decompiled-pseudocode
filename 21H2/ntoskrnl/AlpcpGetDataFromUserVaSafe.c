/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x1407F58C4
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406640F0 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpProcessConnectionRequest @ 0x140667A4C (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x1407A7850 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407AACC0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x1407AC930 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407AD040 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
