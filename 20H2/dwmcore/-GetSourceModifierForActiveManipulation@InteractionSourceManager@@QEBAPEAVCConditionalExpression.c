/*
 * XREFs of ?GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1802108B0
 * Callers:
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180200A7C (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801C9384 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18021087C (-GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAx.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1802114E4 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

__int64 __fastcall InteractionSourceManager::GetSourceModifierForActiveManipulation(
        InteractionSourceManager *a1,
        int a2)
{
  bool HasActiveManipulation; // al
  InteractionSourceManager *v4; // r10
  __int64 v5; // r8
  struct CManipulation *ActiveManipulation; // rax

  HasActiveManipulation = InteractionSourceManager::HasActiveManipulation(a1);
  v5 = 0LL;
  if ( HasActiveManipulation )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v4);
    return CManipulation::GetSourceModifierConditionalAnimation(ActiveManipulation, a2);
  }
  return v5;
}
