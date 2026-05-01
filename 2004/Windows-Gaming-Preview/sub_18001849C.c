/*
 * XREFs of sub_18001849C @ 0x18001849C
 * Callers:
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_1 @ 0x180046450 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_1.c)
 *     sub_180046462 @ 0x180046462 (sub_180046462.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_3 @ 0x180046486 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180046486.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_0 @ 0x180046561 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_180046561.c)
 *     sub_180046585 @ 0x180046585 (sub_180046585.c)
 *     sub_18004687C @ 0x18004687C (sub_18004687C.c)
 *     sub_18004690C @ 0x18004690C (sub_18004690C.c)
 *     sub_180046E6F @ 0x180046E6F (sub_180046E6F.c)
 *     unknown_libname_53 @ 0x180046E93 (unknown_libname_53.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18001849C(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return j_j__o_free(v2, a2);
  return result;
}
