/*
 * XREFs of ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x1802123A0
 * Callers:
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x1801C96EC (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801CB9E0 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801CB194 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180213348 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

__int64 __fastcall InteractionSourceManager::GetActiveManipulationCenterpoint(InteractionSourceManager *a1, __int64 a2)
{
  __int64 v3; // r10
  struct CManipulation *ActiveManipulation; // rax
  __int64 v5; // xmm0_8

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  if ( InteractionSourceManager::HasActiveManipulation(a1) )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(a1);
    v5 = *(_QWORD *)((char *)ActiveManipulation + 308);
    LODWORD(ActiveManipulation) = *((_DWORD *)ActiveManipulation + 79);
    *(_QWORD *)v3 = v5;
    *(_DWORD *)(v3 + 8) = (_DWORD)ActiveManipulation;
    *(float *)v3 = *(float *)v3 * -1.0;
    *(float *)(v3 + 4) = *(float *)(v3 + 4) * -1.0;
  }
  return v3;
}
