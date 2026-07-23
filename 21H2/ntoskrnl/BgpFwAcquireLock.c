/*
 * XREFs of BgpFwAcquireLock @ 0x14039C448
 * Callers:
 *     BgLibraryEnable @ 0x14038DABC (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x14039BF64 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14039C4B4 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x140518130 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140518300 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x1405C446C (BgDisplaySafeToPowerOffScreen.c)
 *     BgFreeContext @ 0x1409F2038 (BgFreeContext.c)
 *     BgGetContext @ 0x1409F2248 (BgGetContext.c)
 *     ResFwpPageOutBackground @ 0x1409F2470 (ResFwpPageOutBackground.c)
 *     BgDisplayFade @ 0x1409F261C (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x1409F2664 (BgConsoleGetInterface.c)
 *     AnFwFadeCompletion @ 0x1409F31B4 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F34C0 (AnFwpFadeAnimationTimer.c)
 *     BgpFwLibraryInitialize @ 0x1409F39E8 (BgpFwLibraryInitialize.c)
 *     ResFwBackgroundTransition @ 0x1409F4408 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1409F444C (ResFwpPageInBackground.c)
 *     BgLibraryDisable @ 0x1409F4ED0 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x1409F4F5C (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x1409F5334 (BgDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409F54C0 (AnFwpProgressIndicatorTimer.c)
 *     BgDisplayBackgroundUpdate @ 0x1409F5748 (BgDisplayBackgroundUpdate.c)
 *     BgpConsoleInitialize @ 0x1409F5820 (BgpConsoleInitialize.c)
 *     BgAcquireSpinLock @ 0x1409F5B40 (BgAcquireSpinLock.c)
 *     BgDisplayString @ 0x1409F7570 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x1409F75E0 (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x1409F764C (BgMarkHiberPhase.c)
 *     BgSetBootGraphicsInformation @ 0x1409F7684 (BgSetBootGraphicsInformation.c)
 *     BgpConsoleClearScreen @ 0x1409F76E0 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x1409F77B0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1409F7B60 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x1409F7CE0 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x1409F7D50 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x1409F7FE0 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x1409F8090 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1409F81B0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
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
      while ( qword_140CEC3B0 )
        _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
      }
    }
    KxAcquireSpinLock(&qword_140CEC3B0);
    byte_140C542E8 = CurrentIrql;
  }
}
