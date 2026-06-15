/*
 * XREFs of sub_18000E51C @ 0x18000E51C
 * Callers:
 *     sub_18003B75C @ 0x18003B75C (sub_18003B75C.c)
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 */

BOOL __fastcall sub_18000E51C(__int64 a1, _QWORD **a2)
{
  *a2[1] = *a2;
  (*a2)[1] = a2[1];
  --*(_QWORD *)(a1 + 16);
  sub_180009CF0((__int64)(a2 + 2));
  return sub_180039D98(a2);
}
