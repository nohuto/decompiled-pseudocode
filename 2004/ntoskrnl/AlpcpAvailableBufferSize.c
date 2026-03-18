/*
 * XREFs of AlpcpAvailableBufferSize @ 0x1405C7D34
 * Callers:
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14062B07C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14062C2F8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14062CD44 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpReadMessageData @ 0x140684FF0 (AlpcpReadMessageData.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406869F0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpCaptureMessageData @ 0x1406E2FF8 (AlpcpCaptureMessageData.c)
 *     LpcpCopyRequestData @ 0x1408BE6DC (LpcpCopyRequestData.c)
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
