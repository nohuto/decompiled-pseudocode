/*
 * XREFs of sub_1800A061C @ 0x1800A061C
 * Callers:
 *     sub_180032CC0 @ 0x180032CC0 (sub_180032CC0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A061C(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 152);
  return result;
}
