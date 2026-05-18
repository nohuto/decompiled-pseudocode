/*
 * XREFs of sub_1800D2704 @ 0x1800D2704
 * Callers:
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 *     sub_180109924 @ 0x180109924 (sub_180109924.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 *__fastcall sub_1800D2704(__int64 *a1, unsigned int a2)
{
  _BYTE *v4; // r9
  _BYTE *v5; // rdi
  void *v6; // rsi
  _BYTE v8[3]; // [rsp+3Dh] [rbp-1Bh] BYREF

  v4 = v8;
  do
  {
    *--v4 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( v4 != v8 )
  {
    v5 = (_BYTE *)(v8 - v4);
    if ( (unsigned __int64)(v8 - v4) > 0xF )
    {
      sub_18000FB34(a1, v8 - v4, 0LL, v4);
    }
    else
    {
      v6 = a1;
      if ( (unsigned __int64)a1[3] >= 0x10 )
        v6 = (void *)*a1;
      a1[2] = (__int64)v5;
      memmove(v6, v4, v8 - v4);
      *((_BYTE *)v6 + (_QWORD)v5) = 0;
    }
  }
  return a1;
}
