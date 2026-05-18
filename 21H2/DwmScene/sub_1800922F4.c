/*
 * XREFs of sub_1800922F4 @ 0x1800922F4
 * Callers:
 *     sub_180092224 @ 0x180092224 (sub_180092224.c)
 *     sub_180092324 @ 0x180092324 (sub_180092324.c)
 *     sub_1800C3FC8 @ 0x1800C3FC8 (sub_1800C3FC8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800922F4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 128);
  }
  *a2 = *(_QWORD *)(a1 + 120);
  result = a2;
  a2[1] = v2;
  return result;
}
