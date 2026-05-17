/*
 * XREFs of _RtlpStackDbStackComparitor@8 @ 0x4B38B0F2
 * Callers:
 *     _RtlStackDbStackAdd@12 @ 0x4B38A376 (_RtlStackDbStackAdd@12.c)
 * Callees:
 *     _RtlpStackDbEntryIsEqual@8 @ 0x4B38AA48 (_RtlpStackDbEntryIsEqual@8.c)
 */

BOOL __stdcall RtlpStackDbStackComparitor(int a1, _DWORD *a2)
{
  return RtlpStackDbEntryIsEqual(a1, a2);
}
