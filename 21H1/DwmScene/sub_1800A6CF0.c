/*
 * XREFs of sub_1800A6CF0 @ 0x1800A6CF0
 * Callers:
 *     sub_1800A9340 @ 0x1800A9340 (sub_1800A9340.c)
 * Callees:
 *     sub_1800A6DE4 @ 0x1800A6DE4 (sub_1800A6DE4.c)
 *     sub_1800A7BC0 @ 0x1800A7BC0 (sub_1800A7BC0.c)
 */

unsigned __int64 __fastcall sub_1800A6CF0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r10
  __int64 v6; // rdi
  __int64 i; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // r9

  v2 = a1[1];
  result = (unsigned __int64)((unsigned __int128)((v2 - *a1) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v5 = (v2 - *a1) / 48;
  if ( a2 >= v5 )
  {
    if ( a2 > v5 )
    {
      v8 = a1[2] - *a1;
      result = (unsigned __int64)((unsigned __int128)(v8 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
      if ( a2 <= v8 / 48 )
      {
        v9 = a2 - v5;
        if ( a2 != v5 )
        {
          result = 0LL;
          do
          {
            *(_DWORD *)(v2 + 1) = 0;
            *(_WORD *)(v2 + 5) = 0;
            *(_BYTE *)(v2 + 7) = 0;
            *(_BYTE *)v2 = 1;
            *(_QWORD *)(v2 + 8) = 0LL;
            *(_QWORD *)(v2 + 16) = 0LL;
            *(_QWORD *)(v2 + 24) = 0LL;
            *(_QWORD *)(v2 + 32) = 0LL;
            *(_QWORD *)(v2 + 40) = 0LL;
            v2 += 48LL;
            --v9;
          }
          while ( v9 );
        }
        a1[1] = v2;
      }
      else
      {
        return sub_1800A6DE4(a1, a2);
      }
    }
  }
  else
  {
    v6 = *a1 + 48 * a2;
    for ( i = v6; i != v2; i += 48LL )
      result = sub_1800A7BC0(i, 0LL);
    a1[1] = v6;
  }
  return result;
}
