/*
 * XREFs of sub_18006F64C @ 0x18006F64C
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_30 @ 0x18012CB10 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012CB10.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 */

__int64 __fastcall sub_18006F64C(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 4 )
    result = unknown_libname_103(i);
  return result;
}
