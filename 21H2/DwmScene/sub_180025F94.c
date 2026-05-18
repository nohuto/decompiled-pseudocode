/*
 * XREFs of sub_180025F94 @ 0x180025F94
 * Callers:
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 *     sub_18002C814 @ 0x18002C814 (sub_18002C814.c)
 *     sub_180068494 @ 0x180068494 (sub_180068494.c)
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 *     sub_1800D0174 @ 0x1800D0174 (sub_1800D0174.c)
 *     sub_1800DDC68 @ 0x1800DDC68 (sub_1800DDC68.c)
 *     sub_1800E1A88 @ 0x1800E1A88 (sub_1800E1A88.c)
 *     sub_180113810 @ 0x180113810 (sub_180113810.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     memmove @ 0x180123982 (memmove.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 *__fastcall sub_180025F94(__int64 *a1, int a2)
{
  unsigned int v2; // r8d
  _BYTE *v3; // r9
  unsigned int v5; // r8d
  _BYTE *v6; // rdi
  void *v7; // rsi
  _BYTE v9[3]; // [rsp+3Dh] [rbp-1Bh] BYREF

  v2 = a2;
  v3 = v9;
  if ( a2 >= 0 )
  {
    do
    {
      *--v3 = v2 % 0xA + 48;
      v2 /= 0xAu;
    }
    while ( v2 );
  }
  else
  {
    v5 = -a2;
    do
    {
      *--v3 = v5 % 0xA + 48;
      v5 /= 0xAu;
    }
    while ( v5 );
    *--v3 = 45;
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( v3 != v9 )
  {
    v6 = (_BYTE *)(v9 - v3);
    if ( (unsigned __int64)(v9 - v3) > 0xF )
    {
      sub_18000FC14(a1, v9 - v3, 0LL, v3);
    }
    else
    {
      v7 = a1;
      if ( (unsigned __int64)a1[3] >= 0x10 )
        v7 = (void *)*a1;
      a1[2] = (__int64)v6;
      memmove(v7, v3, v9 - v3);
      *((_BYTE *)v7 + (_QWORD)v6) = 0;
    }
  }
  return a1;
}
