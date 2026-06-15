/*
 * XREFs of ??1HmdInfo@@QEAA@XZ @ 0x18006F970
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005F038 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_3bf79a1ab22c4b13356b4cd7b985015c____::_1_::dtor$0 @ 0x18006F443 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_18006F443.c)
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800ECFD0 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 *     _CExclusiveModeListener::OnHmdAdded_::_1_::dtor$2 @ 0x18010D1CE (_CExclusiveModeListener--OnHmdAdded_--_1_--dtor$2.c)
 *     _CExclusiveModeListener::OnHmdRemoved_::_1_::dtor$3 @ 0x18010D4F9 (_CExclusiveModeListener--OnHmdRemoved_--_1_--dtor$3.c)
 *     ?OnAppServicesReady@AtmosCheck@@AEAAXXZ @ 0x180136170 (-OnAppServicesReady@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall HmdInfo::~HmdInfo(__int64 *this)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(this);
}
