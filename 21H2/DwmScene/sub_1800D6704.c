/*
 * XREFs of sub_1800D6704 @ 0x1800D6704
 * Callers:
 *     sub_1800D69A0 @ 0x1800D69A0 (sub_1800D69A0.c)
 * Callees:
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 *     sub_18006AE58 @ 0x18006AE58 (sub_18006AE58.c)
 *     sub_1800D6818 @ 0x1800D6818 (sub_1800D6818.c)
 *     memset @ 0x18012396A (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D6704(_QWORD *a1, unsigned __int64 a2)
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
            result = sub_18006AE58((__int64)v3);
            v3 += 19;
            --v9;
          }
          while ( v9 );
        }
        a1[1] = v3;
      }
      else
      {
        return sub_1800D6818(a1, a2);
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
        sub_180069FBC(v7, (__int64)v7);
        v7 += 19;
        result = (__int64)(v7 - 17);
      }
      while ( v7 - 17 != v3 );
    }
    a1[1] = v6;
  }
  return result;
}
