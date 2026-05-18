/*
 * XREFs of sub_18007C73C @ 0x18007C73C
 * Callers:
 *     sub_18007C828 @ 0x18007C828 (sub_18007C828.c)
 * Callees:
 *     sub_18007C9F0 @ 0x18007C9F0 (sub_18007C9F0.c)
 *     sub_18007CC5C @ 0x18007CC5C (sub_18007CC5C.c)
 */

__int64 __fastcall sub_18007C73C(
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
  v15 = sub_18007CC5C(a9, a2, a10, a4 - (int)a11, a12, a6, a7);
  sub_18007C9F0(a1, a9, v15, a11, a12, a6, a7, a8);
  return sub_18007C9F0(v15, a10, a3, v12, a5 - a12, a6, a7, a8);
}
