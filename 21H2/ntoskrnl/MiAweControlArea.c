/*
 * XREFs of MiAweControlArea @ 0x140316048
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1403145C8 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x14054DC4C (MiReferenceAweHandle.c)
 *     MmGetSectionInformation @ 0x140620F30 (MmGetSectionInformation.c)
 *     MiDereferenceFailedControlArea @ 0x1406C34F4 (MiDereferenceFailedControlArea.c)
 *     MiDeletePageFileSectionNodes @ 0x1406E8298 (MiDeletePageFileSectionNodes.c)
 *     MiMapViewOfDataSection @ 0x1406EC100 (MiMapViewOfDataSection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiAweControlArea(__int64 a1)
{
  return !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 56) & 0x400) == 0 && (*(_DWORD *)(a1 + 92) & 0x20000) != 0;
}
