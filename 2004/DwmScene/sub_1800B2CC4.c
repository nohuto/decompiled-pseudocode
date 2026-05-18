/*
 * XREFs of sub_1800B2CC4 @ 0x1800B2CC4
 * Callers:
 *     sub_1800FEA0C @ 0x1800FEA0C (sub_1800FEA0C.c)
 *     sub_1800FED28 @ 0x1800FED28 (sub_1800FED28.c)
 *     sub_1800FF27C @ 0x1800FF27C (sub_1800FF27C.c)
 * Callees:
 *     sub_1800B2D64 @ 0x1800B2D64 (sub_1800B2D64.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800B2CC4(__int64 a1, __int64 a2, int a3, int a4)
{
  if ( a4 )
  {
    *(_QWORD *)a1 = &unk_1801D2298;
    std::ios::ios(a1 + 144);
  }
  std::istream::istream(a1, a1 + 16, 0LL, 0LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::istringstream::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 144;
  sub_1800B2D64(a1 + 16, a2, a3 | 1u);
  return a1;
}
