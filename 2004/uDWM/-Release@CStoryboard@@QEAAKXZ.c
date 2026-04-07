/*
 * XREFs of ?Release@CStoryboard@@QEAAKXZ @ 0x180031D90
 * Callers:
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x180004168 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x180009BE0 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180032048 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180032840 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x180033444 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x1800337E0 (-SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800338CC (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x180035BA0 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180035E54 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x1800379F4 (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180038380 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800AE330 (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800AEAE0 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800AEB20 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180032048 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::Release(CStoryboard *this)
{
  if ( *((_DWORD *)this + 2) == 1 )
    CStoryboard::_Cleanup(this);
  return CBaseObject::Release(this);
}
