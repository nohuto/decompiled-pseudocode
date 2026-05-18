/*
 * XREFs of sub_180093F08 @ 0x180093F08
 * Callers:
 *     sub_1800945A0 @ 0x1800945A0 (sub_1800945A0.c)
 *     sub_180097DC0 @ 0x180097DC0 (sub_180097DC0.c)
 * Callees:
 *     sub_180093FD4 @ 0x180093FD4 (sub_180093FD4.c)
 *     sub_1800940F8 @ 0x1800940F8 (sub_1800940F8.c)
 *     sub_180094740 @ 0x180094740 (sub_180094740.c)
 */

unsigned __int64 __fastcall sub_180093F08(_QWORD *a1, unsigned __int64 a2)
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
        result = sub_1800940F8(v2, a2 - v5, a1, 0LL);
        a1[1] = result;
      }
      else
      {
        return sub_180093FD4(a1, a2);
      }
    }
  }
  else
  {
    v6 = *a1 + 88 * a2;
    for ( i = v6; i != v2; i += 88LL )
      result = sub_180094740(i);
    a1[1] = v6;
  }
  return result;
}
