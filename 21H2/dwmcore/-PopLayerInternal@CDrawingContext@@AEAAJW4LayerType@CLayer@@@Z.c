/*
 * XREFs of ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800D5494
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18005C920 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18008DF84 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C1768 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802154FC (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopLayerInternal(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // r8
  __int64 v4; // rbx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx

  v1 = 0;
  v2 = (unsigned int)(*(_DWORD *)(a1 + 488) - 1);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 8 * v2);
  *(_DWORD *)(a1 + 488) = v2;
  v5 = *(_DWORD *)(a1 + 888);
  if ( v5
    && (v6 = *(_DWORD *)(88LL * (unsigned int)(v5 - 1) + *(_QWORD *)(a1 + 864) + 12),
        v7 = *(_DWORD *)(a1 + 3016),
        v7 != v6) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 2992) + 8LL * (unsigned int)(v7 - 1));
  }
  else
  {
    v8 = 0LL;
  }
  if ( v4 == v8 )
  {
    --*(_DWORD *)(a1 + 3016);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a1);
    v1 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x103Bu);
  }
  if ( v4 )
    (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
  return v1;
}
