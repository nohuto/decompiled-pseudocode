/*
 * XREFs of sub_1800754FC @ 0x1800754FC
 * Callers:
 *     sub_180073CFC @ 0x180073CFC (sub_180073CFC.c)
 *     sub_1800A441C @ 0x1800A441C (sub_1800A441C.c)
 *     sub_1800C9328 @ 0x1800C9328 (sub_1800C9328.c)
 * Callees:
 *     sub_180061744 @ 0x180061744 (sub_180061744.c)
 *     sub_180061A3C @ 0x180061A3C (sub_180061A3C.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800754FC(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF

  v10 = 0LL;
  sub_180061744(a1 + 112, (__int64)&v10);
  v6 = *(__int64 **)(a1 + 88);
  v7 = *(__int64 **)(a1 + 96);
  while ( 1 )
  {
    if ( v6 == v7 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_6;
    }
    if ( (unsigned int)sub_18006AB3C(*v6) == a3 )
      break;
    v6 += 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v9 = v6[1];
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  *a2 = *v6;
  a2[1] = v6[1];
LABEL_6:
  if ( BYTE8(v10) )
    sub_180061A3C(v10);
  return a2;
}
