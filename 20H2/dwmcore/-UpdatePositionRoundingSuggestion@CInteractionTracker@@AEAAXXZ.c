/*
 * XREFs of ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1801CCBBC
 * Callers:
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x1801C6BB8 (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801CB868 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801CBF4C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800710C0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x180210B1C (-IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 */

void __fastcall CInteractionTracker::UpdatePositionRoundingSuggestion(CInteractionTracker *this)
{
  int v1; // eax
  bool IsPositionRoundingSuggestedForActiveManipulation; // dl

  v1 = *((_DWORD *)this + 42);
  IsPositionRoundingSuggestedForActiveManipulation = 0;
  if ( v1 )
  {
    if ( v1 == 1 )
      IsPositionRoundingSuggestedForActiveManipulation = InteractionSourceManager::IsPositionRoundingSuggestedForActiveManipulation((CInteractionTracker *)((char *)this + 192));
  }
  else
  {
    IsPositionRoundingSuggestedForActiveManipulation = 1;
  }
  if ( (*((_BYTE *)this + 532) & 1) != IsPositionRoundingSuggestedForActiveManipulation )
  {
    *((_BYTE *)this + 532) = IsPositionRoundingSuggestedForActiveManipulation | *((_BYTE *)this + 532) & 0xFE;
    CResource::InvalidateAnimationSources(this, 60);
  }
}
