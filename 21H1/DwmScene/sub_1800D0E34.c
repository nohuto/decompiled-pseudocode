/*
 * XREFs of sub_1800D0E34 @ 0x1800D0E34
 * Callers:
 *     sub_1800D10D0 @ 0x1800D10D0 (sub_1800D10D0.c)
 * Callees:
 *     sub_1800646EC @ 0x1800646EC (sub_1800646EC.c)
 *     sub_180065588 @ 0x180065588 (sub_180065588.c)
 *     sub_1800D0F48 @ 0x1800D0F48 (sub_1800D0F48.c)
 *     memset @ 0x18011E09A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D0E34(_QWORD *a1, unsigned __int64 a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax
  unsigned __int64 v5; // r9
  __int64 v6; // rdi
  __int64 *v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi

  v3 = (__int64 *)a1[1];
  result = (unsigned __int64)((unsigned __int128)(((__int64)v3 - *a1) * (__int128)0x6BCA1AF286BCA1BLL) >> 64) >> 63;
  v5 = ((__int64)v3 - *a1) / 152;
  if ( a2 >= v5 )
  {
    if ( a2 > v5 )
    {
      v8 = a1[2] - *a1;
      result = (unsigned __int64)((unsigned __int128)(v8 * (__int128)0x6BCA1AF286BCA1BLL) >> 64) >> 63;
      if ( a2 <= v8 / 152 )
      {
        v9 = a2 - v5;
        if ( a2 != v5 )
        {
          do
          {
            memset(v3, 0, 0x98uLL);
            result = sub_180065588((__int64)v3);
            v3 += 19;
            --v9;
          }
          while ( v9 );
        }
        a1[1] = v3;
      }
      else
      {
        return sub_1800D0F48(a1, a2);
      }
    }
  }
  else
  {
    v6 = *a1 + 152 * a2;
    if ( (__int64 *)v6 != v3 )
    {
      v7 = (__int64 *)(v6 + 136);
      do
      {
        sub_1800646EC(v7, (__int64)v7);
        v7 += 19;
        result = (__int64)(v7 - 17);
      }
      while ( v7 - 17 != v3 );
    }
    a1[1] = v6;
  }
  return result;
}
