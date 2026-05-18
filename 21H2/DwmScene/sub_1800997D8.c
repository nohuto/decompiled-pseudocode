/*
 * XREFs of sub_1800997D8 @ 0x1800997D8
 * Callers:
 *     sub_180099E70 @ 0x180099E70 (sub_180099E70.c)
 *     sub_18009D690 @ 0x18009D690 (sub_18009D690.c)
 * Callees:
 *     sub_1800998A4 @ 0x1800998A4 (sub_1800998A4.c)
 *     sub_1800999C8 @ 0x1800999C8 (sub_1800999C8.c)
 *     sub_18009A010 @ 0x18009A010 (sub_18009A010.c)
 */

unsigned __int64 __fastcall sub_1800997D8(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r9
  __int64 v6; // rbx
  __int64 i; // rdi

  v2 = a1[1];
  result = (unsigned __int64)((unsigned __int128)((v2 - *a1) * (__int128)0x2E8BA2E8BA2E8BA3LL) >> 64) >> 63;
  v5 = (v2 - *a1) / 88;
  if ( a2 >= v5 )
  {
    if ( a2 > v5 )
    {
      if ( a2 <= (a1[2] - *a1) / 88LL )
      {
        result = sub_1800999C8(v2, a2 - v5, a1, 0LL);
        a1[1] = result;
      }
      else
      {
        return sub_1800998A4(a1, a2);
      }
    }
  }
  else
  {
    v6 = *a1 + 88 * a2;
    for ( i = v6; i != v2; i += 88LL )
      result = sub_18009A010(i);
    a1[1] = v6;
  }
  return result;
}
