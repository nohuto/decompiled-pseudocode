/*
 * XREFs of MiAweControlArea @ 0x14022D1A8
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x14029E6D0 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x14054C14C (MiReferenceAweHandle.c)
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MmGetSectionInformation @ 0x140636810 (MmGetSectionInformation.c)
 *     MiDeletePageFileSectionNodes @ 0x140682688 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x1406E3578 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiAweControlArea(__int64 a1)
{
  return !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 56) & 0x400) == 0 && (*(_DWORD *)(a1 + 92) & 0x20000) != 0;
}
