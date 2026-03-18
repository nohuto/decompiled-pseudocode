/*
 * XREFs of ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180253DFC
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180253F88 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x180113E5C (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x180211668 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18021AC2C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x18021E7DC (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1802640E0 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1802643B0 (-GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAx.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180265008 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInContactDelta(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  __int64 v5; // rax
  InteractionSourceManager *v7; // rcx
  struct CManipulation *ActiveManipulation; // rax
  CConditionalExpression *SourceModifierConditionalAnimation; // rax
  wchar_t *v10; // r10
  struct CExpressionValueStack *v11; // r11
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  _DWORD *v16; // rsi
  float (__fastcall *v17)(CScrollAnimation *); // rbx
  _DWORD *v18; // rcx
  int v19; // r11d
  unsigned int v20; // r11d
  bool v22; // [rsp+70h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 44);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 16);
  if ( !InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(v5 + 200)) )
    goto LABEL_8;
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v7);
  SourceModifierConditionalAnimation = (CConditionalExpression *)CManipulation::GetSourceModifierConditionalAnimation(
                                                                   ActiveManipulation,
                                                                   *((unsigned int *)this + 85));
  v22 = 0;
  if ( !SourceModifierConditionalAnimation )
    goto LABEL_8;
  v12 = CConditionalExpression::ProcessConditionalExpression(
          SourceModifierConditionalAnimation,
          v11,
          v10,
          *((_DWORD *)this + 85) != 2,
          &v22,
          a4);
  v14 = v12;
  if ( v12 >= 0 )
  {
    if ( v22 )
      return 0;
LABEL_8:
    v15 = *((_QWORD *)this + 44);
    if ( v15 )
      v16 = *(_DWORD **)(v15 + 16);
    else
      v16 = 0LL;
    v17 = *(float (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 352LL);
    CInteractionTracker::ValueFromBoundary(v16, 2LL, *((_DWORD *)this + 85));
    CInteractionTracker::ValueFromBoundary(v18, 1LL, v19);
    InteractionSourceManager::GetActiveManipulationDelta(v16 + 50, v20);
    CInteractionTracker::GetCurrentValue((__int64)v16, *((_DWORD *)this + 85));
    *a4 = v17(this);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x25Bu);
  return v14;
}
