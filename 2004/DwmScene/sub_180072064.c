/*
 * XREFs of sub_180072064 @ 0x180072064
 * Callers:
 *     sub_18006C9C4 @ 0x18006C9C4 (sub_18006C9C4.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_16 @ 0x180124FAA (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180124FAA.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180072064(__int64 **a1)
{
  __int64 *v1; // rbx
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = v1[3];
    if ( v2 >= 0x10 )
    {
      v3 = *v1;
      v4 = v2 + 1;
      if ( v4 >= 0x1000 )
      {
        v5 = *(_QWORD *)(v3 - 8);
        v6 = v4 + 39;
        v7 = v3 - v5;
        if ( (unsigned __int64)(v7 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v7, v6);
          JUMPOUT(0x1800720C4LL);
        }
        v3 = v5;
      }
      result = j_j__o_free(v3);
    }
    v1[2] = 0LL;
    v1[3] = 15LL;
    *(_BYTE *)v1 = 0;
  }
  return result;
}
