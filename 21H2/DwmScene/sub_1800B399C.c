/*
 * XREFs of sub_1800B399C @ 0x1800B399C
 * Callers:
 *     sub_1800ACF60 @ 0x1800ACF60 (sub_1800ACF60.c)
 *     sub_1800ACF68 @ 0x1800ACF68 (sub_1800ACF68.c)
 * Callees:
 *     sub_1800AD490 @ 0x1800AD490 (sub_1800AD490.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800B399C(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    v4 = *a1;
    if ( v1 != v3 )
    {
      do
      {
        sub_1800AD490(v4, 0);
        v4 += 48LL;
      }
      while ( v4 != v3 );
    }
    v5 = 48 * ((a1[2] - v1) / 48);
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v1 - 8);
      v7 = v5 + 39;
      if ( (unsigned __int64)(v1 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v7);
        JUMPOUT(0x1800B3A5ALL);
      }
      v1 = *(_QWORD *)(v1 - 8);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
