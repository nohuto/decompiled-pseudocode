/*
 * XREFs of sub_180105DA4 @ 0x180105DA4
 * Callers:
 *     sub_180105F74 @ 0x180105F74 (sub_180105F74.c)
 * Callees:
 *     sub_18010621C @ 0x18010621C (sub_18010621C.c)
 *     sub_18010662C @ 0x18010662C (sub_18010662C.c)
 */

__int64 __fastcall sub_180105DA4(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8,
        void *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  void *v13; // rdi

  v13 = (void *)sub_18010662C(a9, a12, a6, a7);
  sub_18010621C(a1, a12, (__int64)a6, a7);
  return sub_18010621C(v13, a5 - a12, (__int64)a6, a7);
}
