/*
 * XREFs of sub_1800AA10C @ 0x1800AA10C
 * Callers:
 *     sub_18001C5E8 @ 0x18001C5E8 (sub_18001C5E8.c)
 *     sub_1800AA14C @ 0x1800AA14C (sub_1800AA14C.c)
 *     sub_1800AA1F8 @ 0x1800AA1F8 (sub_1800AA1F8.c)
 *     sub_1800ABF34 @ 0x1800ABF34 (sub_1800ABF34.c)
 *     sub_1800FA8A0 @ 0x1800FA8A0 (sub_1800FA8A0.c)
 * Callees:
 *     sub_1800AD16C @ 0x1800AD16C (sub_1800AD16C.c)
 */

__int64 __fastcall sub_1800AA10C(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx

  v3 = a3;
  v5 = a2;
  sub_1800AD16C();
  return ((v3 + 4 * v5) << 6) + a1 + 548;
}
