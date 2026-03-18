/*
 * XREFs of ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18003FED8
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180049390 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x1800ACA50 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800C0E40 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     IsWhitePixelOptimizationCandidate @ 0x18003F8B4 (IsWhitePixelOptimizationCandidate.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180041AC4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x18004C460 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CCommonRenderingEffect::CCommonRenderingEffect(
        __int64 a1,
        CDrawListBitmap *a2,
        __int64 a3,
        CDrawListBitmap *a4,
        __int64 a5)
{
  char v5; // bp
  bool v10; // zf
  char v11; // al

  v5 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCommonRenderingEffect::`vftable';
  `vector constructor iterator'((void *)(a1 + 16), 0x30uLL, 2uLL, (void *(*)(void *))CDrawListBitmap::CDrawListBitmap);
  `vector constructor iterator'((void *)(a1 + 112), 3uLL, 2uLL, (void *(*)(void *))SamplerMode::SamplerMode);
  CDrawListBitmap::operator=(a1 + 16, a2);
  CDrawListBitmap::operator=(a1 + 64, a4);
  *(_WORD *)(a1 + 112) = *(_WORD *)a3;
  *(_BYTE *)(a1 + 114) = *(_BYTE *)(a3 + 2);
  *(_WORD *)(a1 + 115) = *(_WORD *)a5;
  *(_BYTE *)(a1 + 117) = *(_BYTE *)(a5 + 2);
  if ( !*(_QWORD *)a2 && !*((_QWORD *)a2 + 1) || (v10 = IsWhitePixelOptimizationCandidate(a2, 0) == 0, v11 = 0, !v10) )
    v11 = 1;
  *(_BYTE *)(a1 + 118) = v11;
  if ( !*(_QWORD *)a4 && !*((_QWORD *)a4 + 1) || IsWhitePixelOptimizationCandidate(a4, 1) )
    v5 = 1;
  *(_BYTE *)(a1 + 118) &= v5;
  return a1;
}
