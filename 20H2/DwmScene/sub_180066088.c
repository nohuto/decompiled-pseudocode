/*
 * XREFs of sub_180066088 @ 0x180066088
 * Callers:
 *     sub_1800670F0 @ 0x1800670F0 (sub_1800670F0.c)
 * Callees:
 *     sub_1800640C4 @ 0x1800640C4 (sub_1800640C4.c)
 *     sub_180064480 @ 0x180064480 (sub_180064480.c)
 *     sub_1800646EC @ 0x1800646EC (sub_1800646EC.c)
 *     sub_1800653B8 @ 0x1800653B8 (sub_1800653B8.c)
 *     sub_1800654A4 @ 0x1800654A4 (sub_1800654A4.c)
 *     sub_180065588 @ 0x180065588 (sub_180065588.c)
 *     sub_1800D05D4 @ 0x1800D05D4 (sub_1800D05D4.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180066088(_QWORD *a1, _QWORD *a2)
{
  int v4; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8[20]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v9[136]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v10[3]; // [rsp+158h] [rbp+58h] BYREF

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  while ( a1[51] < a1[60] )
  {
    sub_180065588((__int64)v9);
    v4 = sub_1800D05D4(a1[55], a1[51], v9);
    if ( v4 )
    {
      if ( ((v4 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( ((v4 - 1) & 0xFFFFFFFD) == 0 )
        {
          sub_1800646EC(v10, (__int64)v10);
          return a2;
        }
      }
      else
      {
        memset(v8, 0, 0x98uLL);
        v6 = sub_180065588((__int64)v8);
        v7 = a2[1];
        if ( a2[2] == v7 )
        {
          sub_180064480(a2, a2[1], v6);
        }
        else
        {
          sub_1800653B8(v7, v6);
          a2[1] += 152LL;
        }
        sub_1800646EC(&v8[17], (__int64)&v8[17]);
      }
    }
    else if ( a2[2] == a2[1] )
    {
      sub_1800640C4(a2, a2[1]);
    }
    else
    {
      sub_1800654A4(a2[1], (__int64)v9);
      a2[1] += 152LL;
    }
    ++a1[51];
    sub_1800646EC(v10, (__int64)v10);
  }
  return a2;
}
