/*
 * XREFs of sub_1800AF5FC @ 0x1800AF5FC
 * Callers:
 *     sub_180079020 @ 0x180079020 (sub_180079020.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_1800AF5FC(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1

  result = a2;
  v3 = *(_OWORD *)(a1 + 464);
  *a2 = *(_OWORD *)(a1 + 448);
  a2[1] = v3;
  return result;
}
