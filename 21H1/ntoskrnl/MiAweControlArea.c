/*
 * XREFs of MiAweControlArea @ 0x1402A2718
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1402A42A0 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x14054812C (MiReferenceAweHandle.c)
 *     MmGetSectionInformation @ 0x1405DB7B0 (MmGetSectionInformation.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiDeletePageFileSectionNodes @ 0x14063EC28 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x1406ED434 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiAweControlArea(__int64 a1)
{
  return !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 56) & 0x400) == 0 && (*(_DWORD *)(a1 + 92) & 0x20000) != 0;
}
