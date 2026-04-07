/*
 * XREFs of ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x1800161D8
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010CF4 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001996C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x180012D5C (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180016260 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180016300 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18002ACE8 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 */

__int64 __fastcall CWindowData::OnVisibilityUpdated(CWindowData **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CWindowData *v4; // rcx
  CTransitionVisualController *v6; // r10
  int v7; // eax

  CWindowData::CheckOwnedWindowEligibility((CWindowData *)this);
  v2 = CWindowData::NotifyRepresentationChanged((CWindowData *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x1CF2u);
  }
  else
  {
    v4 = this[67];
    if ( v4 && (v7 = CWindowData::NotifyRepresentationChanged(v4), v3 = v7, v7 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1CF5u);
    }
    else if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31)
           && *((_DWORD *)this + 28) != 1
           && (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 30)) > 0 )
    {
      CTransitionVisualController::_SetupHighZOrderStaticWindows(v6);
    }
  }
  return v3;
}
