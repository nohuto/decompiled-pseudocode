/*
 * XREFs of ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801BD6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18004A5C0 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18004A600 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180056938 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18005811C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180058404 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801BCD20 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
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
  _BYTE v11[80]; // [rsp+30h] [rbp-978h] BYREF
  struct CDrawListEntry **v12[288]; // [rsp+80h] [rbp-928h] BYREF

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v11, a2, a3);
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v12);
  v7 = CCompositionSkyBoxBrush::BuildDrawList(
         this,
         (struct CBrushDrawListGenerator *)v11,
         (struct CDrawListEntryBuilder *)v12);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x7Fu, 0LL);
  else
    CDrawListCache::Update(a4, a2, v12);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v12);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v11);
  return v9;
}
