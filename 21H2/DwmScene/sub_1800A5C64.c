/*
 * XREFs of sub_1800A5C64 @ 0x1800A5C64
 * Callers:
 *     sub_1800C6240 @ 0x1800C6240 (sub_1800C6240.c)
 *     sub_1800C6B94 @ 0x1800C6B94 (sub_1800C6B94.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 *     sub_1800DC57C @ 0x1800DC57C (sub_1800DC57C.c)
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 *     sub_1800F2648 @ 0x1800F2648 (sub_1800F2648.c)
 *     sub_1800F27BC @ 0x1800F27BC (sub_1800F27BC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A5C64(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 18656);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 18656);
  }
  *a2 = *(_QWORD *)(a1 + 18648);
  result = a2;
  a2[1] = v2;
  return result;
}
