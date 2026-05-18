/*
 * XREFs of sub_1800FFDE4 @ 0x1800FFDE4
 * Callers:
 *     sub_180100BE0 @ 0x180100BE0 (sub_180100BE0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800FFDE4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 1904);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 1904);
  }
  *a2 = *(_QWORD *)(a1 + 1896);
  result = a2;
  a2[1] = v2;
  return result;
}
