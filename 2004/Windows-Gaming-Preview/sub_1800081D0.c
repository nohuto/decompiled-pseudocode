/*
 * XREFs of sub_1800081D0 @ 0x1800081D0
 * Callers:
 *     sub_180046001 @ 0x180046001 (sub_180046001.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_2 @ 0x180046013 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_2.c)
 *     unknown_libname_6 @ 0x180046025 (unknown_libname_6.c)
 *     sub_18004605B @ 0x18004605B (sub_18004605B.c)
 *     sub_18004606D @ 0x18004606D (sub_18004606D.c)
 *     sub_180046083 @ 0x180046083 (sub_180046083.c)
 *     sub_1800460BD @ 0x1800460BD (sub_1800460BD.c)
 *     sub_180046105 @ 0x180046105 (sub_180046105.c)
 *     sub_18004614D @ 0x18004614D (sub_18004614D.c)
 *     unknown_libname_11 @ 0x180046397 (unknown_libname_11.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_0 @ 0x1800463A9 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_0.c)
 *     sub_1800463F6 @ 0x1800463F6 (sub_1800463F6.c)
 *     sub_180046408 @ 0x180046408 (sub_180046408.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_1 @ 0x18004642C (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18004642C.c)
 *     ?dtor$27@?0??_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA @ 0x180046573 (-dtor$27@-0--_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z@4HA.c)
 *     sub_180046659 @ 0x180046659 (sub_180046659.c)
 *     sub_1800466B3 @ 0x1800466B3 (sub_1800466B3.c)
 *     sub_1800466C9 @ 0x1800466C9 (sub_1800466C9.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_1 @ 0x1800466ED (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_1800466ED.c)
 *     unknown_libname_16 @ 0x180046723 (unknown_libname_16.c)
 *     sub_1800467BD @ 0x1800467BD (sub_1800467BD.c)
 *     sub_180046A06 @ 0x180046A06 (sub_180046A06.c)
 *     unknown_libname_47 @ 0x180046A18 (unknown_libname_47.c)
 *     ?dtor$0@?0??do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z@4HA_0 @ 0x180046A3C (-dtor$0@-0--do_put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@s_ea_180046A3C.c)
 *     sub_180046A4E @ 0x180046A4E (sub_180046A4E.c)
 *     sub_180046ABA @ 0x180046ABA (sub_180046ABA.c)
 *     sub_180046ACC @ 0x180046ACC (sub_180046ACC.c)
 *     unknown_libname_50 @ 0x180046B4A (unknown_libname_50.c)
 *     sub_180046D60 @ 0x180046D60 (sub_180046D60.c)
 *     sub_180046DF0 @ 0x180046DF0 (sub_180046DF0.c)
 *     unknown_libname_30 @ 0x180046EA5 (unknown_libname_30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800081D0(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
