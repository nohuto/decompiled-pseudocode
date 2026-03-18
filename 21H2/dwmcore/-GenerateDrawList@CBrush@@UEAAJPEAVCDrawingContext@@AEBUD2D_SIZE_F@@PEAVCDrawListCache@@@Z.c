/*
 * XREFs of ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180053D70
 * Callers:
 *     <none>
 * Callees:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18008EE7C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrush::GenerateDrawList(
        CBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rax
  struct CDrawListBrush *v9; // rcx
  int v10; // ebx
  struct CDrawListBrush *v11; // rax
  CBrushRenderingGraph *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v16; // eax
  unsigned int v17; // ecx
  int DrawList; // eax
  unsigned int v19; // ecx
  struct CDrawListBrush *v20; // [rsp+30h] [rbp-D0h] BYREF
  struct CDrawListBrush **v21; // [rsp+38h] [rbp-C8h]
  unsigned int v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v23; // [rsp+48h] [rbp-B8h]
  _QWORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+60h] [rbp-A0h]
  int v26; // [rsp+ACh] [rbp-54h]
  char v27; // [rsp+B0h] [rbp-50h]
  _BYTE v28[80]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v29[4432]; // [rsp+110h] [rbp+10h] BYREF

  v4 = *(_QWORD *)this;
  v20 = 0LL;
  *(_QWORD *)v22 = 0LL;
  v21 = &v20;
  v23 = 1;
  v10 = (*(__int64 (__fastcall **)(CBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *, unsigned int *))(v4 + 336))(
          this,
          a2,
          a3,
          v22);
  if ( v23 )
  {
    v9 = *(struct CDrawListBrush **)v22;
    v11 = *v21;
    *v21 = *(struct CDrawListBrush **)v22;
    if ( v11 )
      std::default_delete<CDrawListBrush>::operator()(v9, v11);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, &dword_180346338, 3u, v10, 0xAFu, 0LL);
  }
  else
  {
    v12 = (CBrushRenderingGraph *)*((_QWORD *)this + 9);
    if ( v12 )
    {
      v13 = *((_QWORD *)a2 + 5);
      if ( *(int *)(v13 + 584) >= 37632 && !*(_BYTE *)(v13 + 1505) )
      {
        v14 = CBrushRenderingGraph::RenderSubgraphs(v12, a2, a3, v20, a4);
        v10 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v12, &dword_180346338, 3u, v14, 0xC6u, 0LL);
      }
    }
    else
    {
      CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v28, a2, a3);
      v16 = (*(__int64 (__fastcall **)(CBrush *, _BYTE *))(*(_QWORD *)this + 320LL))(this, v28);
      v10 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180346338, 3u, v16, 0xB4u, 0LL);
      }
      else
      {
        v24[0] = v20;
        v24[1] = 0LL;
        v25 = 0;
        v26 = 257;
        v27 = 0;
        CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v29);
        DrawList = CBrushDrawListGenerator::GenerateDrawList(
                     (CBrushDrawListGenerator *)v28,
                     (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v24,
                     (struct CDrawListEntryBuilder *)v29);
        v10 = DrawList;
        if ( DrawList < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_180346338, 3u, DrawList, 0xBBu, 0LL);
        else
          CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v29);
        CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v29);
      }
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v28);
    }
  }
  if ( v20 )
    std::default_delete<CDrawListBrush>::operator()(v12, v20);
  return (unsigned int)v10;
}
