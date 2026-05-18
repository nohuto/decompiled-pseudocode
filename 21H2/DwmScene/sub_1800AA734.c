/*
 * XREFs of sub_1800AA734 @ 0x1800AA734
 * Callers:
 *     sub_18009272C @ 0x18009272C (sub_18009272C.c)
 *     sub_180092894 @ 0x180092894 (sub_180092894.c)
 *     sub_1800A9CEC @ 0x1800A9CEC (sub_1800A9CEC.c)
 *     sub_1800AA22C @ 0x1800AA22C (sub_1800AA22C.c)
 *     sub_1800F711C @ 0x1800F711C (sub_1800F711C.c)
 *     sub_1800F7FA0 @ 0x1800F7FA0 (sub_1800F7FA0.c)
 *     sub_1800F87B8 @ 0x1800F87B8 (sub_1800F87B8.c)
 *     sub_180111970 @ 0x180111970 (sub_180111970.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800AA734(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 448);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 448);
  }
  *a2 = *(_QWORD *)(a1 + 440);
  result = a2;
  a2[1] = v2;
  return result;
}
