/*
 * XREFs of ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18006A0FC
 * Callers:
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x180023D64 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x180069F5C (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x18006A0B0 (-CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801B0EAC (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetExpressionTypeChannelCount(int a1)
{
  if ( a1 >= 17 && (a1 == 35 || a1 == 52 || a1 <= 18 || a1 == 42 || a1 > 68 && (a1 <= 71 || a1 == 104 || a1 == 265)) )
    return (unsigned int)(a1 >> 4);
  else
    return 0LL;
}
