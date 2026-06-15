/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_b1bf813238bea76d99dc89795d1a2868___ @ 0x18005B6B0
 * Callers:
 *     ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180057FC0 (-PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANC.c)
 * Callees:
 *     ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z @ 0x18005B718 (-EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_b1bf813238bea76d99dc89795d1a2868___(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rdi

  for ( i = a2; i != a3; ++i )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*i + 56LL))(*i) )
      CSpatialProperties::EnsureSpatialSettingsAreInitialized(
        (LPCRITICAL_SECTION)(*i + 1768LL),
        *(const unsigned __int16 **)(*i + 24LL));
  }
  return a1;
}
