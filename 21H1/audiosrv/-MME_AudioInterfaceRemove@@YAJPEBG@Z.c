/*
 * XREFs of ?MME_AudioInterfaceRemove@@YAJPEBG@Z @ 0x1800F8190
 * Callers:
 *     ?DeviceRemovalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x1800B94B0 (-DeviceRemovalEvent@CAudioSrv@@UEAAJV-$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocato.c)
 * Callees:
 *     WPP_SF_S @ 0x1800BBFB0 (WPP_SF_S.c)
 */

__int64 __fastcall MME_AudioInterfaceRemove(const unsigned __int16 *a1)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, (__int64)&WPP_609dd533b8aa311af52d5b9794abf855_Traceguids, a1);
  }
  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
  RtlReleaseResource(&PnpInfoResource);
  return 0LL;
}
