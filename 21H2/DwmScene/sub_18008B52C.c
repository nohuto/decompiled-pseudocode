/*
 * XREFs of sub_18008B52C @ 0x18008B52C
 * Callers:
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 *     sub_18012BB51 @ 0x18012BB51 (sub_18012BB51.c)
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA_4 @ 0x18012DCB5 (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@s_ea_18012DCB5.c)
 *     sub_18012EEF9 @ 0x18012EEF9 (sub_18012EEF9.c)
 *     sub_18012F0AC @ 0x18012F0AC (sub_18012F0AC.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_37 @ 0x18012F4BE (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18012F4BE.c)
 *     sub_18012F514 @ 0x18012F514 (sub_18012F514.c)
 *     sub_18012F8E5 @ 0x18012F8E5 (sub_18012F8E5.c)
 *     sub_180130B97 @ 0x180130B97 (sub_180130B97.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18008B52C(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = (a1[2] - v2) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x18008B588LL);
      }
      v2 = v4;
    }
    result = j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
