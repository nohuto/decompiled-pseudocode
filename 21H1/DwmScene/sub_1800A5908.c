/*
 * XREFs of sub_1800A5908 @ 0x1800A5908
 * Callers:
 *     sub_1800A36DC @ 0x1800A36DC (sub_1800A36DC.c)
 *     sub_180107B00 @ 0x180107B00 (sub_180107B00.c)
 * Callees:
 *     sub_18008DD30 @ 0x18008DD30 (sub_18008DD30.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A5908(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rbp
  __int64 *v4; // rsi
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
        sub_18008DD30(v4);
        v4 += 8;
      }
      while ( v4 != v3 );
    }
    v5 = ((char *)a1[2] - (char *)v1) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( v5 >= 0x1000 )
    {
      v6 = *(v1 - 1);
      v7 = v5 + 39;
      if ( (unsigned __int64)v1 - v6 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v7);
        JUMPOUT(0x1800A59A1LL);
      }
      v1 = (__int64 *)*(v1 - 1);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
