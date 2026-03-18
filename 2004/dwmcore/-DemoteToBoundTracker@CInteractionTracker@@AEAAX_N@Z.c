/*
 * XREFs of ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1801CA48C
 * Callers:
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1801CD998 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1801CDB08 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801D0234 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801D1958 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1801D1B4C (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1801D1C6C (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 * Callees:
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801CA504 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801CA63C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1801CE2F0 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 */

void __fastcall CInteractionTracker::DemoteToBoundTracker(CInteractionTracker *this, bool a2)
{
  char v2; // al
  int v5; // edi
  int v6; // edx

  v2 = *((_BYTE *)this + 533);
  if ( (v2 & 1) != 0 )
  {
    *((_BYTE *)this + 533) = v2 & 0xFE;
    CInteractionTracker::DestroyInteractionAnimations(this);
    CInteractionTracker::DestroyDefaultAnimations(this, 0);
    v5 = 0;
    while ( v5 == 1 )
    {
      if ( (*((_BYTE *)this + 533) & 2) == 0 )
      {
        v6 = 1;
LABEL_7:
        CInteractionTracker::StopCustomAnimation(this, v6, a2);
      }
      if ( (unsigned int)++v5 >= 2 )
        return;
    }
    v6 = v5;
    goto LABEL_7;
  }
}
