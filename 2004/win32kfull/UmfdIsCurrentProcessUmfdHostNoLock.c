/*
 * XREFs of UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C0016EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0016EB8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

_BOOL8 UmfdIsCurrentProcessUmfdHostNoLock()
{
  return UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock();
}
