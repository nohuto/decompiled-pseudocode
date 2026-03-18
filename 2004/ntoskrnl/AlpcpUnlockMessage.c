/*
 * XREFs of AlpcpUnlockMessage @ 0x140682914
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x140625D80 (NtAlpcQueryInformationMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x140628D28 (AlpcpProcessConnectionRequest.c)
 *     AlpcpFlushQueue @ 0x140629634 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x140629854 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140629BA8 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendCloseMessage @ 0x140629DF4 (AlpcpSendCloseMessage.c)
 *     AlpcpAcceptConnectPort @ 0x14062A6A8 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x14062B0F8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x14062B308 (AlpcpCreateClientPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14062C2F8 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x14062C840 (NtAlpcOpenSenderProcess.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14062CD44 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14062D110 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14062D600 (AlpcpDispatchReplyToPort.c)
 *     NtSecureConnectPort @ 0x14062E280 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x14062E850 (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpReceiveMessagePort @ 0x140683B20 (AlpcpReceiveMessagePort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140684350 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x140684720 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x140684DE0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpSendMessage @ 0x1406851E0 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x140685C20 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140685F60 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLookupMessage @ 0x1406871E0 (AlpcpLookupMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140689B00 (AlpcpReceiveLegacyMessage.c)
 *     AlpcReserveDestroyProcedure @ 0x1406DB790 (AlpcReserveDestroyProcedure.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1406DF770 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCreateReserve @ 0x1406E2DA4 (AlpcpCreateReserve.c)
 *     NtAlpcOpenSenderThread @ 0x1406FC080 (NtAlpcOpenSenderThread.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140702CE0 (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x14070ED20 (NtAlpcCancelMessage.c)
 *     LpcpCopyRequestData @ 0x1408BE6DC (LpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408BEFC0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerInfo @ 0x1408BFAF8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x140685070 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408BF664 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog();
  return AlpcpUnlockBlob(BugCheckParameter2);
}
