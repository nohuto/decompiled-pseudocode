/*
 * XREFs of sub_180040F80 @ 0x180040F80
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_5 @ 0x180121670 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_5.c)
 *     sub_18012752D @ 0x18012752D (sub_18012752D.c)
 *     sub_1801280EE @ 0x1801280EE (sub_1801280EE.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void __fastcall sub_180040F80(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx

  v1 = a1[4];
  if ( v1 >= 0x10 )
  {
    v3 = a1[1];
    v4 = v1 + 1;
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v3 - 8);
      v6 = v4 + 39;
      v7 = v3 - v5;
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v6);
        JUMPOUT(0x180040FDDLL);
      }
      v3 = v5;
    }
    j_j__o_free(v3);
  }
  a1[3] = 0LL;
  a1[4] = 15LL;
  *((_BYTE *)a1 + 8) = 0;
}
