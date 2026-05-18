/*
 * XREFs of sub_1800B8594 @ 0x1800B8594
 * Callers:
 *     sub_1801042DC @ 0x1801042DC (sub_1801042DC.c)
 *     sub_1801045F8 @ 0x1801045F8 (sub_1801045F8.c)
 *     sub_180104B4C @ 0x180104B4C (sub_180104B4C.c)
 * Callees:
 *     sub_1800B8634 @ 0x1800B8634 (sub_1800B8634.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800B8594(__int64 a1, __int64 a2, int a3, int a4)
{
  if ( a4 )
  {
    *(_QWORD *)a1 = &unk_1801D8608;
    std::ios::ios(a1 + 144);
  }
  std::istream::istream(a1, a1 + 16, 0LL, 0LL);
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1) = &std::istringstream::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 - 4) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 144;
  sub_1800B8634(a1 + 16, a2, a3 | 1u);
  return a1;
}
