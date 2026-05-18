/*
 * XREFs of sub_180124F48 @ 0x180124F48
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180124F48(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  std::wios::setstate(*(_QWORD *)(a2 + 128) + *(int *)(**(_QWORD **)(a2 + 128) + 4LL), 4LL, a3);
  return 0LL;
}
