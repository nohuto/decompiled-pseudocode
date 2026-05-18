/*
 * XREFs of sub_18000C0C8 @ 0x18000C0C8
 * Callers:
 *     sub_18011FBBE @ 0x18011FBBE (sub_18011FBBE.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_0 @ 0x18011FC60 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18011FC60.c)
 * Callees:
 *     sub_18000D83C @ 0x18000D83C (sub_18000D83C.c)
 */

__int64 __fastcall sub_18000C0C8(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return sub_18000D83C();
  return result;
}
