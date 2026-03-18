/*
 * XREFs of ?IsBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x180055214
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z @ 0x180058AC0 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z.c)
 * Callees:
 *     ?CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ @ 0x180055274 (-CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CBrushRenderingGraph::IsBackdropInput(CBrushRenderingGraph *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  char v5; // bl
  __int64 v6; // rcx

  v2 = a2;
  CBrushRenderingGraph::CheckIfDisposed(this);
  v4 = 3 * v2;
  v5 = 0;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v4);
  if ( v6 )
    return (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, 8LL) != 0;
  return v5;
}
