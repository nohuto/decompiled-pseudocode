/*
 * XREFs of ?CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z @ 0x180048E90
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18004A72C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingGraph::CleanupEffectStage(CBrushRenderingGraph *this, struct EffectStage *a2)
{
  unsigned int i; // esi
  unsigned __int64 v4; // rdi
  void (__fastcall ***v5)(_QWORD, __int64); // rcx

  for ( i = 0; i < *((_DWORD *)a2 + 1); ++i )
  {
    v4 = (unsigned __int64)i << 7;
    if ( !*((_BYTE *)a2 + v4 + 76) )
    {
      v5 = *(void (__fastcall ****)(_QWORD, __int64))((char *)a2 + v4 + 88);
      if ( v5 )
        (**v5)(v5, 1LL);
      *(_QWORD *)((char *)a2 + v4 + 88) = 0LL;
    }
  }
  *((_DWORD *)a2 + 1) = 0;
}
