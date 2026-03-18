/*
 * XREFs of ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1801D0464
 * Callers:
 *     ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x1801CEAE4 (-ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIO.c)
 * Callees:
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x1801CCB20 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1801CCDBC (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801D0500 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801D0F38 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1801D44C8 (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 */

char __fastcall CInteractionTracker::SetRequestedScale(CInteractionTracker *this, double a2)
{
  int v2; // eax
  char v3; // di
  float v5; // xmm6_4
  __int64 v6; // rdx
  __int64 v7; // rcx
  CInteractionTrackerBindingManager *v8; // rcx

  v2 = *((_DWORD *)this + 42);
  v3 = 0;
  if ( v2 )
  {
    if ( (unsigned int)(v2 - 2) > 1 )
      return v3;
    CInteractionTracker::TransitionToIdle(this);
  }
  v5 = CInteractionTracker::ClampValueToBoundary((__int64)this, 2LL, a2).m128_f32[0] / *((float *)this + 32);
  CInteractionTracker::SetScale(v7, v6, 0LL);
  v8 = (CInteractionTrackerBindingManager *)*((_QWORD *)this + 79);
  if ( v8 )
  {
    *((_BYTE *)this + 533) |= 1u;
    CInteractionTrackerBindingManager::UpdateBoundTrackerScale(v8, this, v5, 1);
    CInteractionTracker::DemoteToBoundTracker(this, 0);
  }
  return 1;
}
