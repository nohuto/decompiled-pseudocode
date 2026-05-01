/*
 * XREFs of sub_180012348 @ 0x180012348
 * Callers:
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA @ 0x1800460CF (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA.c)
 *     sub_1800460E1 @ 0x1800460E1 (sub_1800460E1.c)
 *     sub_180046117 @ 0x180046117 (sub_180046117.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_3 @ 0x180046129 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_3.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA @ 0x18004613B (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV.c)
 *     unknown_libname_8 @ 0x18004615F (unknown_libname_8.c)
 *     sub_1800461B3 @ 0x1800461B3 (sub_1800461B3.c)
 *     sub_1800461C5 @ 0x1800461C5 (sub_1800461C5.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_2 @ 0x18004643E (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18004643E.c)
 *     unknown_libname_45 @ 0x18004652B (unknown_libname_45.c)
 *     sub_18004653D @ 0x18004653D (sub_18004653D.c)
 *     sub_18004654F @ 0x18004654F (sub_18004654F.c)
 *     sub_1800466FF @ 0x1800466FF (sub_1800466FF.c)
 *     sub_180046A96 @ 0x180046A96 (sub_180046A96.c)
 *     sub_180046ADE @ 0x180046ADE (sub_180046ADE.c)
 *     sub_180046B02 @ 0x180046B02 (sub_180046B02.c)
 *     sub_180046B92 @ 0x180046B92 (sub_180046B92.c)
 *     unknown_libname_25 @ 0x180046BB6 (unknown_libname_25.c)
 *     sub_180046D01 @ 0x180046D01 (sub_180046D01.c)
 *     unknown_libname_28 @ 0x180046D72 (unknown_libname_28.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_180012348(HSTRING *a1)
{
  HRESULT result; // eax

  result = WindowsDeleteString(*a1);
  *a1 = 0LL;
  return result;
}
