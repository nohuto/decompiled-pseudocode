/*
 * XREFs of sub_180107A98 @ 0x180107A98
 * Callers:
 *     sub_18012A442 @ 0x18012A442 (sub_18012A442.c)
 *     sub_180133750 @ 0x180133750 (sub_180133750.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180107A98(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    v3 = (a1[5] - v2) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x180107AFELL);
      }
      v2 = v4;
    }
    j_j__o_free(v2);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  return sub_18010B614(a1 + 1);
}
