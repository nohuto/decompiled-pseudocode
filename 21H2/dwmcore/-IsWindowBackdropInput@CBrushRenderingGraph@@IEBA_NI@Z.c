/*
 * XREFs of ?IsWindowBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x180055460
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z @ 0x180058AC0 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@IEBA_NIPEA_N@Z.c)
 * Callees:
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x1800554AC (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CBrushRenderingGraph::IsWindowBackdropInput(CBrushRenderingGraph *this, unsigned int a2)
{
  struct CBrush *NamedInput; // rax
  char v3; // bl

  NamedInput = CBrushRenderingGraph::GetNamedInput(this, a2);
  v3 = 0;
  if ( NamedInput )
    return (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)NamedInput + 56LL))(
             NamedInput,
             203LL) != 0;
  return v3;
}
