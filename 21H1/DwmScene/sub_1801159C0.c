/*
 * XREFs of sub_1801159C0 @ 0x1801159C0
 * Callers:
 *     unknown_libname_88 @ 0x18012B088 (unknown_libname_88.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_7 @ 0x18012B094 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_7.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_45 @ 0x18012B75A (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012B75A.c)
 * Callees:
 *     sub_180068FF4 @ 0x180068FF4 (sub_180068FF4.c)
 */

__int64 __fastcall sub_1801159C0(_QWORD *a1)
{
  sub_180068FF4((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  return j_j__o_free(*a1);
}
