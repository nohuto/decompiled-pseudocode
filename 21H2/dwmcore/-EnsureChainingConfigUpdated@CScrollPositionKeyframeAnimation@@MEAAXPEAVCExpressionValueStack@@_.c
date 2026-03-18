/*
 * XREFs of ?EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x180255260
 * Callers:
 *     <none>
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180049DC8 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x18004E110 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??A?$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z @ 0x1800C9370 (--A-$DynArray@VCExpressionValue@@$00@@QEBAAEAVCExpressionValue@@I@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800F19F4 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180219524 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x18025F9E8 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 */

void __fastcall CScrollPositionKeyframeAnimation::EnsureChainingConfigUpdated(
        CScrollPositionKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  unsigned __int8 IsEnabled; // al
  unsigned int v5; // edx
  CExpressionValue *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r11
  unsigned int v9; // r10d
  unsigned int v10; // ebx
  __int64 v11; // [rsp+20h] [rbp-68h]
  _BYTE v12[88]; // [rsp+30h] [rbp-58h] BYREF

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl);
  v5 = *((_DWORD *)a2 + 4) - 1;
  if ( IsEnabled && v5 >= *((_DWORD *)a2 + 12) )
  {
    v6 = CExpressionValue::CExpressionValue((CExpressionValue *)v12);
    v7 = &CExpressionValueStack::s_emptyValue;
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v12);
  }
  else
  {
    v7 = (_QWORD *)DynArray<CExpressionValue,1>::operator[]((_QWORD *)a2 + 3, v5);
  }
  v11 = *v7;
  CInteractionTracker::BoundaryFromValue(*((_QWORD *)this + 72), COERCE_FLOAT(*v7), 0);
  v10 = CInteractionTracker::BoundaryFromValue(v8, *((float *)&v11 + 1), 1u);
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(this, 0LL, v9);
  CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(this, 1LL, v10);
}
