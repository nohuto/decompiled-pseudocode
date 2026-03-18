/*
 * XREFs of ?IsPositionRoundingSuggestedForActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x180215350
 * Callers:
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1801D1388 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801CDA94 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180215D18 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

char __fastcall InteractionSourceManager::IsPositionRoundingSuggestedForActiveManipulation(
        InteractionSourceManager *this)
{
  bool HasActiveManipulation; // al
  InteractionSourceManager *v2; // r10
  char v3; // r9
  InteractionSourceManager *v4; // r10
  InteractionSourceManager *v5; // r10
  InteractionSourceManager *v6; // r10

  HasActiveManipulation = InteractionSourceManager::HasActiveManipulation(this);
  v3 = 0;
  if ( HasActiveManipulation
    && COERCE_FLOAT(*((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v2) + 96) & _xmm) < 0.1
    && COERCE_FLOAT(*((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v4) + 97) & _xmm) < 0.1
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)InteractionSourceManager::TryGetActiveManipulation(v5) + 99) - 0.0) & _xmm) <= 0.0000011920929
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)InteractionSourceManager::TryGetActiveManipulation(v6) + 100) - 0.0) & _xmm) <= 0.0000011920929 )
  {
    return 1;
  }
  return v3;
}
