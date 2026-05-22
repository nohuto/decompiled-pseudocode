/*
 * XREFs of ??1?$ComPtr@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A300
 * Callers:
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$4 @ 0x18004E837 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$4.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$5 @ 0x180050B8A (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_180050B8A.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$6 @ 0x180050BA3 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_180050BA3.c)
 *     _Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider____::_1_::dtor$0 @ 0x180089B57 (_Microsoft--WRL--Details--Make_SpectrumListener_MPCRawInputProvider____--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection___bool__::_1_::dtor$1 @ 0x1800CCD41 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Internal--SpatialInteractions-_ea_1800CCD41.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler>::~ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease(a1);
}
