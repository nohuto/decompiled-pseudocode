/*
 * XREFs of ObReferenceObjectSafe @ 0x140212AE0
 * Callers:
 *     HalpDmaFindAdapterByDeviceId @ 0x1403EFE84 (HalpDmaFindAdapterByDeviceId.c)
 *     AlpcpQueryRemoteView @ 0x1406CD184 (AlpcpQueryRemoteView.c)
 *     AlpcpDispatchConnectionRequest @ 0x1406CE8C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1406CEBDC (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpFlushMessagesPort @ 0x1406D1A74 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1406D1E5C (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x1406D277C (AlpcpCancelMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x1406D30D0 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpDispatchNewMessage @ 0x1406D49B0 (AlpcpDispatchNewMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1406D6640 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReferenceConnectedPort @ 0x1406D9660 (AlpcpReferenceConnectedPort.c)
 *     AlpcpReceiveLegacyMessage @ 0x1406D9F00 (AlpcpReceiveLegacyMessage.c)
 *     WmipProcessEvent @ 0x140757F40 (WmipProcessEvent.c)
 *     CmUnRegisterCallback @ 0x140869D70 (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x1408BDA80 (KiSwapToUmsThread.c)
 *     AlpcpPortQueryServerInfo @ 0x1408C3260 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x1408C3818 (AlpcpReferenceMessageByWaitingThread.c)
 *     ObpCreateTypeArray @ 0x1408DDC60 (ObpCreateTypeArray.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E9A4 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090ED2C (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x1409C6410 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
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
