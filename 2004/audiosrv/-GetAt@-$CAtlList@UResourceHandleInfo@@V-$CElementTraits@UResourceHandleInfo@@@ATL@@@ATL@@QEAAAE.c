/*
 * XREFs of ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800B973C
 * Callers:
 *     ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180046DE0 (-PreADGTermination@CAudioSrv@@EEAAXXZ.c)
 *     ?Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800DBA10 (-Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     AudioServerGetAudioHistoryProducerHandle @ 0x1800DE830 (AudioServerGetAudioHistoryProducerHandle.c)
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F38F8 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x1800F3EF4 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F4A2C (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z @ 0x1800F4F30 (-ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z.c)
 *     ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F5464 (-ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800F5590 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x1800F5910 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x1800F5D74 (-UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDI.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
        __int64 a1,
        __int64 a2)
{
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  return a2 + 16;
}
