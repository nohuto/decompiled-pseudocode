/*
 * XREFs of ?RemoveAllAllocationsFromLookup@UmfdAllocation@@SGXXZ @ 0xCFD7E
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SGXXZ @ 0xCFB96 (-UninitializeProcess@UmfdHostLifeTimeManager@@SGXXZ.c)
 * Callees:
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z @ 0xCFDC2 (-Enumerate@CPointerHashTable@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z.c)
 */

void __stdcall UmfdAllocation::RemoveAllAllocationsFromLookup()
{
  PVOID v0; // esi

  if ( UmfdAllocation::s_allocationLookup )
  {
    v0 = UmfdAllocation::s_allocationLookupLock;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v0, 0);
    NSInstrumentation::CPointerHashTable::Enumerate(
      UmfdAllocation::s_allocationLookup,
      UmfdAllocation::_RemoveAllocationFromLookup,
      0);
    ExReleasePushLockExclusiveEx(v0, 0);
    KeLeaveCriticalRegion();
  }
}
