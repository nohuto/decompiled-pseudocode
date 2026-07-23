/*
 * XREFs of _RtlpStackDbStackComparitor@8 @ 0x4B38B0F2
 * Callers:
 *     _RtlStackDbStackAdd@12 @ 0x4B38A376 (_RtlStackDbStackAdd@12.c)
 * Callees:
 *     _RtlpStackDbEntryIsEqual@8 @ 0x4B38AA48 (_RtlpStackDbEntryIsEqual@8.c)
 */

BOOL __userpurge RtlpStackDbStackComparitor@<eax>(int a1@<esi>, int a2, _DWORD *a3)
{
  return RtlpStackDbEntryIsEqual(a3, a2, a1) != 0;
}
