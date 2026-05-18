/*
 * XREFs of sub_18006B958 @ 0x18006B958
 * Callers:
 *     sub_18006C9C0 @ 0x18006C9C0 (sub_18006C9C0.c)
 * Callees:
 *     sub_180069994 @ 0x180069994 (sub_180069994.c)
 *     sub_180069D50 @ 0x180069D50 (sub_180069D50.c)
 *     sub_180069FBC @ 0x180069FBC (sub_180069FBC.c)
 *     sub_18006AC88 @ 0x18006AC88 (sub_18006AC88.c)
 *     sub_18006AD74 @ 0x18006AD74 (sub_18006AD74.c)
 *     sub_18006AE58 @ 0x18006AE58 (sub_18006AE58.c)
 *     sub_1800D5EA4 @ 0x1800D5EA4 (sub_1800D5EA4.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18006B958(_QWORD *a1, _QWORD *a2)
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
    sub_18006AE58((__int64)v9);
    v4 = sub_1800D5EA4(a1[55], a1[51], v9);
    if ( v4 )
    {
      if ( ((v4 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( ((v4 - 1) & 0xFFFFFFFD) == 0 )
        {
          sub_180069FBC(v10, (__int64)v10);
          return a2;
        }
      }
      else
      {
        memset(v8, 0, 0x98uLL);
        v6 = sub_18006AE58((__int64)v8);
        v7 = a2[1];
        if ( a2[2] == v7 )
        {
          sub_180069D50(a2, a2[1], v6);
        }
        else
        {
          sub_18006AC88(v7, v6);
          a2[1] += 152LL;
        }
        sub_180069FBC(&v8[17], (__int64)&v8[17]);
      }
    }
    else if ( a2[2] == a2[1] )
    {
      sub_180069994(a2, a2[1]);
    }
    else
    {
      sub_18006AD74(a2[1], (__int64)v9);
      a2[1] += 152LL;
    }
    ++a1[51];
    sub_180069FBC(v10, (__int64)v10);
  }
  return a2;
}
