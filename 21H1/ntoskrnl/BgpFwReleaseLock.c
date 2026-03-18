/*
 * XREFs of BgpFwReleaseLock @ 0x140398D88
 * Callers:
 *     BgLibraryEnable @ 0x140389EDC (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x1403988F4 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140398E44 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x140512430 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140512600 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x1405BE66C (BgDisplaySafeToPowerOffScreen.c)
 *     BgFreeContext @ 0x1409EE038 (BgFreeContext.c)
 *     BgGetContext @ 0x1409EE248 (BgGetContext.c)
 *     ResFwpPageOutBackground @ 0x1409EE470 (ResFwpPageOutBackground.c)
 *     BgDisplayFade @ 0x1409EE524 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x1409EE810 (BgConsoleGetInterface.c)
 *     AnFwFadeCompletion @ 0x1409EF1B4 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1409EF4C0 (AnFwpFadeAnimationTimer.c)
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 *     ResFwBackgroundTransition @ 0x1409F0408 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1409F044C (ResFwpPageInBackground.c)
 *     BgLibraryDisable @ 0x1409F0ED0 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x1409F0F5C (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x1409F1334 (BgDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409F14C0 (AnFwpProgressIndicatorTimer.c)
 *     BgDisplayBackgroundUpdate @ 0x1409F1748 (BgDisplayBackgroundUpdate.c)
 *     BgpConsoleInitialize @ 0x1409F1820 (BgpConsoleInitialize.c)
 *     BgReleaseSpinLock @ 0x1409F1B28 (BgReleaseSpinLock.c)
 *     BgDisplayString @ 0x1409F3570 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x1409F35E0 (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x1409F364C (BgMarkHiberPhase.c)
 *     BgSetBootGraphicsInformation @ 0x1409F3684 (BgSetBootGraphicsInformation.c)
 *     BgpConsoleClearScreen @ 0x1409F36E0 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x1409F37B0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409F3B60 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x1409F3CE0 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x1409F3D50 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x1409F3FE0 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x1409F4090 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409F41B0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

void BgpFwReleaseLock()
{
  unsigned __int64 v0; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v3; // eax
  bool v4; // zf

  if ( (dword_140C132D0 & 0xC00) != 0xC00 )
  {
    v0 = (unsigned __int8)byte_140C541A8;
    KxReleaseSpinLock(&qword_140CEC0F0);
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
