/*
 * XREFs of ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x1800CEDE4
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18004A72C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasSubtreeSurface(CVisual *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 232LL))(this) )
    return *(_QWORD *)((*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 240LL))(this) + 8) != 0LL;
  return v2;
}
