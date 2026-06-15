/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_370e4a00b6cb03b6fca683a12302c177___ @ 0x18006FCF4
 * Callers:
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800EE3D8 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AC8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_370e4a00b6cb03b6fca683a12302c177_::operator() @ 0x1800704C4 (_lambda_370e4a00b6cb03b6fca683a12302c177_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_370e4a00b6cb03b6fca683a12302c177___(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 i; // rbp

  for ( i = a2; i != a3; i += 8LL )
    lambda_370e4a00b6cb03b6fca683a12302c177_::operator()(a4, i);
  *a1 = 0LL;
  if ( a1 != a4 )
  {
    *a1 = *a4;
    *a4 = 0LL;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a4);
  return a1;
}
