/*
 * XREFs of sub_1800D14B0 @ 0x1800D14B0
 * Callers:
 *     sub_18003A930 @ 0x18003A930 (sub_18003A930.c)
 *     sub_18003C320 @ 0x18003C320 (sub_18003C320.c)
 *     sub_18003C740 @ 0x18003C740 (sub_18003C740.c)
 *     sub_18003C8E0 @ 0x18003C8E0 (sub_18003C8E0.c)
 *     sub_180067A80 @ 0x180067A80 (sub_180067A80.c)
 *     sub_180067BAC @ 0x180067BAC (sub_180067BAC.c)
 *     sub_180067BE8 @ 0x180067BE8 (sub_180067BE8.c)
 *     sub_180067CB4 @ 0x180067CB4 (sub_180067CB4.c)
 *     sub_180068114 @ 0x180068114 (sub_180068114.c)
 *     sub_180098190 @ 0x180098190 (sub_180098190.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D14B0(__int64 a1, int a2, int a3, unsigned __int64 a4)
{
  __int64 result; // rax

  result = a3;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(32 * (a3 + 5LL * a2) + a1), a4);
  return result;
}
