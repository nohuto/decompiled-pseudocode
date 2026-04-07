/*
 * XREFs of ??1CAnimationComponent@@UEAA@XZ @ 0x180035738
 * Callers:
 *     ??_ECAnimationComponent@@UEAAPEAXI@Z @ 0x1800356F0 (--_ECAnimationComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800103D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18002C2B0 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x180035934 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180037B18 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?UnregisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x18008A5EC (-UnregisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@.c)
 */

void __fastcall CAnimationComponent::~CAnimationComponent(CAnimationComponent *this)
{
  HWND v2; // rdx
  CDesktopManager *v3; // rdi
  HWND v4; // rdx
  CTransitionVisualController *v5; // rsi
  struct CWindowData *WindowDataByHwnd; // rax
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  __int64 v9; // rcx
  struct CIconicAnimatedVisual *v10; // rdx
  CBaseObject *v11; // rcx

  *(_QWORD *)this = &CAnimationComponent::`vftable';
  CAnimationComponent::_LogEvent(this, 1LL);
  v2 = (HWND)*((_QWORD *)this + 2);
  if ( (unsigned __int64)v2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = CDesktopManager::s_pDesktopManagerInstance;
    if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
            *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
            v2,
            68,
            0) )
    {
      v5 = (CTransitionVisualController *)*((_QWORD *)v3 + 31);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(*((CWindowList **)v3 + 61), v4);
      if ( WindowDataByHwnd )
        CTransitionVisualController::RestoreWindow(v5, WindowDataByHwnd, 1);
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 6) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 4) = 0LL;
  }
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
  {
    CBaseObject::Release((CBaseObject *)(v9 + 8));
    *((_QWORD *)this + 5) = 0LL;
  }
  v10 = (struct CIconicAnimatedVisual *)*((_QWORD *)this + 17);
  if ( v10 )
  {
    CImmersiveIconicBitmapRegistry::UnregisterIconicAnimatedVisual(
      *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 38),
      v10);
    v11 = (CBaseObject *)*((_QWORD *)this + 17);
    if ( v11 )
    {
      CBaseObject::Release(v11);
      *((_QWORD *)this + 17) = 0LL;
    }
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
