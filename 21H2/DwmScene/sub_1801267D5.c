/*
 * XREFs of sub_1801267D5 @ 0x1801267D5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1801267D5(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  std::ios::setstate(*(_QWORD *)(a2 + 80) + *(int *)(**(_QWORD **)(a2 + 80) + 4LL), 4LL, a3);
  return 0LL;
}
