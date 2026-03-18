/*
 * XREFs of ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18021E304
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180219E28 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x18021D6D8 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x18021D858 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 * Callees:
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x1802194C8 (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1802196D8 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18021A420 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18021A558 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x18021DAAC (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18021E0BC (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 */

void __fastcall CInteractionTracker::TransitionToIdle(CInteractionTracker *this)
{
  int v2; // ecx
  __int64 v3; // rax
  _BYTE v4[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *((_DWORD *)this + 44) - 2;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    CInteractionTracker::StopCustomAnimations(this, 0);
  }
  else
  {
    v3 = CInteractionTracker::CalculateInertiaCallbackValues((__int64)this, (__int64)v4);
    *(_OWORD *)((char *)this + 580) = *(_OWORD *)v3;
    *(_OWORD *)((char *)this + 596) = *(_OWORD *)(v3 + 16);
    *(_OWORD *)((char *)this + 612) = *(_OWORD *)(v3 + 32);
    *(_QWORD *)((char *)this + 628) = *(_QWORD *)(v3 + 48);
    CInteractionTracker::DestroyInteractionAnimations(this);
  }
  CInteractionTracker::DestroyDefaultAnimations(this, 0);
  CInteractionTracker::BoostCompositorClock(this, 0);
  CInteractionTracker::SetState((__int64)this, 0, 0);
}
