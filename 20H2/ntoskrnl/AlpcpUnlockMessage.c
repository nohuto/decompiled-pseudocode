/*
 * XREFs of AlpcpUnlockMessage @ 0x1405F150C
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1405E5C98 (AlpcpProcessConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1405E6A28 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x1405E6F70 (NtAlpcOpenSenderProcess.c)
 *     AlpcpFormatConnectionRequest @ 0x1405E730C (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x1405E751C (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x1405E85DC (AlpcpAcceptConnectPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1405E917C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendCloseMessage @ 0x1405E9568 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x1405E9A70 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x1405E9C9C (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1405E9FF0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1405EA5BC (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1405EAB5C (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405EB9E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpSendMessage @ 0x1405EBDA0 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1405EC7F0 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405ECB50 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLookupMessage @ 0x1405EDE10 (AlpcpLookupMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405EE4E0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1405EEBA0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveMessagePort @ 0x1405F0200 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveLegacyMessage @ 0x1405F26F0 (AlpcpReceiveLegacyMessage.c)
 *     NtAlpcQueryInformationMessage @ 0x140656E90 (NtAlpcQueryInformationMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1406BA3D0 (AlpcpReceiveDirectMessagePort.c)
 *     NtSecureConnectPort @ 0x1406BF9C0 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406BFF90 (AlpcpReceiveLegacyConnectionReply.c)
 *     NtAlpcOpenSenderThread @ 0x1406CE920 (NtAlpcOpenSenderThread.c)
 *     AlpcpCreateReserve @ 0x1406D2E24 (AlpcpCreateReserve.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406D5D24 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcReserveDestroyProcedure @ 0x1406DDC20 (AlpcReserveDestroyProcedure.c)
 *     NtAlpcCancelMessage @ 0x1406E1200 (NtAlpcCancelMessage.c)
 *     LpcpCopyRequestData @ 0x1408C448C (LpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C4D70 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerInfo @ 0x1408C5940 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x1405EEEC0 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408C5414 (AlpcpEnterStateChangeEventMessageLog.c)
 */

void __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog(BugCheckParameter2);
  AlpcpUnlockBlob(BugCheckParameter2);
}
