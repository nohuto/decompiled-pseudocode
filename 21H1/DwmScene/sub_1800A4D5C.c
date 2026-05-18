/*
 * XREFs of sub_1800A4D5C @ 0x1800A4D5C
 * Callers:
 *     sub_1800A4D94 @ 0x1800A4D94 (sub_1800A4D94.c)
 *     sub_1800E5DC0 @ 0x1800E5DC0 (sub_1800E5DC0.c)
 *     sub_1800E9AE0 @ 0x1800E9AE0 (sub_1800E9AE0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A4D5C(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v4; // rdx
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = *(_QWORD *)(a1 + 16 * (a3 + 16LL) + 8);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = *(_QWORD *)(a1 + 16 * (a3 + 16LL) + 8);
  }
  *a2 = *(_QWORD *)(a1 + 16 * (a3 + 16LL));
  result = a2;
  a2[1] = v4;
  return result;
}
