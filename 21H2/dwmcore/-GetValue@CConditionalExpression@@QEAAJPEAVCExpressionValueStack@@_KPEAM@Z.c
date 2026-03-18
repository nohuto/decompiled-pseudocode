/*
 * XREFs of ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180211050
 * Callers:
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x180211668 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18021C784 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x180265F20 (-Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801FC734 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 *     ?GetDebugTargetInfo@CConditionalExpression@@AEBA?AUDebugTargetInfo@1@XZ @ 0x180210F80 (-GetDebugTargetInfo@CConditionalExpression@@AEBA-AUDebugTargetInfo@1@XZ.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1802289B0 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

__int64 __fastcall CConditionalExpression::GetValue(
        MatrixSubchannelMaskInfo **this,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        float *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebp
  unsigned __int8 IsEnabled; // al
  unsigned int v12; // edx
  CExpressionValue *v13; // rax
  float *v14; // rdi
  int v15; // r8d
  wchar_t *AnimationLoggingManagerNoRef; // rax
  unsigned int v18[4]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v19[80]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20; // [rsp+D0h] [rbp+8h] BYREF

  *a4 = 0.0;
  v8 = (*((__int64 (__fastcall **)(MatrixSubchannelMaskInfo **, struct CExpressionValueStack *, wchar_t *, __int64 *))*this
        + 32))(
         this,
         a2,
         a3,
         &v20);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x1DDu);
  }
  else
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
    v12 = *((_DWORD *)a2 + 4) - 1;
    if ( IsEnabled && v12 >= *((_DWORD *)a2 + 12) )
    {
      v13 = CExpressionValue::CExpressionValue((CExpressionValue *)v19);
      v14 = (float *)&CExpressionValueStack::s_emptyValue;
      CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v13);
      CExpressionValue::~CExpressionValue((CExpressionValue *)v19);
      v15 = *((_DWORD *)a2 + 4);
    }
    else
    {
      v14 = (float *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)a2 + 3, v12);
    }
    *((_DWORD *)a2 + 4) = v15 - 1;
    *a4 = *v14;
    if ( (*((_DWORD *)this[41] + 1) & 0x40000000) != 0 )
    {
      CConditionalExpression::GetDebugTargetInfo((__int64)this, (__int64)v18);
      AnimationLoggingManagerNoRef = (wchar_t *)CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)this);
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        AnimationLoggingManagerNoRef,
        (struct CResource *)this,
        2,
        a3,
        88,
        v18[0],
        v18[1],
        this[25],
        (__int64)v14);
    }
  }
  return v10;
}
