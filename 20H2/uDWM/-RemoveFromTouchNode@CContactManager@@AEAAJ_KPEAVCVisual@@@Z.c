/*
 * XREFs of ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800473DC
 * Callers:
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x1800341DC (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x18004720C (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18009D258 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E03C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800A08FC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B070 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180042840 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 */

__int64 __fastcall CContactManager::RemoveFromTouchNode(CContactManager *this, __int64 a2, struct CVisual *a3)
{
  unsigned int v4; // ebx
  CWindowList *v5; // rcx
  struct CVisual *OverlayRootVisualForDesktop; // rax

  v4 = -2147467259;
  v5 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61);
  if ( v5 )
  {
    OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(v5, a2, 0);
    if ( OverlayRootVisualForDesktop )
    {
      v4 = 0;
      VisualCollection::Remove((struct CVisual *)((char *)OverlayRootVisualForDesktop + 32), a3);
    }
  }
  return v4;
}
