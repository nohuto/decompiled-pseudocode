/*
 * XREFs of ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800AD0B8
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180053F34 (-GetInputBrushParameters@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     _lambda_c497196b485e4bd0803a3588ab010e9b_::_lambda_invoker_cdecl_ @ 0x1800ACCA0 (_lambda_c497196b485e4bd0803a3588ab010e9b_--_lambda_invoker_cdecl_.c)
 *     ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x1800C6668 (--0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801E30C4 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ??4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z @ 0x1801E79BC (--4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall CDrawListBitmap::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v2 = *a1;
  v4 = *a2;
  *a1 = *a2;
  if ( v4 )
  {
    v10 = *(int *)(*(_QWORD *)(v4 + 8) + 4LL) + v4 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  if ( v2 )
  {
    v11 = v2 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v6 = a2[1];
  v7 = a1[1];
  a1[1] = v6;
  if ( v6 )
  {
    v8 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  if ( v7 )
  {
    v12 = v7 + *(int *)(*(_QWORD *)(v7 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  *((_BYTE *)a1 + 16) = *((_BYTE *)a2 + 16);
  return a1;
}
