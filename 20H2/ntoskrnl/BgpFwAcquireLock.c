/*
 * XREFs of BgpFwAcquireLock @ 0x14039BA28
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
 *     BgAcquireSpinLock @ 0x1409F7B40 (BgAcquireSpinLock.c)
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
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 */

void BgpFwAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9

  if ( (dword_140C13330 & 0xC00) != 0xC00 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      while ( qword_140CEC070 )
        _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
      }
    }
    KxAcquireSpinLock(&qword_140CEC070);
    byte_140C54128 = CurrentIrql;
  }
}
