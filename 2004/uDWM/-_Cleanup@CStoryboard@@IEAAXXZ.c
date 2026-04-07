/*
 * XREFs of ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180032048
 * Callers:
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x180008214 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x180009BE0 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180031D90 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x180035BA0 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x1800371B0 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800AEAE0 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800AEB20 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 * Callees:
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x180006EE4 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x18000737C (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000B5BC (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800103D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x180028828 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180031D90 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18003223C (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x1800329C8 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800336A4 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x180038058 (-StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z.c)
 */

void __fastcall CStoryboard::_Cleanup(CStoryboard *this)
{
  int v2; // eax
  char v3; // bp
  CDesktopManager *v4; // rax
  CStoryboard *v5; // rcx
  __int64 i; // rdi
  int v7; // edx
  struct CWindowData *WindowDataByHwnd; // rax
  int v9; // ecx
  CBaseObject *v10; // rcx
  __int64 v11; // r10
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = *((_DWORD *)this + 6);
  if ( v2 != 4 )
  {
    if ( (unsigned int)(v2 - 2) > 1 )
    {
      v3 = 1;
      CTransitionVisualController::RemoveTargetsForStoryboard(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
        this,
        1,
        0);
    }
    else
    {
      v3 = 0;
    }
    v4 = CDesktopManager::s_pDesktopManagerInstance;
    *((_DWORD *)this + 6) = 4;
    CWindowPropertyTracker::StopTrackingStoryboard((CWindowPropertyTracker *)(*((_QWORD *)v4 + 30) + 48LL), this);
    CStoryboard::_LogStoryboardEvent(this);
    v5 = (CStoryboard *)*((_QWORD *)this + 10);
    *((_DWORD *)this + 7) = -1;
    if ( v5 )
    {
      CStoryboard::Release(v5);
      *((_QWORD *)this + 10) = 0LL;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
    {
      v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) + 24LL);
      if ( (v7 & 0x20000000) != 0
        && !CAnimationScheduler::ShouldSnapshot(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30), v7, this) )
      {
        CTransitionVisualController::DiscardStoredSnapshot(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
          *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) + 16LL));
      }
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) + 16LL));
      if ( WindowDataByHwnd && (v3 || (*((_DWORD *)WindowDataByHwnd + 154) & 0xFFF) == 0xFFF) )
      {
        v9 = *((_DWORD *)WindowDataByHwnd + 154);
        if ( (v9 & 0x40000000) == 0 )
          *((_DWORD *)WindowDataByHwnd + 154) = v9 & 0x2000000 | 0xFFF;
      }
      CTransitionVisualController::RemoveAnimationComponent(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
        *(struct CAnimationComponent **)(*((_QWORD *)this + 11) + 8 * i));
      v10 = *(CBaseObject **)(*((_QWORD *)this + 11) + 8 * i);
      if ( v10 )
      {
        CBaseObject::Release(v10);
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * i) = 0LL;
      }
    }
    if ( (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                            + 30)) > 0 )
      CTransitionVisualController::SetupZOrder(*(CTransitionVisualController **)(v11 + 248));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
}
