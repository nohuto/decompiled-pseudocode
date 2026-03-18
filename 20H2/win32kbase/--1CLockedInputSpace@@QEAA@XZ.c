/*
 * XREFs of ??1CLockedInputSpace@@QEAA@XZ @ 0x1C00CE7A4
 * Callers:
 *     NtInputSpaceRegionFromPoint @ 0x1C012BA80 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockedInputSpace::~CLockedInputSpace(PERESOURCE **this)
{
  ExReleaseResourceLite(*this[1]);
  KeLeaveCriticalRegion();
}
