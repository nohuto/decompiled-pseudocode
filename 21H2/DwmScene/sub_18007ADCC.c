/*
 * XREFs of sub_18007ADCC @ 0x18007ADCC
 * Callers:
 *     sub_1800795CC @ 0x1800795CC (sub_1800795CC.c)
 *     sub_1800A9CEC @ 0x1800A9CEC (sub_1800A9CEC.c)
 *     sub_1800CEBF8 @ 0x1800CEBF8 (sub_1800CEBF8.c)
 * Callees:
 *     sub_180067014 @ 0x180067014 (sub_180067014.c)
 *     sub_18006730C @ 0x18006730C (sub_18006730C.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_18007ADCC(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF

  v10 = 0LL;
  sub_180067014(a1 + 112, (__int64)&v10);
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
    if ( (unsigned int)sub_18007040C(*v6) == a3 )
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
    sub_18006730C(v10);
  return a2;
}
