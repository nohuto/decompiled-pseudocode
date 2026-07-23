/*
 * XREFs of MiAweControlArea @ 0x140320D98
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x14031F318 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x14054DE8C (MiReferenceAweHandle.c)
 *     MiDereferenceFailedControlArea @ 0x1406220F4 (MiDereferenceFailedControlArea.c)
 *     MmGetSectionInformation @ 0x14068ABA0 (MmGetSectionInformation.c)
 *     MiDeletePageFileSectionNodes @ 0x1406FF678 (MiDeletePageFileSectionNodes.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiAweControlArea(__int64 a1)
{
  return !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 56) & 0x400) == 0 && (*(_DWORD *)(a1 + 92) & 0x20000) != 0;
}
