/*
 * XREFs of sub_18007783C @ 0x18007783C
 * Callers:
 *     sub_180076A34 @ 0x180076A34 (sub_180076A34.c)
 *     sub_18010333C @ 0x18010333C (sub_18010333C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18007783C(_QWORD *a1)
{
  a1[2] = 0LL;
  a1[1] = "bad cast";
  *a1 = &std::bad_cast::`vftable';
  return a1;
}
