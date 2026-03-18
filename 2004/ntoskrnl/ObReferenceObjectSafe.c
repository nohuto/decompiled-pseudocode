/*
 * XREFs of ObReferenceObjectSafe @ 0x140328360
 * Callers:
 *     HalpDmaFindAdapterByDeviceId @ 0x1403EC87C (HalpDmaFindAdapterByDeviceId.c)
 *     AlpcpFlushMessagesPort @ 0x140629478 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x140629854 (AlpcpDisconnectPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14062A0C4 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpDispatchConnectionRequest @ 0x14062CBDC (AlpcpDispatchConnectionRequest.c)
 *     AlpcpCancelMessage @ 0x14062D110 (AlpcpCancelMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x14062D99C (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpQueryRemoteView @ 0x14062EA08 (AlpcpQueryRemoteView.c)
 *     AlpcpProcessSynchronousRequest @ 0x140684720 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140685C20 (AlpcpDispatchNewMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x1406884B0 (AlpcpReferenceConnectedPort.c)
 *     AlpcpReceiveLegacyMessage @ 0x140689B00 (AlpcpReceiveLegacyMessage.c)
 *     WmipProcessEvent @ 0x1407423D0 (WmipProcessEvent.c)
 *     CmUnRegisterCallback @ 0x1408665C0 (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x1408BA400 (KiSwapToUmsThread.c)
 *     AlpcpPortQueryServerInfo @ 0x1408BFAF8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x1408C00B8 (AlpcpReferenceMessageByWaitingThread.c)
 *     ObpCreateTypeArray @ 0x1408DA500 (ObpCreateTypeArray.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090B458 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090B7EC (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x1409C2400 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
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
