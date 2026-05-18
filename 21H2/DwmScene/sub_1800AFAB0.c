/*
 * XREFs of sub_1800AFAB0 @ 0x1800AFAB0
 * Callers:
 *     sub_1800B47C0 @ 0x1800B47C0 (sub_1800B47C0.c)
 *     sub_1800B51BC @ 0x1800B51BC (sub_1800B51BC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800AFAB0(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 344);
  return result;
}
