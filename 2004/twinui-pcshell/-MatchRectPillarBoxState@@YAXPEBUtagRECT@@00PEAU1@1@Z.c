/*
 * XREFs of ?MatchRectPillarBoxState@@YAXPEBUtagRECT@@00PEAU1@1@Z @ 0x1803C8354
 * Callers:
 *     ?v_PrepareAppRects@CAppArrangementSingleTransitionTarget@@EEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803C97E0 (-v_PrepareAppRects@CAppArrangementSingleTransitionTarget@@EEAAXPEAUIAppLayoutOperationItem@@PEAU.c)
 * Callees:
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x1803C5814 (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 */

void __fastcall MatchRectPillarBoxState(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        struct tagRECT *a4,
        LPRECT lprc)
{
  struct tagRECT v5; // xmm0
  LONG right; // r8d
  int v9; // eax

  v5 = *a1;
  *a4 = *a1;
  *lprc = v5;
  MatchRectAspectRatio(a4, a2);
  MatchRectAspectRatio(lprc, a3);
  right = a3->right;
  if ( right > a3->left )
  {
    v9 = MulDiv(a3->left - a2->left, lprc->right - lprc->left, right - a3->left);
    OffsetRect(lprc, v9, 0);
  }
}
