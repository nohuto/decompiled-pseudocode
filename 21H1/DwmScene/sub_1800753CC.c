/*
 * XREFs of sub_1800753CC @ 0x1800753CC
 * Callers:
 *     sub_180019D80 @ 0x180019D80 (sub_180019D80.c)
 *     sub_18001AF08 @ 0x18001AF08 (sub_18001AF08.c)
 *     sub_180073CFC @ 0x180073CFC (sub_180073CFC.c)
 *     sub_180074BF0 @ 0x180074BF0 (sub_180074BF0.c)
 *     sub_18007565C @ 0x18007565C (sub_18007565C.c)
 *     sub_180076910 @ 0x180076910 (sub_180076910.c)
 *     sub_1800773B4 @ 0x1800773B4 (sub_1800773B4.c)
 *     sub_180078E8C @ 0x180078E8C (sub_180078E8C.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 * Callees:
 *     sub_180061744 @ 0x180061744 (sub_180061744.c)
 *     sub_180061A3C @ 0x180061A3C (sub_180061A3C.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x18006BBC8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_2.c)
 *     sub_180075490 @ 0x180075490 (sub_180075490.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800753CC(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF

  v3 = a3;
  v9 = 0LL;
  sub_180061744(a1 + 112, (__int64)&v9);
  if ( (unsigned int)v3 >= (unsigned int)sub_180075490(a1) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    if ( (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4 <= v3 )
      std::vector<void *>::_Xlen();
    v6 = (_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL * (unsigned int)v3);
    *a2 = 0LL;
    a2[1] = 0LL;
    v7 = v6[1];
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *a2 = *v6;
    a2[1] = v6[1];
  }
  if ( BYTE8(v9) )
    sub_180061A3C(v9);
  return a2;
}
