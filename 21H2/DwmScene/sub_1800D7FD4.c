/*
 * XREFs of sub_1800D7FD4 @ 0x1800D7FD4
 * Callers:
 *     sub_1800D99B0 @ 0x1800D99B0 (sub_1800D99B0.c)
 *     sub_18010F1F4 @ 0x18010F1F4 (sub_18010F1F4.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     memmove @ 0x180123982 (memmove.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 *__fastcall sub_1800D7FD4(__int64 *a1, unsigned int a2)
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
      sub_18000FC14(a1, v8 - v4, 0LL, v4);
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
