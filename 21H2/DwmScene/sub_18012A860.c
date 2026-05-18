/*
 * XREFs of sub_18012A860 @ 0x18012A860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18012A860(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  std::wios::setstate(*(_QWORD *)(a2 + 128) + *(int *)(**(_QWORD **)(a2 + 128) + 4LL), 4LL, a3);
  return 0LL;
}
