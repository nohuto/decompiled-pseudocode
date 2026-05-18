/*
 * XREFs of sub_1800AA1D0 @ 0x1800AA1D0
 * Callers:
 *     sub_1800AEEF0 @ 0x1800AEEF0 (sub_1800AEEF0.c)
 *     sub_1800AF8EC @ 0x1800AF8EC (sub_1800AF8EC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800AA1D0(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 352);
  return result;
}
