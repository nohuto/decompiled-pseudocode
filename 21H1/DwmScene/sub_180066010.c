/*
 * XREFs of sub_180066010 @ 0x180066010
 * Callers:
 *     sub_180029660 @ 0x180029660 (sub_180029660.c)
 *     sub_180029A60 @ 0x180029A60 (sub_180029A60.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_180066010(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1

  result = a2;
  v3 = *(_OWORD *)(a1 + 112);
  *a2 = *(_OWORD *)(a1 + 96);
  a2[1] = v3;
  return result;
}
