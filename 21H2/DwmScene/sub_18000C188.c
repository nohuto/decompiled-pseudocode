/*
 * XREFs of sub_18000C188 @ 0x18000C188
 * Callers:
 *     sub_18012548E @ 0x18012548E (sub_18012548E.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_0 @ 0x180125530 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180125530.c)
 * Callees:
 *     sub_18000D91C @ 0x18000D91C (sub_18000D91C.c)
 */

__int64 __fastcall sub_18000C188(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return sub_18000D91C();
  return result;
}
