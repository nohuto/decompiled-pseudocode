/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180204920
 * Callers:
 *     <none>
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x1801C96AC (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801CAB30 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x1801CAD30 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x1801CEA84 (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1802035BC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x18020E560 (-CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z.c)
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1802125A0 (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInContactValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float *a5)
{
  __int64 v5; // rax
  _DWORD *v6; // rdi
  float MostRecentCenterPoint; // xmm6_4
  double ActiveManipulationVelocity; // xmm0_8
  float v11; // xmm3_4
  float v12; // xmm2_4
  _DWORD *v13; // rcx
  float v14; // xmm4_4
  unsigned int v15; // eax
  double v16; // xmm5_8

  v5 = *((_QWORD *)this + 41);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_DWORD **)(v5 + 16);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint((__int64)v6, 1, *((_DWORD *)this + 79));
  CInteractionTracker::GetCurrentValue((__int64)v6, 2);
  ActiveManipulationVelocity = InteractionSourceManager::GetActiveManipulationVelocity(
                                 v6 + 48,
                                 *((unsigned int *)this + 79));
  v11 = *(float *)&ActiveManipulationVelocity;
  v12 = CInteractionTracker::ValueFromBoundary(v6, 2LL, *((_DWORD *)this + 79));
  *(float *)&ActiveManipulationVelocity = CInteractionTracker::ValueFromBoundary(v13, 1LL, *((_DWORD *)this + 79));
  *(float *)&ActiveManipulationVelocity = CPositionMotion::CalculateInContactValue(
                                            (CInteractionTrackerPositionAnimation *)((char *)this + 432),
                                            *(float *)&ActiveManipulationVelocity,
                                            v12,
                                            a4,
                                            v11,
                                            v14,
                                            MostRecentCenterPoint);
  v15 = CInteractionTracker::BoundaryFromValue(
          (__int64)v6,
          *(float *)&ActiveManipulationVelocity,
          *((_DWORD *)this + 79));
  *(_DWORD *)a5 = CScrollAnimation::UpdateValueWithChaining(
                    (__int64)this,
                    v16,
                    *(float *)&v16 - *((float *)this + 119),
                    v15).m128_u32[0];
  return 0LL;
}
