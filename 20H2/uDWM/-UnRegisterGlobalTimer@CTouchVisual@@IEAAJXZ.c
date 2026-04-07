/*
 * XREFs of ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180053208
 * Callers:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180047970 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x1800A1790 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?StopTimer@CTextTetherVisual@@MEAAJXZ @ 0x1800A2160 (-StopTimer@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800A42A0 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 *     ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x1800A4320 (-StopTimer@CTouchDragVisual@@MEAAJXZ.c)
 *     ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x1800A4E1C (-StopDelayTimer@CTetherVisual@@IEAAXXZ.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x1800A4E70 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 *     ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x1800A5F50 (-StopTimer@CFlickVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x1800A63B0 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x1800A6B10 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 *     ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x1800AD8A0 (-Stop@CIndirectTouchVisual@@UEAAXXZ.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800AD9A0 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800ADA70 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800B7FF0 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B80C0 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B86C0 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003DF3C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTouchVisual::UnRegisterGlobalTimer(CTouchVisual *this)
{
  if ( *((_BYTE *)this + 280) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    *((_BYTE *)this + 280) = 0;
  }
  return 0LL;
}
