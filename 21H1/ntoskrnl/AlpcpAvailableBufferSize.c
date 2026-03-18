/*
 * XREFs of AlpcpAvailableBufferSize @ 0x1405C6D34
 * Callers:
 *     AlpcpReadMessageData @ 0x14060CE80 (AlpcpReadMessageData.c)
 *     AlpcpSendMessage @ 0x14060D070 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14060E870 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140648C2C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140649EA8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14064A8F4 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCaptureMessageData @ 0x1406C2A78 (AlpcpCaptureMessageData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpAvailableBufferSize(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 96);
  if ( v1 )
    return *(_QWORD *)(v1 + 32) - 40LL;
  else
    return 512LL;
}
