/*
 * XREFs of ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800D0334
 * Callers:
 *     ?CanSwitchTo6DOF@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA_NXZ @ 0x1800CF2EC (-CanSwitchTo6DOF@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA_NXZ.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D1A60 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     ?EnsureDynamicNodeInfo@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@@Z @ 0x1800D7644 (-EnsureDynamicNodeInfo@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@IEAA.c)
 *     ?StartTracking@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800DCE90 (-StartTracking@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJ.c)
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_NW4HandState@1234@@Z @ 0x1800DED1C (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpati.c)
 *     ?FillDeviceInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCSourceDeviceInfo@@@Z @ 0x1800DFBE0 (-FillDeviceInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCS.c)
 *     ?GenerateHandLostInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAXPEAUHandInputInfo@1234@@Z @ 0x1800DFD04 (-GenerateHandLostInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IE.c)
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x18016C18C (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 *     ?FillDeviceInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCSourceDeviceInfo@@@Z @ 0x18016C780 (-FillDeviceInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPE.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *this,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a2)
{
  RTL_SRWLOCK *v2; // rsi
  bool v5; // bl

  v2 = (RTL_SRWLOCK *)((char *)this + 48);
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 56);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 18);
  v5 = RtlCompareMemory(
         a2,
         &`Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo'::`2'::noNodeId,
         0x10uLL) != 16;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v5;
}
