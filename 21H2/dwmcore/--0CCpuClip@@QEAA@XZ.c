/*
 * XREFs of ??0CCpuClip@@QEAA@XZ @ 0x1800D361C
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180056C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum@CpuClippingScopeMode@@@Z @ 0x180095830 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801E56E8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18020E450 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 */

CCpuClip *__fastcall CCpuClip::CCpuClip(CCpuClip *this)
{
  CShapePtr *v2; // rcx
  char v3; // al

  *((_DWORD *)this + 18) = 0;
  v2 = (CCpuClip *)((char *)this + 80);
  *(_QWORD *)v2 = 0LL;
  *((_BYTE *)v2 + 8) = 0;
  CShapePtr::Release(v2);
  *((_BYTE *)this + 100) = 0;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 1) = 1065353216LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)((char *)this + 28) = 1065353216LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *((_DWORD *)this + 11) = 0;
  *((_QWORD *)this + 6) = 1065353216LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 1065353216;
  v3 = *((_BYTE *)this + 73) & 0xD7;
  *((_BYTE *)this + 72) = 85;
  *((_BYTE *)this + 73) = v3 | 0x17;
  return this;
}
