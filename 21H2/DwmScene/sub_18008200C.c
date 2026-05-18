/*
 * XREFs of sub_18008200C @ 0x18008200C
 * Callers:
 *     sub_1800820F8 @ 0x1800820F8 (sub_1800820F8.c)
 * Callees:
 *     sub_1800822C0 @ 0x1800822C0 (sub_1800822C0.c)
 *     sub_18008252C @ 0x18008252C (sub_18008252C.c)
 */

__int64 __fastcall sub_18008200C(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // r12d
  int v15; // edi

  v12 = a4 - a11;
  v15 = sub_18008252C(a9, a2, a10, a4 - (int)a11, a12, a6, a7);
  sub_1800822C0(a1, a9, v15, a11, a12, a6, a7, a8);
  return sub_1800822C0(v15, a10, a3, v12, a5 - a12, a6, a7, a8);
}
