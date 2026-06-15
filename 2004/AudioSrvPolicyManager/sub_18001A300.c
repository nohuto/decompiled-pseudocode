/*
 * XREFs of sub_18001A300 @ 0x18001A300
 * Callers:
 *     sub_18003B964 @ 0x18003B964 (sub_18003B964.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_1 @ 0x18003B9CB (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18003B9CB.c)
 *     sub_18003B9DD @ 0x18003B9DD (sub_18003B9DD.c)
 *     sub_18003B9EF @ 0x18003B9EF (sub_18003B9EF.c)
 *     sub_18003BAEB @ 0x18003BAEB (sub_18003BAEB.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_4 @ 0x18003BEBE (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_4.c)
 *     unknown_libname_8 @ 0x18003BEF4 (unknown_libname_8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001A300(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)a1);
    *(_BYTE *)(a1 + 8) = 0;
  }
}
