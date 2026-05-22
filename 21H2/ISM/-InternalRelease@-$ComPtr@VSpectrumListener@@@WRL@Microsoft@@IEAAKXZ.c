/*
 * XREFs of ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x18008AB3C
 * Callers:
 *     ??1?$ComPtr@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A200 (--1-$ComPtr@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@.c)
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x18008A2C8 (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x18008ACC0 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x180092A60 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x180093104 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800933BC (-EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@V12345@PEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAV2345@_N@Details@WRL@Microsoft@@YAJPEAPEAVDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@$$QEAPEAUIHolographicDisplayWatcher@6Holographic@Graphics@7@$$QEAPEAV4567@$$QEA_N@Z @ 0x1800CCBA4 (--$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInte.c)
 *     ??$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@V12345@PEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAV2345@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@$$QEAPEAVSpatialInteractionSourceDeviceCollection@SpatialInteractions@58@$$QEA_N@Z @ 0x1800CCC64 (--$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollectio_ea_1800CCC64.c)
 *     ??1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800CE5A4 (--1SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003A790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
