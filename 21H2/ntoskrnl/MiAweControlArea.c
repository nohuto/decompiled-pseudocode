/*
 * XREFs of MiAweControlArea @ 0x14028799C
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1402874E8 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x1405AC580 (MiReferenceAweHandle.c)
 *     MmGetSectionInformation @ 0x14066C980 (MmGetSectionInformation.c)
 *     MiDeletePageFileSectionNodes @ 0x1406F4878 (MiDeletePageFileSectionNodes.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiDereferenceFailedControlArea @ 0x1407F854C (MiDereferenceFailedControlArea.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiAweControlArea(__int64 a1)
{
  return !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 56) & 0x400) == 0 && (*(_DWORD *)(a1 + 92) & 0x20000) != 0;
}
