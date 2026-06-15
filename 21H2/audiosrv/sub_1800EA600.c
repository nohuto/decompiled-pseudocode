/*
 * XREFs of sub_1800EA600 @ 0x1800EA600
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_12 @ 0x18007A046 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18007A046.c)
 *     sub_18007A0A8 @ 0x18007A0A8 (sub_18007A0A8.c)
 * Callees:
 *     sub_1800EA8B0 @ 0x1800EA8B0 (sub_1800EA8B0.c)
 */

__int64 __fastcall sub_1800EA600(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return sub_1800EA8B0(v2, a2);
  return result;
}
