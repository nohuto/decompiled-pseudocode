/*
 * XREFs of BgpFwReleaseLock @ 0x14039B9D8
 * Callers:
 *     BgLibraryEnable @ 0x14038D24C (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x14039B544 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14039BA94 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x1405163B0 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140516580 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x1405C2A0C (BgDisplaySafeToPowerOffScreen.c)
 *     BgFreeContext @ 0x1409F4038 (BgFreeContext.c)
 *     BgGetContext @ 0x1409F4248 (BgGetContext.c)
 *     ResFwpPageOutBackground @ 0x1409F4470 (ResFwpPageOutBackground.c)
 *     BgDisplayFade @ 0x1409F4524 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x1409F4810 (BgConsoleGetInterface.c)
 *     AnFwFadeCompletion @ 0x1409F51B4 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F54C0 (AnFwpFadeAnimationTimer.c)
 *     BgpFwLibraryInitialize @ 0x1409F59E8 (BgpFwLibraryInitialize.c)
 *     ResFwBackgroundTransition @ 0x1409F6408 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1409F644C (ResFwpPageInBackground.c)
 *     BgLibraryDisable @ 0x1409F6ED0 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x1409F6F5C (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x1409F7334 (BgDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409F74C0 (AnFwpProgressIndicatorTimer.c)
 *     BgDisplayBackgroundUpdate @ 0x1409F7748 (BgDisplayBackgroundUpdate.c)
 *     BgpConsoleInitialize @ 0x1409F7820 (BgpConsoleInitialize.c)
 *     BgReleaseSpinLock @ 0x1409F7B28 (BgReleaseSpinLock.c)
 *     BgDisplayString @ 0x1409F9570 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x1409F95E0 (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x1409F964C (BgMarkHiberPhase.c)
 *     BgSetBootGraphicsInformation @ 0x1409F9684 (BgSetBootGraphicsInformation.c)
 *     BgpConsoleClearScreen @ 0x1409F96E0 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x1409F97B0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409F9B60 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x1409F9CE0 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x1409F9D50 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x1409F9FE0 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x1409FA090 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409FA1B0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

void BgpFwReleaseLock()
{
  unsigned __int64 v0; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v3; // eax
  bool v4; // zf

  if ( (dword_140C13330 & 0xC00) != 0xC00 )
  {
    v0 = (unsigned __int8)byte_140C54128;
    KxReleaseSpinLock(&qword_140CEC070);
    if ( (unsigned __int8)v0 <= 2u )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v3 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v4 = (v3 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v3;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v0);
    }
  }
}
