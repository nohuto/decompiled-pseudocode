/*
 * XREFs of sub_1800177A0 @ 0x1800177A0
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_3 @ 0x18003BE66 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18003BE66.c)
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

BOOL __fastcall sub_1800177A0(void **a1)
{
  BOOL result; // eax

  result = sub_180039D98(*a1);
  *a1 = 0LL;
  return result;
}
