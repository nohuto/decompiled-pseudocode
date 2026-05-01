/*
 * XREFs of sub_180043560 @ 0x180043560
 * Callers:
 *     sub_1800454AC @ 0x1800454AC (sub_1800454AC.c)
 *     sub_180045537 @ 0x180045537 (sub_180045537.c)
 *     sub_180045660 @ 0x180045660 (sub_180045660.c)
 *     sub_1800456FD @ 0x1800456FD (sub_1800456FD.c)
 *     sub_180045788 @ 0x180045788 (sub_180045788.c)
 *     sub_18004587A @ 0x18004587A (sub_18004587A.c)
 *     sub_180045918 @ 0x180045918 (sub_180045918.c)
 *     sub_1800459F8 @ 0x1800459F8 (sub_1800459F8.c)
 *     sub_180045AD8 @ 0x180045AD8 (sub_180045AD8.c)
 *     sub_180045B63 @ 0x180045B63 (sub_180045B63.c)
 *     sub_180045C7A @ 0x180045C7A (sub_180045C7A.c)
 *     sub_180045DB0 @ 0x180045DB0 (sub_180045DB0.c)
 *     sub_180045E95 @ 0x180045E95 (sub_180045E95.c)
 *     sub_180045F44 @ 0x180045F44 (sub_180045F44.c)
 *     sub_180045FF3 @ 0x180045FF3 (sub_180045FF3.c)
 *     sub_180046168 @ 0x180046168 (sub_180046168.c)
 *     sub_180046248 @ 0x180046248 (sub_180046248.c)
 *     sub_18004637C @ 0x18004637C (sub_18004637C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180043560(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(&_ImageBase, a1, 0LL, DelayLoadFailureHook, a2, 0);
}
