/*
 * XREFs of ?CanSwitchTo6DOF@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAA_NXZ @ 0x1800CED9C
 * Callers:
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D1510 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     std::_Func_impl_no_alloc__lambda_e526ae9bd02f5319a142ce48117bd5e8__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800D39B0 (std--_Func_impl_no_alloc__lambda_e526ae9bd02f5319a142ce48117bd5e8__void_std--shared_ea_1800D39B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800CFDE4 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?HasDynamicNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NXZ @ 0x1800CFFE0 (-HasDynamicNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NXZ.c)
 */

char __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::CanSwitchTo6DOF(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *this)
{
  char v2; // bl
  _BYTE v4[24]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( !Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::HasDynamicNode(this) )
    return Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
             this,
             (struct Windows::Internal::Holographic::DynamicNodeInfo *)v4);
  return v2;
}
