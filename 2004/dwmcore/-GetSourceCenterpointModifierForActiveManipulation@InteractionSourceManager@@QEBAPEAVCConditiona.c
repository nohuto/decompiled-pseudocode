/*
 * XREFs of ?GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180212694
 * Callers:
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x1801C96EC (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801CB194 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180213348 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

__int64 __fastcall InteractionSourceManager::GetSourceCenterpointModifierForActiveManipulation(
        InteractionSourceManager *a1)
{
  bool HasActiveManipulation; // al
  __int64 v3; // r9
  struct CManipulation *ActiveManipulation; // rax
  int v5; // r10d

  HasActiveManipulation = InteractionSourceManager::HasActiveManipulation(a1);
  v3 = 0LL;
  if ( HasActiveManipulation )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(a1);
    if ( v5 )
    {
      if ( v5 == 1 )
        return *((_QWORD *)ActiveManipulation + 61);
    }
    else
    {
      return *((_QWORD *)ActiveManipulation + 60);
    }
  }
  return v3;
}
