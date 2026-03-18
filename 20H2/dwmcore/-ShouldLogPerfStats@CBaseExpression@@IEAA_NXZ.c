/*
 * XREFs of ?ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ @ 0x1801D9D60
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1801FE7E4 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     <none>
 */

char __fastcall CBaseExpression::ShouldLogPerfStats(CBaseExpression *this)
{
  char result; // al

  result = 0;
  if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0 || CCommonRegistryData::LogExpressionPerfStats )
    return 1;
  return result;
}
