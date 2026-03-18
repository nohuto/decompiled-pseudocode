/*
 * XREFs of ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008CB38
 * Callers:
 *     UmfdIsCurrentProcessUmfdHostNoLock @ 0x1C008CB20 (UmfdIsCurrentProcessUmfdHostNoLock.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008D344 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C00EA8B0 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C012B85C (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(__int64 a1, __int64 a2, __int64 a3)
{
  return UmfdHostLifeTimeManager::s_UmfdHostProcess == (PVOID)PsGetCurrentProcess(a1, a2, a3);
}
