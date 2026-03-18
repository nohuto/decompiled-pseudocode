/*
 * XREFs of ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18004A66C
 * Callers:
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800081B0 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180008C50 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180045CD0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180047560 (-GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180048940 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180049EB0 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18004A5C0 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18004D020 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CClipBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B9310 (-GetBrushParameters@CClipBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801BCD20 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801D3C10 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E16F4 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801E8D80 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801F4270 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushDrawListGenerator::Reset(CBrushDrawListGenerator *this)
{
  __int64 v1; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  *((_DWORD *)this + 4) = 0;
  v1 = 0LL;
  *(_OWORD *)((char *)this + 20) = _xmm;
  for ( *((_BYTE *)this + 76) = 0; (unsigned int)v1 < *((_DWORD *)this + 18); v1 = (unsigned int)(v1 + 1) )
  {
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + v1 + 5);
    *((_QWORD *)this + v1 + 5) = 0LL;
    if ( v3 )
      (**v3)(v3, 1LL);
  }
  *((_DWORD *)this + 18) = 0;
}
