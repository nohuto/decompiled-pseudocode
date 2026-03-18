/*
 * XREFs of ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800525D0
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180051C60 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x1800E9580 (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x1800E9898 (-CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x18011456C (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801FE380 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetExpressionTypeChannelCount(int a1)
{
  if ( a1 >= 17 && (a1 == 35 || a1 == 52 || a1 <= 18 || a1 == 42 || a1 > 68 && (a1 <= 71 || a1 == 104 || a1 == 265)) )
    return (unsigned int)a1 >> 4;
  else
    return 0LL;
}
