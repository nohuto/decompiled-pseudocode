/*
 * XREFs of sub_1800AA300 @ 0x1800AA300
 * Callers:
 *     sub_180091F5C @ 0x180091F5C (sub_180091F5C.c)
 *     sub_180092424 @ 0x180092424 (sub_180092424.c)
 *     sub_18009A240 @ 0x18009A240 (sub_18009A240.c)
 *     sub_18009C100 @ 0x18009C100 (sub_18009C100.c)
 *     sub_18009C450 @ 0x18009C450 (sub_18009C450.c)
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800AA300(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 464);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 464);
  }
  *a2 = *(_QWORD *)(a1 + 456);
  result = a2;
  a2[1] = v2;
  return result;
}
