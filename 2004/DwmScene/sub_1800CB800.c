/*
 * XREFs of sub_1800CB800 @ 0x1800CB800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800CB800(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = 2 * (a3 + 12LL);
  v4 = *(_QWORD *)(a1 + 16 * (a3 + 12LL) + 8);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = *(_QWORD *)(a1 + 8 * v3 + 8);
  }
  *a2 = *(_QWORD *)(a1 + 8 * v3);
  result = a2;
  a2[1] = v4;
  return result;
}
