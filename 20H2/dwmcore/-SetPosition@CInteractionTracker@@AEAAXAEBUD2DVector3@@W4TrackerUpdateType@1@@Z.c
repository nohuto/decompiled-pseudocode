/*
 * XREFs of ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801CB868
 * Callers:
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x1801C7698 (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801C8AE8 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801C8B78 (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801CB9D0 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1801CBB88 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801CBD8C (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CE148 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x1801CF654 (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801CFAF8 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800710C0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x1801CC56C (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1801CCBBC (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801CFAF8 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 */

void __fastcall CInteractionTracker::SetPosition(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  CInteractionTrackerBindingManager *v7; // rcx

  if ( *(_QWORD *)(a1 + 72) != *(_QWORD *)a2 || *(_DWORD *)(a1 + 80) != *(_DWORD *)(a2 + 8) )
  {
    *(_QWORD *)(a1 + 72) = *(_QWORD *)a2;
    v6 = *(_DWORD *)(a2 + 8);
    *(_BYTE *)(a1 + 532) |= 2u;
    *(_DWORD *)(a1 + 80) = v6;
    CResource::InvalidateAnimationSources((CResource *)a1, 1);
    CResource::InvalidateAnimationSources((CResource *)a1, 58);
    if ( *(_DWORD *)(a1 + 168) == 1 )
      CInteractionTracker::UpdatePositionRoundingSuggestion((CInteractionTracker *)a1);
    CInteractionTracker::TelemetrySetPosition((CInteractionTracker *)a1);
    v7 = *(CInteractionTrackerBindingManager **)(a1 + 632);
    if ( v7 )
    {
      if ( !a3 )
        CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
          v7,
          (struct CInteractionTracker *)a1,
          (const struct D2DVector3 *)a2,
          0);
    }
  }
}
