/*
 * XREFs of ObReferenceObjectSafe @ 0x1402EEA30
 * Callers:
 *     HalpDmaFindAdapterByDeviceId @ 0x1403EB8D4 (HalpDmaFindAdapterByDeviceId.c)
 *     AlpcpProcessSynchronousRequest @ 0x14060C5B0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDispatchNewMessage @ 0x14060DAB0 (AlpcpDispatchNewMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x140610330 (AlpcpReferenceConnectedPort.c)
 *     AlpcpReceiveLegacyMessage @ 0x140611980 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpQueryRemoteView @ 0x140645A60 (AlpcpQueryRemoteView.c)
 *     AlpcpFlushMessagesPort @ 0x140647028 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x140647404 (AlpcpDisconnectPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x140647C74 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpDispatchConnectionRequest @ 0x14064A78C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x14064B54C (AlpcpReferenceReplyTargetPorts.c)
 *     WmipProcessEvent @ 0x140740850 (WmipProcessEvent.c)
 *     CmUnRegisterCallback @ 0x1408652A0 (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x1408B90E0 (KiSwapToUmsThread.c)
 *     AlpcpPortQueryServerInfo @ 0x1408BE7A8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x1408BED68 (AlpcpReferenceMessageByWaitingThread.c)
 *     ObpCreateTypeArray @ 0x1408D9190 (ObpCreateTypeArray.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090A1A8 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090A53C (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x1409C23F0 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 */

char __fastcall ObReferenceObjectSafe(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v1);
  return 1;
}
