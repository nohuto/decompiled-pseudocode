/*
 * XREFs of sub_1800214DC @ 0x1800214DC
 * Callers:
 *     sub_18002154C @ 0x18002154C (sub_18002154C.c)
 * Callees:
 *     sub_180003780 @ 0x180003780 (sub_180003780.c)
 *     sub_18002147C @ 0x18002147C (sub_18002147C.c)
 */

__int64 __fastcall sub_1800214DC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7, int a8)
{
  unsigned int v9; // ebx

  v9 = sub_18002147C(a8);
  sub_180003780(
    a1,
    1040,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
    0LL,
    0LL,
    a6,
    1,
    v9,
    0LL,
    0);
  return v9;
}
