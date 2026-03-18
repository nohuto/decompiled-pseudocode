/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180255EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180219524 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18021AC2C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x18021AE58 (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x18021E7DC (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180254B6C (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x18025FBC8 (-CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z.c)
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x180264278 (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInContactValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float *a5)
{
  __int64 v5; // rax
  _DWORD *v6; // rbx
  float MostRecentCenterPoint; // xmm6_4
  double ActiveManipulationVelocity; // xmm0_8
  float v11; // xmm3_4
  int v12; // r11d
  float v13; // xmm2_4
  _DWORD *v14; // rcx
  int v15; // r11d
  float v16; // xmm4_4
  unsigned int v17; // eax
  double v18; // xmm5_8

  v5 = *((_QWORD *)this + 44);
  v6 = 0LL;
  if ( v5 )
    v6 = *(_DWORD **)(v5 + 16);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint((__int64)v6, 1, *((_DWORD *)this + 85));
  CInteractionTracker::GetCurrentValue((__int64)v6, 2);
  ActiveManipulationVelocity = InteractionSourceManager::GetActiveManipulationVelocity(
                                 v6 + 50,
                                 *((unsigned int *)this + 85));
  v11 = *(float *)&ActiveManipulationVelocity;
  v13 = CInteractionTracker::ValueFromBoundary(v6, 2LL, v12);
  *(float *)&ActiveManipulationVelocity = CInteractionTracker::ValueFromBoundary(v14, 1LL, v15);
  *(float *)&ActiveManipulationVelocity = CPositionMotion::CalculateInContactValue(
                                            (CInteractionTrackerPositionAnimation *)((char *)this + 456),
                                            *(float *)&ActiveManipulationVelocity,
                                            v13,
                                            a4,
                                            v11,
                                            v16,
                                            MostRecentCenterPoint);
  v17 = CInteractionTracker::BoundaryFromValue(
          (__int64)v6,
          *(float *)&ActiveManipulationVelocity,
          *((_DWORD *)this + 85));
  *(_DWORD *)a5 = CScrollAnimation::UpdateValueWithChaining(
                    (__int64)this,
                    v18,
                    *(float *)&v18 - *((float *)this + 125),
                    v17).m128_u32[0];
  return 0LL;
}
