/*
 * XREFs of sub_1800CC42C @ 0x1800CC42C
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_31 @ 0x180127E10 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180127E10.c)
 * Callees:
 *     sub_1800CCED4 @ 0x1800CCED4 (sub_1800CCED4.c)
 */

__int64 __fastcall sub_1800CC42C(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return sub_1800CCED4();
  return result;
}
