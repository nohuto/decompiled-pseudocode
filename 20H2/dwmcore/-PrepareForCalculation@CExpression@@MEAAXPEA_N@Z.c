/*
 * XREFs of ?PrepareForCalculation@CExpression@@MEAAXPEA_N@Z @ 0x18002D830
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EA850 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@deta.c)
 */

void __fastcall CExpression::PrepareForCalculation(CExpression *this, bool *a2)
{
  bool *v2; // rdi
  bool v4; // al

  v2 = a2;
  if ( CCommonRegistryData::OptimizeForDirtyExpressions )
  {
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling>::GetImpl'::`2'::impl,
      a2);
    if ( *((_QWORD *)this + 53) )
      v4 = 1;
    else
      v4 = *((_QWORD *)this + 34) > *((_QWORD *)this + 20);
    *v2 = v4;
  }
  else
  {
    *a2 = 1;
  }
}
