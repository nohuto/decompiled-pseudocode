/*
 * XREFs of ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B2D08
 * Callers:
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180037F48 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180038AB0 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18005FB20 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18008A548 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18008A980 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18008B2F0 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18008B730 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x18008C678 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800C0388 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801D4910 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetProperty@CPathGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801E3D70 (-GetProperty@CPathGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801E3F84 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18020558C (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x18022041C (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 *     ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18025BCB0 (-GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18025D300 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180097A74 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
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
