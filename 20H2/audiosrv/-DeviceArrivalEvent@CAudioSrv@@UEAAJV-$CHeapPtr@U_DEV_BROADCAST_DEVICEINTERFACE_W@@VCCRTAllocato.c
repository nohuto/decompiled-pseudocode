/*
 * XREFs of ?DeviceArrivalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x1800B8820
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36390724@@@details@wil@@QEAA_NXZ @ 0x18006D3C8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36390724@@@.c)
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x180104CA8 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CAudioSrv::DeviceArrivalEvent(__int64 a1, void **a2)
{
  BOOL v3; // ebx

  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoShared + 1, 1u);
  _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoActual + 1, 1u);
  RtlReleaseResource(&PnpInfoResource);
  v3 = (int)FlushDeviceTopologyCache() < 0;
  KsNotifications_AudioInterfaceArrival((const unsigned __int16 *)*a2 + 14);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36390724>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_AudioSrv_RC_36390724>::GetImpl'::`2'::impl)
    && (int)FlushDeviceTopologyCache() < 0 )
  {
    v3 = 1;
  }
  free(*a2);
  *a2 = 0LL;
  return v3;
}
