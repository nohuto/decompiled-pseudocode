/*
 * XREFs of ??1CLockedInputSpace@@QEAA@XZ @ 0x1C00CE4E4
 * Callers:
 *     NtInputSpaceRegionFromPoint @ 0x1C0133DC0 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockedInputSpace::~CLockedInputSpace(PERESOURCE **this)
{
  ExReleaseResourceLite(*this[1]);
  KeLeaveCriticalRegion();
}
