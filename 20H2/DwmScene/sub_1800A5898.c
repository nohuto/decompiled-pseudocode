/*
 * XREFs of sub_1800A5898 @ 0x1800A5898
 * Callers:
 *     sub_1801092C4 @ 0x1801092C4 (sub_1801092C4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800A5898(__int64 *a1, __int64 a2)
{
  bool v2; // zf

  v2 = (a2 & ((*a1 | ~a2) + 1)) == 0;
  *a1 = a2 & ((*a1 | ~a2) + 1);
  return !v2;
}
