/*
 * XREFs of sub_18007DF2C @ 0x18007DF2C
 * Callers:
 *     sub_180125DCA @ 0x180125DCA (sub_180125DCA.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_23 @ 0x180125E12 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180125E12.c)
 * Callees:
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 */

__int64 __fastcall sub_18007DF2C(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 16LL )
    result = unknown_libname_100(i, 0);
  return result;
}
