/*
 * XREFs of AlpcpAvailableBufferSize @ 0x1405CF054
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x1405DFA58 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1405E0F88 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1405E1BDC (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCaptureMessageData @ 0x1405E3D7C (AlpcpCaptureMessageData.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1405E6080 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpReadMessageData @ 0x1405E7800 (AlpcpReadMessageData.c)
 *     LpcpCopyRequestData @ 0x1408C1C4C (LpcpCopyRequestData.c)
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
