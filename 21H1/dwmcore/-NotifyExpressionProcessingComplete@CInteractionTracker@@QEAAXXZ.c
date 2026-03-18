/*
 * XREFs of ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x1801CDE18
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180042060 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801CC884 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801CD1F8 (-EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1801CD288 (-EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z.c)
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x1801CD318 (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x1801CD354 (-EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180215C64 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x180217020 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::NotifyExpressionProcessingComplete(CInteractionTracker *this)
{
  bool v1; // di
  __int64 v3; // rdx
  __int64 v4; // rdx
  CChainingHelper *ActiveChainingHelper; // rax

  v1 = 1;
  if ( (*((_BYTE *)this + 533) & 1) == 0 )
    v1 = *((_QWORD *)this + 79) == 0LL;
  if ( *((_DWORD *)this + 42) )
  {
    if ( !v1 )
      goto LABEL_8;
    CInteractionTracker::CheckForIdle(this);
  }
  if ( v1 )
  {
    CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin((__int64)this, 7);
    CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax((__int64)this, 7);
    CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(this, v3);
    CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(this, v4);
  }
LABEL_8:
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((CInteractionTracker *)((char *)this + 192));
  if ( ActiveChainingHelper )
    CChainingHelper::UpdateConfigurationIfDirty(ActiveChainingHelper);
  CInteractionTracker::SendPendingCallbacks(this);
}
