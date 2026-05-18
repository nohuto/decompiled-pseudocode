/*
 * XREFs of sub_1800AB168 @ 0x1800AB168
 * Callers:
 *     sub_18010EB94 @ 0x18010EB94 (sub_18010EB94.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800AB168(__int64 *a1, __int64 a2)
{
  bool v2; // zf

  v2 = (a2 & ((*a1 | ~a2) + 1)) == 0;
  *a1 = a2 & ((*a1 | ~a2) + 1);
  return !v2;
}
