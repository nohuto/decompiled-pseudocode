/*
 * XREFs of sub_180105E8C @ 0x180105E8C
 * Callers:
 *     sub_1801060C8 @ 0x1801060C8 (sub_1801060C8.c)
 * Callees:
 *     sub_18010633C @ 0x18010633C (sub_18010633C.c)
 *     sub_18010662C @ 0x18010662C (sub_18010662C.c)
 */

__int64 __fastcall sub_180105E8C(
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
  sub_18010633C(a1, a12, (__int64)a6, a7);
  return sub_18010633C(v13, a5 - a12, (__int64)a6, a7);
}
