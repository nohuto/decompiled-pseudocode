/*
 * XREFs of AlpcpUnlockMessage @ 0x1407A7628
 * Callers:
 *     NtAlpcCancelMessage @ 0x140662130 (NtAlpcCancelMessage.c)
 *     AlpcpCancelMessage @ 0x140662E08 (AlpcpCancelMessage.c)
 *     NtAlpcOpenSenderThread @ 0x140663910 (NtAlpcOpenSenderThread.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406640F0 (AlpcpReceiveLegacyConnectionReply.c)
 *     NtSecureConnectPort @ 0x140664220 (NtSecureConnectPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406652DC (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x1406657C0 (NtAlpcOpenSenderProcess.c)
 *     AlpcpAcceptConnectPort @ 0x140665B68 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1406666B4 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCreateClientPort @ 0x140667114 (AlpcpCreateClientPort.c)
 *     AlpcpProcessConnectionRequest @ 0x140667A4C (AlpcpProcessConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x140668084 (AlpcpFormatConnectionRequest.c)
 *     NtAlpcQueryInformationMessage @ 0x14066AA00 (NtAlpcQueryInformationMessage.c)
 *     AlpcpCreateReserve @ 0x1406CBB84 (AlpcpCreateReserve.c)
 *     AlpcReserveDestroyProcedure @ 0x1406E0930 (AlpcReserveDestroyProcedure.c)
 *     AlpcpFlushQueue @ 0x14074DEF4 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x14074E130 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14074E474 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendCloseMessage @ 0x14074E73C (AlpcpSendCloseMessage.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14074EB48 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1407A6A74 (AlpcpReceiveDirectMessagePort.c)
 *     AlpcpDispatchReplyToPort @ 0x1407A6CE4 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReceiveMessagePort @ 0x1407A8B00 (AlpcpReceiveMessagePort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407A9A80 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpSendMessage @ 0x1407A9ED0 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1407AA950 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407AACC0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLookupMessage @ 0x1407ABD80 (AlpcpLookupMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407AD040 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1407AD8F0 (AlpcpReceiveSynchronousReply.c)
 *     LpcpCopyRequestData @ 0x140965C1C (LpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1409663D0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerInfo @ 0x140966F60 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x1407B0F40 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140966A84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog();
  return AlpcpUnlockBlob(BugCheckParameter2);
}
