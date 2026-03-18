/*
 * XREFs of ObReferenceObjectSafe @ 0x1402FB390
 * Callers:
 *     HalpDmaFindAdapterByDeviceId @ 0x1403EF3A4 (HalpDmaFindAdapterByDeviceId.c)
 *     AlpcpDispatchConnectionRequest @ 0x1405E6138 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1405E644C (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpFlushMessagesPort @ 0x1405E98B4 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1405E9C9C (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x1405EA5BC (AlpcpCancelMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x1405EAF10 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpDispatchNewMessage @ 0x1405EC7F0 (AlpcpDispatchNewMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405EE4E0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReferenceConnectedPort @ 0x1405F1540 (AlpcpReferenceConnectedPort.c)
 *     AlpcpReceiveLegacyMessage @ 0x1405F26F0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpQueryRemoteView @ 0x1406C00C0 (AlpcpQueryRemoteView.c)
 *     WmipProcessEvent @ 0x140750FB0 (WmipProcessEvent.c)
 *     CmUnRegisterCallback @ 0x14086BFE0 (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x1408C0160 (KiSwapToUmsThread.c)
 *     AlpcpPortQueryServerInfo @ 0x1408C5940 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x1408C5EF8 (AlpcpReferenceMessageByWaitingThread.c)
 *     ObpCreateTypeArray @ 0x1408E0340 (ObpCreateTypeArray.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140911094 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14091141C (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x1409C8420 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
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
