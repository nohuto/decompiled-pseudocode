/*
 * XREFs of sub_1800E3044 @ 0x1800E3044
 * Callers:
 *     sub_180077CDC @ 0x180077CDC (sub_180077CDC.c)
 *     sub_18012AC89 @ 0x18012AC89 (sub_18012AC89.c)
 *     sub_18012AEC0 @ 0x18012AEC0 (sub_18012AEC0.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800E3044(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = a1[8];
  if ( v2 )
  {
    v3 = (a1[10] - v2) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x1800E30A2LL);
      }
      v2 = v4;
    }
    result = j_j__o_free(v2);
    a1[8] = 0LL;
    a1[9] = 0LL;
    a1[10] = 0LL;
  }
  return result;
}
