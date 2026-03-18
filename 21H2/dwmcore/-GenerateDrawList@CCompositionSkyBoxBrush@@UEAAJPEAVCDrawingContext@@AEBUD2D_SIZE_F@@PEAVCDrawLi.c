/*
 * XREFs of ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020ED80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18008EE7C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18020E450 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::GenerateDrawList(
        CCompositionSkyBoxBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _BYTE v11[80]; // [rsp+30h] [rbp-11C8h] BYREF
  __int64 *v12[554]; // [rsp+80h] [rbp-1178h] BYREF

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v11, a2, a3);
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v12);
  v7 = CCompositionSkyBoxBrush::BuildDrawList(this, (struct CBrushDrawListGenerator *)v11, v12);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x7Fu);
  else
    CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v12);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v12);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v11);
  return v9;
}
