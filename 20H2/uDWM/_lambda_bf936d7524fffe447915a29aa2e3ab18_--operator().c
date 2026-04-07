/*
 * XREFs of _lambda_bf936d7524fffe447915a29aa2e3ab18_::operator() @ 0x180050DC8
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_bf936d7524fffe447915a29aa2e3ab18___ @ 0x180050D00 (CTransitionVisualController--ForEachOwnedWindow__lambda_bf936d7524fffe447915a29aa2e3ab18___.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000C8D4 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18000CAC0 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x180041618 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 */

__int64 __fastcall lambda_bf936d7524fffe447915a29aa2e3ab18_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  char v6; // al

  v2 = 0;
  if ( *(_QWORD *)(a2 + 384) )
  {
    if ( CTransitionVisualController::ShouldCloneWindow(*(HWND *)(a2 + 40)) )
    {
      if ( (*(_DWORD *)(a2 + 100) & 0x20000000) == 0 )
      {
        v6 = *(_BYTE *)(a2 + 608);
        if ( (v6 & 4) == 0
          && (v6 & 1) != 0
          && (**(_DWORD **)a1 == -1
           || !CAnimationScheduler::IsWindowCurrentlyAnimating(
                 *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
                 *(HWND *)(a2 + 40),
                 **(_DWORD **)a1,
                 0)) )
        {
          return (unsigned int)CTransitionVisualController::_StageCloneRelative(
                                 *(CTransitionVisualController **)(a1 + 8),
                                 *(struct CTopLevelWindow **)(a2 + 384),
                                 **(struct CVisual ***)(a1 + 16),
                                 0LL,
                                 0LL,
                                 0,
                                 1,
                                 *(bool **)(a1 + 24));
        }
      }
    }
  }
  return v2;
}
