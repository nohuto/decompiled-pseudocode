/*
 * XREFs of sub_18009A9AC @ 0x18009A9AC
 * Callers:
 *     sub_18009A010 @ 0x18009A010 (sub_18009A010.c)
 *     sub_18009A1D4 @ 0x18009A1D4 (sub_18009A1D4.c)
 * Callees:
 *     sub_180099580 @ 0x180099580 (sub_180099580.c)
 *     sub_18009A7F0 @ 0x18009A7F0 (sub_18009A7F0.c)
 */

__int64 __fastcall sub_18009A9AC(__int64 a1, int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 *v7; // rax
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v7 = sub_18009A7F0(v9, a2, a4);
  sub_180099580(a1, v7, a3, a4);
  return a1;
}
