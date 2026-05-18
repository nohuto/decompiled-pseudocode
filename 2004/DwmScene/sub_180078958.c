/*
 * XREFs of sub_180078958 @ 0x180078958
 * Callers:
 *     sub_18006313C @ 0x18006313C (sub_18006313C.c)
 *     sub_180079804 @ 0x180079804 (sub_180079804.c)
 *     sub_18007EC44 @ 0x18007EC44 (sub_18007EC44.c)
 *     sub_18009A1D4 @ 0x18009A1D4 (sub_18009A1D4.c)
 *     sub_18009B760 @ 0x18009B760 (sub_18009B760.c)
 *     sub_18009BA50 @ 0x18009BA50 (sub_18009BA50.c)
 *     sub_18009F388 @ 0x18009F388 (sub_18009F388.c)
 *     sub_1800C7110 @ 0x1800C7110 (sub_1800C7110.c)
 *     sub_1800C945C @ 0x1800C945C (sub_1800C945C.c)
 *     sub_1800CB1A4 @ 0x1800CB1A4 (sub_1800CB1A4.c)
 *     sub_1800CCAB0 @ 0x1800CCAB0 (sub_1800CCAB0.c)
 *     sub_1800CD5F0 @ 0x1800CD5F0 (sub_1800CD5F0.c)
 *     sub_1800EAE84 @ 0x1800EAE84 (sub_1800EAE84.c)
 *     sub_1800FE1B4 @ 0x1800FE1B4 (sub_1800FE1B4.c)
 * Callees:
 *     sub_180061744 @ 0x180061744 (sub_180061744.c)
 *     sub_180061A3C @ 0x180061A3C (sub_180061A3C.c)
 *     sub_180071528 @ 0x180071528 (sub_180071528.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180078958(__int64 a1, _QWORD *a2)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  sub_180061744(a1 + 112, (__int64)&v5);
  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  sub_180071528(a2, (_QWORD *)(a1 + 88));
  if ( BYTE8(v5) )
    sub_180061A3C(v5);
  return a2;
}
