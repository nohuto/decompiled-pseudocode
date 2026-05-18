/*
 * XREFs of sub_180099A10 @ 0x180099A10
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180099A10(_QWORD *a1, char a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = a1[3];
  if ( v4 )
  {
    v5 = (a1[5] - v4) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v4 - 8);
      v7 = v5 + 39;
      v8 = v4 - v6;
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v7);
        JUMPOUT(0x180099A8ALL);
      }
      v4 = v6;
    }
    j_j__o_free(v4);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
