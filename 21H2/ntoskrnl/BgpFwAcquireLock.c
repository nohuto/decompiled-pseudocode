/*
 * XREFs of BgpFwAcquireLock @ 0x14039C2F8
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
 *     BgAcquireSpinLock @ 0x1409F4B40 (BgAcquireSpinLock.c)
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
 *     KxAcquireSpinLock @ 0x1402295B0 (KxAcquireSpinLock.c)
 */

void BgpFwAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9

  if ( (dword_140C134F0 & 0xC00) != 0xC00 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      while ( qword_140CEC370 )
        _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
      }
    }
    KxAcquireSpinLock(&qword_140CEC370);
    byte_140C542A8 = CurrentIrql;
  }
}
