/*
 * XREFs of AlpcpAvailableBufferSize @ 0x1405CF054
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x1406CF1B8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1406D06E8 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406D133C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCaptureMessageData @ 0x1406D34DC (AlpcpCaptureMessageData.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406D57E0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpReadMessageData @ 0x1406D6F60 (AlpcpReadMessageData.c)
 *     LpcpCopyRequestData @ 0x1408C1DAC (LpcpCopyRequestData.c)
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
