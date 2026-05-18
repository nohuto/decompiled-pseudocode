/*
 * XREFs of sub_18012D02C @ 0x18012D02C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18012D02C(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  std::ios::setstate(*(_QWORD *)(a2 + 40) + *(int *)(**(_QWORD **)(a2 + 40) + 4LL), 4LL, a3);
  return 0LL;
}
