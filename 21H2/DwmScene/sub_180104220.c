/*
 * XREFs of sub_180104220 @ 0x180104220
 * Callers:
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180104220(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 104);
  }
  *a2 = *(_QWORD *)(a1 + 96);
  result = a2;
  a2[1] = v2;
  return result;
}
