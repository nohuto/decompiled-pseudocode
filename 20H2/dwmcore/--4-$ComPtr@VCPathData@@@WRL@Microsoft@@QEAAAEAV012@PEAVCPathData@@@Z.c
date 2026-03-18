/*
 * XREFs of ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B0E18
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800255B8 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180025CC0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180026630 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180026A70 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800279D8 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18007E910 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BFF48 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801D2A70 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetProperty@CPathGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801E1EF0 (-GetProperty@CPathGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801E2104 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18020374C (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x18021E5BC (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 *     ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18025AED0 (-GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18025C520 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180024548 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CPathData>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v6 = a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v6);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
