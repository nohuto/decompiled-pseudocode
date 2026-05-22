/*
 * XREFs of ?HasDynamicNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NXZ @ 0x1800CFFE0
 * Callers:
 *     ?CanSwitchTo6DOF@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA_NXZ @ 0x1800CED9C (-CanSwitchTo6DOF@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA_NXZ.c)
 *     ?DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@K_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800CF224 (-DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?CanSendPoses@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEBA_NXZ @ 0x1800DB510 (-CanSendPoses@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEBA_N.c)
 *     ?CanSendPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEBA_NXZ @ 0x18016AA60 (-CanSendPoses@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::HasDynamicNode(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rcx
  bool v3; // bl

  v2 = (RTL_SRWLOCK *)((unsigned __int64)&this[10] & -(__int64)(TryAcquireSRWLockShared(this + 10) != 0));
  v3 = v2 && this[11].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
