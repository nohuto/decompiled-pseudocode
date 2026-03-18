/*
 * XREFs of ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800D7134
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180025CC0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ @ 0x180027794 (-EnsureAvailablePushSpace@CExpressionValueStack@@AEAAJXZ.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800672B0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800679D0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x1801D6FB8 (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802042C8 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1802044B4 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800D7190 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CExpressionValue::operator=(__int64 a1, __int64 a2)
{
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  Microsoft::WRL::ComPtr<CPathData>::operator=(a1 + 64, a2 + 64);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  *(_BYTE *)(a1 + 76) = *(_BYTE *)(a2 + 76);
  return a1;
}
