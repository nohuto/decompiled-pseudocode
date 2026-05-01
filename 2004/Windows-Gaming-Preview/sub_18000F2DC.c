/*
 * XREFs of sub_18000F2DC @ 0x18000F2DC
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_0 @ 0x1800462BB (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800462BB.c)
 *     sub_1800462F1 @ 0x1800462F1 (sub_1800462F1.c)
 *     sub_180046735 @ 0x180046735 (sub_180046735.c)
 *     sub_18004688E @ 0x18004688E (sub_18004688E.c)
 *     sub_180046BC8 @ 0x180046BC8 (sub_180046BC8.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18000F2DC(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return j_j__o_free(v1, 1LL);
  return result;
}
