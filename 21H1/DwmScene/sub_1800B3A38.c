/*
 * XREFs of sub_1800B3A38 @ 0x1800B3A38
 * Callers:
 *     sub_1800C31B4 @ 0x1800C31B4 (sub_1800C31B4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800B3A38(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 456);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 456);
  }
  *a2 = *(_QWORD *)(a1 + 448);
  result = a2;
  a2[1] = v2;
  return result;
}
