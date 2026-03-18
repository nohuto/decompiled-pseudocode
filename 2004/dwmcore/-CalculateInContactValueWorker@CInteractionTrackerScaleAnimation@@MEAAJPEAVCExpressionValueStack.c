/*
 * XREFs of ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180205060
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x1801C96AC (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801CAB30 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x1801CE930 (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1802035BC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1802125A0 (-GetActiveManipulationVelocity@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::CalculateInContactValueWorker(
        CInteractionTrackerScaleAnimation *this,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        double a4,
        float *a5)
{
  __int64 v5; // rbx
  float v8; // xmm7_4
  float CurrentValue; // xmm6_4
  double ActiveManipulationVelocity; // xmm0_8
  unsigned int v12; // eax
  float v13; // xmm0_4
  int updated; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx

  v5 = *((_QWORD *)this + 41);
  v8 = *(float *)&a4;
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 16);
  CurrentValue = CInteractionTracker::GetCurrentValue(v5, 2);
  ActiveManipulationVelocity = InteractionSourceManager::GetActiveManipulationVelocity(v5 + 192, 2LL);
  *((_DWORD *)this + 115) = LODWORD(ActiveManipulationVelocity);
  *(float *)&a4 = *(float *)&a4 * *((float *)this + 146);
  *((_DWORD *)this + 146) = LODWORD(a4);
  v12 = CInteractionTracker::BoundaryFromValue(v5, *(float *)&a4, 2u);
  v13 = CScrollAnimation::UpdateValueWithChaining((__int64)this, a4, v8, v12).m128_f32[0];
  if ( v13 == CurrentValue
    || (updated = CInteractionTracker::UpdateCenterPointForState(v5, a2, a3, 1u), v16 = updated, updated >= 0) )
  {
    v16 = 0;
    *a5 = v13;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, updated, 0xE3u, 0LL);
  }
  return v16;
}
