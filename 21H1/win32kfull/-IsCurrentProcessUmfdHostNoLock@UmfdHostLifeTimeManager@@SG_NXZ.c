/*
 * XREFs of ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SG_NXZ @ 0x8B79C
 * Callers:
 *     _UmfdIsCurrentProcessUmfdHostNoLock@0 @ 0x8B68A (_UmfdIsCurrentProcessUmfdHostNoLock@0.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SGPAXXZ @ 0xD3E72 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SGPAXXZ.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDE13E (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     ?ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z @ 0xE89BA (-ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z.c)
 * Callees:
 *     <none>
 */

bool __stdcall UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock()
{
  return UmfdHostLifeTimeManager::s_UmfdHostProcess == (PVOID)PsGetCurrentProcess();
}
