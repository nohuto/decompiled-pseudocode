/*
 * XREFs of sub_1800177C8 @ 0x1800177C8
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_2 @ 0x18003BA56 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18003BA56.c)
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

BOOL __fastcall sub_1800177C8(__int64 a1)
{
  char *v2; // rcx
  unsigned __int64 v3; // rdx
  char *v4; // r8
  unsigned __int64 v5; // rdx
  char *v6; // rcx
  BOOL result; // eax

  v2 = *(char **)a1;
  if ( v2 )
  {
    v3 = (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v5 = v3 + 39;
      v6 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        __debugbreak();
        JUMPOUT(0x18001782CLL);
      }
      v2 = v4;
    }
    result = sub_180039D98(v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
