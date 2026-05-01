/*
 * XREFs of sub_1800183A0 @ 0x1800183A0
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_9 @ 0x1800464DA (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_9.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800183A0(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[2] - v2;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v3 += 39LL;
      v5 = v2 - v4;
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v3);
        __debugbreak();
        JUMPOUT(0x180018400LL);
      }
      v2 = v4;
    }
    result = j_j__o_free(v2, v3);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
