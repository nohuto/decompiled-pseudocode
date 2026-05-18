/*
 * XREFs of sub_1800B92FC @ 0x1800B92FC
 * Callers:
 *     sub_18010C8F4 @ 0x18010C8F4 (sub_18010C8F4.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_1800B92FC(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = *(_OWORD *)(a1 + 92);
  return result;
}
