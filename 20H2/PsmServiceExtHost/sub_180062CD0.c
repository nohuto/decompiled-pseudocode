/*
 * XREFs of sub_180062CD0 @ 0x180062CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180062F10 @ 0x180062F10 (sub_180062F10.c)
 */

__int64 __fastcall sub_180062CD0(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v10; // [rsp+20h] [rbp-58h]

  v10 = a4;
  LOBYTE(a4) = a3;
  return sub_180062F10(qword_1800B4320, a1, a2, a4, v10, a5, a6, a7, a8, a9);
}
