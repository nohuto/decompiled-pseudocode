/*
 * XREFs of ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801CE5D4
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801C9F54 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1801CD998 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1801CDB08 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 * Callees:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801C9874 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801CA504 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801CA63C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801CDD5C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801CE390 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 */

void __fastcall CInteractionTracker::TransitionToIdle(CInteractionTracker *this)
{
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // r9
  _BYTE v5[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *((_DWORD *)this + 42) - 2;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    CInteractionTracker::StopCustomAnimations(this, 0);
  }
  else
  {
    v3 = CInteractionTracker::CalculateInertiaCallbackValues((__int64)this, (__int64)v5);
    *(_OWORD *)((char *)this + 572) = *(_OWORD *)v3;
    *(_OWORD *)((char *)this + 588) = *(_OWORD *)(v3 + 16);
    *(_OWORD *)((char *)this + 604) = *(_OWORD *)(v3 + 32);
    *(_QWORD *)((char *)this + 620) = *(_QWORD *)(v3 + 48);
    CInteractionTracker::DestroyInteractionAnimations(this);
  }
  CInteractionTracker::DestroyDefaultAnimations(this, 0);
  CInteractionTracker::SetState((__int64)this, 0, 0LL, v4);
}
