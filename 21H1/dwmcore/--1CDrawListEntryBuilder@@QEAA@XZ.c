/*
 * XREFs of ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18003AABC
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000FC10 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180015A60 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180035E30 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x180036970 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18003A6C0 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x1800938D8 (--1CDrawingContext@@EEAA@XZ.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800A67B0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801A1E48 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801BFFF0 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C81B0 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E4074 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020DBA0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18026259C (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??1MeshGraph@Mesh@@QEAA@XZ @ 0x18003ACE0 (--1MeshGraph@Mesh@@QEAA@XZ.c)
 *     ?Clear@Mesh@@AEAAXXZ @ 0x18003AE98 (-Clear@Mesh@@AEAAXXZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18003AEE0 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801A11C8 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801A1334 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 */

void __fastcall CDrawListEntryBuilder::~CDrawListEntryBuilder(Mesh::MeshGraph **this)
{
  CDrawListEntry *v2; // rcx
  CDrawListEntryBuilder **v3; // rsi
  CDrawListEntryBuilder *v4; // rdi
  CDrawListEntryBuilder **v5; // rsi
  CDrawListEntryBuilder *v6; // rdi
  CDrawListEntryBuilder **v7; // rsi
  CDrawListEntryBuilder *v8; // rdi
  Mesh::MeshGraph *v9; // rcx
  Mesh::MeshGraph *v10; // rsi
  Mesh::MeshGraph *v11; // rsi
  Mesh::MeshGraph *v12; // rcx
  CDrawListEntryBuilder *v13; // rdi
  __int64 v14; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v16; // rax
  HANDLE v17; // rax
  HANDLE v18; // rax

  CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)this);
  v2 = this[286];
  if ( v2 )
    CDrawListEntry::Release(v2);
  v3 = this + 273;
  v4 = this[273];
  if ( (this[274] - v4) >> 1 )
  {
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
      this + 273,
      0LL);
    v4 = *v3;
  }
  *v3 = 0LL;
  if ( v4 == (CDrawListEntryBuilder *)(this + 276) )
    v4 = 0LL;
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
  }
  v5 = this + 148;
  v6 = this[148];
  if ( (this[149] - v6) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      this + 148,
      0LL);
    v6 = *v5;
  }
  *v5 = 0LL;
  if ( v6 == (CDrawListEntryBuilder *)(this + 152) )
    v6 = 0LL;
  if ( v6 )
  {
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v6);
  }
  v7 = this + 24;
  v8 = this[24];
  if ( (this[25] - v8) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      this + 24,
      0LL);
    v8 = *v7;
  }
  *v7 = 0LL;
  if ( v8 == (CDrawListEntryBuilder *)(this + 28) )
    v8 = 0LL;
  if ( v8 )
  {
    v17 = GetProcessHeap();
    HeapFree(v17, 0, v8);
  }
  v9 = this[23];
  if ( v9 )
    (*(void (__fastcall **)(Mesh::MeshGraph *))(*(_QWORD *)v9 + 16LL))(v9);
  Mesh::Clear((Mesh *)(this + 13));
  v10 = this[17];
  if ( v10 )
  {
    Mesh::MeshGraph::~MeshGraph(this[17]);
    operator delete(v10);
  }
  v11 = this[15];
  if ( v11 )
  {
    Mesh::MeshGraph::~MeshGraph(this[15]);
    operator delete(v11);
  }
  v12 = this[13];
  if ( v12 )
    operator delete(v12);
  v13 = this[5];
  v14 = (this[6] - v13) >> 3;
  if ( v14 )
    this[6] = (Mesh::MeshGraph *)((char *)this[6] - 8 * v14);
  this[5] = 0LL;
  if ( v13 == (CDrawListEntryBuilder *)(this + 8) )
    v13 = 0LL;
  if ( v13 )
  {
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v13);
  }
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(this + 4);
}
