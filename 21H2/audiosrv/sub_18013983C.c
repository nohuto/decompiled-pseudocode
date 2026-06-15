/*
 * XREFs of sub_18013983C @ 0x18013983C
 * Callers:
 *     sub_1800F24F0 @ 0x1800F24F0 (sub_1800F24F0.c)
 *     sub_1800F43B0 @ 0x1800F43B0 (sub_1800F43B0.c)
 * Callees:
 *     sub_180139880 @ 0x180139880 (sub_180139880.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18013983C(__int64 a1, int a2, _DWORD *a3, _QWORD *a4)
{
  __int64 (__fastcall **v5)(); // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  *a4 = 0LL;
  *a3 = 0;
  v6 = 0;
  v5 = off_18014B3A8;
  v7 = a2;
  return sub_180139880(a1, &v5);
}
