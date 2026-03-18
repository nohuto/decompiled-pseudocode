/*
 * XREFs of ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18004D59C
 * Callers:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18004D550 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18006B530 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180098994 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7D48 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1DF8 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopLayerInternal(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // r8
  __int64 v3; // rbx
  int v4; // edx
  int v5; // eax
  unsigned int v6; // ecx

  v1 = 0;
  v2 = (unsigned int)(*(_DWORD *)(a1 + 496) - 1);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 472) + 8 * v2);
  *(_DWORD *)(a1 + 496) = v2;
  v4 = *(_DWORD *)(a1 + 560);
  if ( v4 && *(_QWORD *)(*(_QWORD *)(a1 + 536) + 8LL * (unsigned int)(v4 - 1)) == v3 )
  {
    *(_DWORD *)(a1 + 560) = v4 - 1;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a1);
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xFB9u, 0LL);
  }
  if ( v3 )
    (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
  return v1;
}
