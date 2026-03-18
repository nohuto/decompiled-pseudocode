/*
 * XREFs of ??1CLockedInputSpace@@QEAA@XZ @ 0x1C00CEFE4
 * Callers:
 *     NtInputSpaceRegionFromPoint @ 0x1C012DDD0 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     <none>
 */

void __fastcall CLockedInputSpace::~CLockedInputSpace(PERESOURCE **this)
{
  ExReleaseResourceLite(*this[1]);
  KeLeaveCriticalRegion();
}
