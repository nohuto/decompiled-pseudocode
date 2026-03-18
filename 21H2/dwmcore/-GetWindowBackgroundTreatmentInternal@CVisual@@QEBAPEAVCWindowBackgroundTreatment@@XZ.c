/*
 * XREFs of ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800D4DD0
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800099AC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x18000A124 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008CB20 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Initialize@CBackdropVisualImage@@EEAAJXZ @ 0x1800D4490 (-Initialize@CBackdropVisualImage@@EEAAJXZ.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800D48AC (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 *     ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x1800D49B0 (-UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800D49D8 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualT.c)
 * Callees:
 *     <none>
 */

struct CWindowBackgroundTreatment *__fastcall CVisual::GetWindowBackgroundTreatmentInternal(CVisual *this)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  _BYTE *v3; // r9
  __int64 v4; // rcx
  unsigned int v5; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v1 & 0x200000) != 0 )
  {
    v2 = (unsigned int)v1[1];
    v3 = v1 + 2;
    v4 = 0LL;
    v5 = 0;
    if ( (_DWORD)v2 )
    {
      while ( *v3 != 11 )
      {
        ++v5;
        ++v3;
        if ( v5 >= (unsigned int)v2 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( v5 >= (unsigned int)v2 )
        return *(struct CWindowBackgroundTreatment **)v4;
    }
    v4 = (__int64)v1 + 8LL * v5 - (((_BYTE)v2 + 15) & 7) + v2 + 15;
    return *(struct CWindowBackgroundTreatment **)v4;
  }
  return 0LL;
}
