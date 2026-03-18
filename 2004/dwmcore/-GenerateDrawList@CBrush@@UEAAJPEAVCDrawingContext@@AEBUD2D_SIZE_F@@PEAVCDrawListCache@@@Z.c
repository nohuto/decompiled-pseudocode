/*
 * XREFs of ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180049EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18004A5C0 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18004A600 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18004A66C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18004A72C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800539F4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180056938 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18005811C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180058404 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800C19C4 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800E31B0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E3218 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrush::GenerateDrawList(
        CBrushRenderingGraph **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CBrushRenderingGraph *v8; // rax
  __int64 (__fastcall *v9)(CBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *, unsigned int *); // rax
  __int64 v10; // rcx
  int v11; // ebx
  struct CDrawListBrush *v12; // rax
  CBrushRenderingGraph *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int DrawList; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  char *v19; // rsi
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  struct CDrawListBrush *v24; // [rsp+30h] [rbp-D0h] BYREF
  struct CDrawListBrush **v25; // [rsp+38h] [rbp-C8h]
  unsigned int v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v27; // [rsp+48h] [rbp-B8h]
  _QWORD v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+60h] [rbp-A0h]
  __int16 v30; // [rsp+ACh] [rbp-54h]
  char v31; // [rsp+AEh] [rbp-52h]
  _BYTE v32[72]; // [rsp+B0h] [rbp-50h] BYREF
  char v33; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v34[2304]; // [rsp+100h] [rbp+0h] BYREF

  if ( dword_1803492B4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1803492B4);
    if ( dword_1803492B4 == -1 )
    {
      dword_180343AB8 = -2147022876;
      Init_thread_footer(&dword_1803492B4);
    }
  }
  v8 = *this;
  v25 = &v24;
  v24 = 0LL;
  *(_QWORD *)v26 = 0LL;
  v9 = (__int64 (__fastcall *)(CBrush *, struct CDrawingContext *, const struct D2D_SIZE_F *, unsigned int *))*((_QWORD *)v8 + 42);
  v27 = 1;
  v11 = v9((CBrush *)this, a2, a3, v26);
  if ( v27 )
  {
    v10 = *(_QWORD *)v26;
    v12 = *v25;
    *v25 = *(struct CDrawListBrush **)v26;
    if ( v12 )
      std::default_delete<CShape>::operator()(v10, (__int64 (__fastcall ***)(_QWORD, __int64))v12);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180343AB0, 3u, v11, 0xB2u, 0LL);
    goto LABEL_11;
  }
  v13 = this[8];
  if ( !v13 )
  {
    CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v32, a2, a3);
    v14 = (*((__int64 (__fastcall **)(CBrushRenderingGraph **, _BYTE *))*this + 40))(this, v32);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_180343AB0, 3u, v14, 0xB7u, 0LL);
    }
    else
    {
      v28[0] = v24;
      v28[1] = 0LL;
      v29 = 0;
      v30 = 1;
      v31 = 0;
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v34);
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   (CBrushDrawListGenerator *)v32,
                   (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v28,
                   (struct CDrawListEntryBuilder *)v34);
      v11 = DrawList;
      if ( DrawList >= 0 )
      {
        CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v34);
        CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v34);
        CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v32);
        v18 = 4LL;
        v19 = &v33;
        do
        {
          v19 -= 8;
          std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v19);
          --v18;
        }
        while ( v18 );
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180343AB0, 3u, DrawList, 0xBEu, 0LL);
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v34);
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v32);
    goto LABEL_11;
  }
  v21 = *((_QWORD *)a2 + 5);
  if ( *(int *)(v21 + 624) >= 37632 && !*(_BYTE *)(v21 + 1433) )
  {
    v22 = CBrushRenderingGraph::RenderSubgraphs(v13, a2, a3, v24, a4);
    v11 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v23, &dword_180343AB0, 3u, v22, 0xC9u, 0LL);
  }
LABEL_11:
  if ( v24 )
    (**(void (__fastcall ***)(struct CDrawListBrush *, __int64))v24)(v24, 1LL);
  return (unsigned int)v11;
}
