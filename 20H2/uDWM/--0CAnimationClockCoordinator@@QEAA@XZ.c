/*
 * XREFs of ??0CAnimationClockCoordinator@@QEAA@XZ @ 0x180052EF4
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180049978 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     <none>
 */

CAnimationClockCoordinator *__fastcall CAnimationClockCoordinator::CAnimationClockCoordinator(
        CAnimationClockCoordinator *this)
{
  *(_QWORD *)this = &CAnimationClockCoordinator::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  return this;
}
