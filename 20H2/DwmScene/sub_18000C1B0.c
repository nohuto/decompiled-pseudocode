/*
 * XREFs of sub_18000C1B0 @ 0x18000C1B0
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA @ 0x18011FBD6 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHA.c)
 * Callees:
 *     sub_18000C498 @ 0x18000C498 (sub_18000C498.c)
 */

__int64 __fastcall sub_18000C1B0(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[1] )
    result = sub_18000C498();
  if ( *a1 )
    return sub_18000C498();
  return result;
}
