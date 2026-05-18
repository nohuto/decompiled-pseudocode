/*
 * XREFs of sub_1800F6218 @ 0x1800F6218
 * Callers:
 *     sub_1800F451C @ 0x1800F451C (sub_1800F451C.c)
 *     sub_1800FB430 @ 0x1800FB430 (sub_1800FB430.c)
 *     sub_1800FBA20 @ 0x1800FBA20 (sub_1800FBA20.c)
 *     sub_180115D7C @ 0x180115D7C (sub_180115D7C.c)
 *     sub_180116498 @ 0x180116498 (sub_180116498.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800F6218(__int64 *a1)
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
    v3 = 12 * ((a1[2] - v2) / 12);
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x1800F6292LL);
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
