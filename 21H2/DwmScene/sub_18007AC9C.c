/*
 * XREFs of sub_18007AC9C @ 0x18007AC9C
 * Callers:
 *     sub_18001AC20 @ 0x18001AC20 (sub_18001AC20.c)
 *     sub_18001E0C4 @ 0x18001E0C4 (sub_18001E0C4.c)
 *     sub_1800795CC @ 0x1800795CC (sub_1800795CC.c)
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 *     sub_18007AF2C @ 0x18007AF2C (sub_18007AF2C.c)
 *     sub_18007C1E0 @ 0x18007C1E0 (sub_18007C1E0.c)
 *     sub_18007CC84 @ 0x18007CC84 (sub_18007CC84.c)
 *     sub_18007E75C @ 0x18007E75C (sub_18007E75C.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 * Callees:
 *     sub_180067014 @ 0x180067014 (sub_180067014.c)
 *     sub_18006730C @ 0x18006730C (sub_18006730C.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x180071498 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_2.c)
 *     sub_18007AD60 @ 0x18007AD60 (sub_18007AD60.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18007AC9C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF

  v3 = a3;
  v9 = 0LL;
  sub_180067014(a1 + 112, (__int64)&v9);
  if ( (unsigned int)v3 >= (unsigned int)sub_18007AD60(a1) )
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
    sub_18006730C(v9);
  return a2;
}
