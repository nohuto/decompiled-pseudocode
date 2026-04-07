/*
 * XREFs of ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800BA284
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800317E0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180032578 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x1800062A0 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800304B8 (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800B9798 (-GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
        CAnimationClockCoordinator *this,
        const struct _GUID *a2,
        unsigned int a3,
        void **a4)
{
  struct _GUID v4; // xmm0
  int AnimationClock; // ebx
  int CommitHandle; // eax
  struct _GUID v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CAnimationClock *v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = *a2;
  v13 = 0LL;
  v11 = v4;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v13);
  AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v11, &v13);
  if ( AnimationClock >= 0 )
  {
    CommitHandle = CAnimationClock::GetCommitHandle(v13, a3, a4);
    AnimationClock = CommitHandle;
    if ( CommitHandle >= 0 )
      AnimationClock = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD4,
        (__int64)"clientcore\\windows\\dwm\\udwm\\animationclockcoordinator.cpp",
        (const char *)(unsigned int)CommitHandle);
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v13);
  return (unsigned int)AnimationClock;
}
