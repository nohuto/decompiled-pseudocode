/*
 * XREFs of AlpcpUnlockMessage @ 0x14060A7C4
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x14060B9B0 (AlpcpReceiveMessagePort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14060C1E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x14060C5B0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x14060CC70 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpSendMessage @ 0x14060D070 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x14060DAB0 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14060DDF0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLookupMessage @ 0x14060F060 (AlpcpLookupMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140611980 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x140645C40 (AlpcpReceiveLegacyConnectionReply.c)
 *     NtSecureConnectPort @ 0x140645D70 (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x1406468E8 (AlpcpProcessConnectionRequest.c)
 *     AlpcpFlushQueue @ 0x1406471E4 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x140647404 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140647758 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendCloseMessage @ 0x1406479A4 (AlpcpSendCloseMessage.c)
 *     AlpcpAcceptConnectPort @ 0x140648258 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140648CA8 (AlpcpFormatConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x140648EB8 (AlpcpCreateClientPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140649EA8 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x14064A3F0 (NtAlpcOpenSenderProcess.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14064A8F4 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14064B1B0 (AlpcpDispatchReplyToPort.c)
 *     NtAlpcQueryInformationMessage @ 0x14066B4A0 (NtAlpcQueryInformationMessage.c)
 *     AlpcReserveDestroyProcedure @ 0x1406BA480 (AlpcReserveDestroyProcedure.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1406BF1F0 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpCreateReserve @ 0x1406C2824 (AlpcpCreateReserve.c)
 *     NtAlpcOpenSenderThread @ 0x1406D8620 (NtAlpcOpenSenderThread.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406DFF50 (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x1406EB270 (NtAlpcCancelMessage.c)
 *     LpcpCopyRequestData @ 0x1408BD3BC (LpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408BDC70 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerInfo @ 0x1408BE7A8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x14060CF00 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408BE314 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog();
  return AlpcpUnlockBlob(BugCheckParameter2);
}
