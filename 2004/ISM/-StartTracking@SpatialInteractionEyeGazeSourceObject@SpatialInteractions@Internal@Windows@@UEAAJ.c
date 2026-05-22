/*
 * XREFs of ?StartTracking@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800DC9D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800CFE74 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     ?StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800D9210 (-StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISp.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::StartTracking(
        __int64 a1,
        __int64 a2,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a3,
        HSTRING a4,
        unsigned int a5)
{
  int started; // esi
  HSTRING v7; // rcx
  PCWSTR StringRawBuffer; // rax
  __int128 v9; // xmm0
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+40h] [rbp-28h]

  started = Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::StartTracking(
              (HSTRING *)a1,
              a2,
              a3,
              a4,
              a5);
  if ( started >= 0 )
  {
    if ( Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
           (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)a1,
           (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v11) )
    {
      v7 = *(HSTRING *)(a1 + 96);
      *(_BYTE *)(a1 + 580) = 1;
      StringRawBuffer = WindowsGetStringRawBuffer(v7, 0LL);
      _o_wcscpy_s(a1 + 582, 200LL, StringRawBuffer);
      v9 = v11;
      *(_DWORD *)(a1 + 1000) = v12;
      *(_OWORD *)(a1 + 984) = v9;
    }
    *(_BYTE *)(a1 + 105) = 1;
  }
  return (unsigned int)started;
}
