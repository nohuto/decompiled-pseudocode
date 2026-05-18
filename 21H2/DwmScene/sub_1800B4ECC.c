/*
 * XREFs of sub_1800B4ECC @ 0x1800B4ECC
 * Callers:
 *     sub_18007E8F0 @ 0x18007E8F0 (sub_18007E8F0.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_1800B4ECC(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1

  result = a2;
  v3 = *(_OWORD *)(a1 + 464);
  *a2 = *(_OWORD *)(a1 + 448);
  a2[1] = v3;
  return result;
}
