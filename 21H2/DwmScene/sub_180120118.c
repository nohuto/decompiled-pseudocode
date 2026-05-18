/*
 * XREFs of sub_180120118 @ 0x180120118
 * Callers:
 *     sub_180120DD8 @ 0x180120DD8 (sub_180120DD8.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_45 @ 0x180130FC4 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180130FC4.c)
 * Callees:
 *     <none>
 */

volatile __int32 *__fastcall sub_180120118(volatile __int32 **a1)
{
  volatile __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    result = *(volatile __int32 **)result;
    _InterlockedExchange(result + 64, 0);
  }
  return result;
}
