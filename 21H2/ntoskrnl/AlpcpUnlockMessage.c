/*
 * XREFs of AlpcpUnlockMessage @ 0x1405E9ECC
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x1405DDB60 (AlpcpReceiveLegacyConnectionReply.c)
 *     NtSecureConnectPort @ 0x1405DDC90 (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x1405DECC8 (AlpcpProcessConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1405DFA58 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x1405DFFA0 (NtAlpcOpenSenderProcess.c)
 *     AlpcpFormatConnectionRequest @ 0x1405E033C (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1405E054C (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x1405E103C (AlpcpAcceptConnectPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1405E1BDC (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendCloseMessage @ 0x1405E1FC8 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x1405E24D0 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x1405E26FC (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1405E2A50 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1405E301C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1405E35BC (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E4440 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1405E5250 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E55B0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLookupMessage @ 0x1405E6870 (AlpcpLookupMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E6EE0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1405E7560 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveMessagePort @ 0x1405E8BC0 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveLegacyMessage @ 0x1405EA7A0 (AlpcpReceiveLegacyMessage.c)
 *     NtAlpcQueryInformationMessage @ 0x14062D120 (NtAlpcQueryInformationMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x140693B70 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcOpenSenderThread @ 0x1406ACA40 (NtAlpcOpenSenderThread.c)
 *     AlpcpCreateReserve @ 0x1406B0D14 (AlpcpCreateReserve.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406B41E4 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcReserveDestroyProcedure @ 0x1406BDC70 (AlpcReserveDestroyProcedure.c)
 *     NtAlpcCancelMessage @ 0x1406C1650 (NtAlpcCancelMessage.c)
 *     LpcpCopyRequestData @ 0x1408C1C4C (LpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2530 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerInfo @ 0x1408C3100 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x1405E7880 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408C2BD4 (AlpcpEnterStateChangeEventMessageLog.c)
 */

void __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
  AlpcpUnlockBlob(BugCheckParameter2);
}
