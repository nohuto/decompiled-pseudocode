/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x18042DA70
 * Callers:
 *     _std::vector_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____std::allocator_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::_Range_construct_or_tidy_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____const____::_1_::dtor$0 @ 0x18042D807 (_std--vector_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color____st_ea_18042D807.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18008BEA4 (-_Tidy@-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allo.c)
 */

void __fastcall std::_Tidy_guard<std::vector<std::vector<Windows::UI::Color>>>::~_Tidy_guard<std::vector<std::vector<Windows::UI::Color>>>(
        _QWORD **a1)
{
  _QWORD *v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<std::vector<Windows::UI::Color>>::_Tidy(v1);
}
