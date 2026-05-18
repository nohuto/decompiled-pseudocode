/*
 * XREFs of sub_1800B3A2C @ 0x1800B3A2C
 * Callers:
 *     sub_180107024 @ 0x180107024 (sub_180107024.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_1800B3A2C(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = *(_OWORD *)(a1 + 92);
  return result;
}
