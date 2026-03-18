/*
 * XREFs of _UmfdIsCurrentProcessUmfdHostNoLock@0 @ 0x8B68A
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SG_NXZ @ 0x8B79C (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SG_NXZ.c)
 */

BOOL __stdcall UmfdIsCurrentProcessUmfdHostNoLock()
{
  return UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock();
}
