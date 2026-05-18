/*
 * XREFs of sub_1800468B0 @ 0x1800468B0
 * Callers:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_6 @ 0x180126F94 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_6.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800468B0(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8

  v1 = a1[6];
  if ( v1 >= 0x10 )
  {
    v3 = a1[3];
    v4 = v1 + 1;
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v3 - 8);
      v6 = v4 + 39;
      v7 = v3 - v5;
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
        goto LABEL_12;
      v3 = v5;
    }
    result = j_j__o_free(v3);
  }
  a1[5] = 0LL;
  a1[6] = 15LL;
  *((_BYTE *)a1 + 24) = 0;
  v9 = *a1;
  if ( !*a1 )
    return result;
  v10 = (a1[2] - v9) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v10 >= 0x1000 )
  {
    v11 = *(_QWORD *)(v9 - 8);
    v6 = v10 + 39;
    v7 = v9 - v11;
    if ( (unsigned __int64)(v7 - 8) <= 0x1F )
    {
      v9 = v11;
      goto LABEL_10;
    }
LABEL_12:
    o__invalid_parameter_noinfo_noreturn(v7, v6);
    JUMPOUT(0x180046954LL);
  }
LABEL_10:
  result = j_j__o_free(v9);
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return result;
}
