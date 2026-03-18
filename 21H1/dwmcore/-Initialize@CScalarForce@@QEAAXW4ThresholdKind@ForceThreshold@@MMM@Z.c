/*
 * XREFs of ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x180216908
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801CEDD0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x18021040C (-InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScalarForce::Initialize(__int64 a1, int a2, float a3, float a4, int a5)
{
  float v6; // xmm6_4
  struct IAccelerator *v8; // r9
  __int64 v9; // [rsp+30h] [rbp-38h]

  v6 = a3;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 40LL))(*(_QWORD *)(a1 + 112)) )
    a3 = a3 - (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 24LL))(*(_QWORD *)(a1 + 112));
  v8 = *(struct IAccelerator **)(a1 + 112);
  HIDWORD(v9) = LODWORD(a3) & _xmm;
  LODWORD(v9) = a2;
  *(_QWORD *)(a1 + 92) = v9;
  *(_DWORD *)(a1 + 104) = a5;
  *(_DWORD *)(a1 + 100) = LODWORD(a4) & _xmm;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 24), v6, a4, v8, (const struct ForceThreshold *)(a1 + 92));
}
