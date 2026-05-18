/*
 * XREFs of sub_18011A848 @ 0x18011A848
 * Callers:
 *     sub_18011B508 @ 0x18011B508 (sub_18011B508.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_44 @ 0x18012B6AC (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012B6AC.c)
 * Callees:
 *     <none>
 */

volatile __int32 *__fastcall sub_18011A848(volatile __int32 **a1)
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
