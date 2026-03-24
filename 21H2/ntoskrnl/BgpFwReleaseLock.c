/*
 * XREFs of BgpFwReleaseLock @ 0x14039C2A8
 * Callers:
 *     BgLibraryEnable @ 0x14038D96C (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x14039BE14 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14039C364 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x140517EF0 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1405180C0 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x1405C423C (BgDisplaySafeToPowerOffScreen.c)
 *     BgFreeContext @ 0x1409F1038 (BgFreeContext.c)
 *     BgGetContext @ 0x1409F1248 (BgGetContext.c)
 *     ResFwpPageOutBackground @ 0x1409F1470 (ResFwpPageOutBackground.c)
 *     BgDisplayFade @ 0x1409F161C (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x1409F1664 (BgConsoleGetInterface.c)
 *     AnFwFadeCompletion @ 0x1409F21B4 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F24C0 (AnFwpFadeAnimationTimer.c)
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 *     ResFwBackgroundTransition @ 0x1409F3408 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1409F344C (ResFwpPageInBackground.c)
 *     BgLibraryDisable @ 0x1409F3ED0 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x1409F3F5C (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x1409F4334 (BgDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409F44C0 (AnFwpProgressIndicatorTimer.c)
 *     BgDisplayBackgroundUpdate @ 0x1409F4748 (BgDisplayBackgroundUpdate.c)
 *     BgpConsoleInitialize @ 0x1409F4820 (BgpConsoleInitialize.c)
 *     BgReleaseSpinLock @ 0x1409F4B28 (BgReleaseSpinLock.c)
 *     BgDisplayString @ 0x1409F6570 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x1409F65E0 (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x1409F664C (BgMarkHiberPhase.c)
 *     BgSetBootGraphicsInformation @ 0x1409F6684 (BgSetBootGraphicsInformation.c)
 *     BgpConsoleClearScreen @ 0x1409F66E0 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x1409F67B0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409F6B60 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x1409F6CE0 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x1409F6D50 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x1409F6FE0 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x1409F7090 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409F71B0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void BgpFwReleaseLock()
{
  unsigned __int64 v0; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v3; // eax
  bool v4; // zf

  if ( (dword_140C134F0 & 0xC00) != 0xC00 )
  {
    v0 = (unsigned __int8)byte_140C542A8;
    KxReleaseSpinLock(&qword_140CEC370);
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
