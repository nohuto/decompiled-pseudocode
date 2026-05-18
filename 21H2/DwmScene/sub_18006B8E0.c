/*
 * XREFs of sub_18006B8E0 @ 0x18006B8E0
 * Callers:
 *     sub_18002EF30 @ 0x18002EF30 (sub_18002EF30.c)
 *     sub_18002F330 @ 0x18002F330 (sub_18002F330.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_18006B8E0(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1

  result = a2;
  v3 = *(_OWORD *)(a1 + 112);
  *a2 = *(_OWORD *)(a1 + 96);
  a2[1] = v3;
  return result;
}
