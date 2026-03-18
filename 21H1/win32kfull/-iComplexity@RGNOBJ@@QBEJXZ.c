/*
 * XREFs of ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892
 * Callers:
 *     ?GdiUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@@Z @ 0x12266 (-GdiUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@@Z.c)
 *     _GreSubtractRgnRectList@16 @ 0x24CD0 (_GreSubtractRgnRectList@16.c)
 *     _GreRectVisible@8 @ 0x53700 (_GreRectVisible@8.c)
 *     ?iSelect@DC@@QAEHPAVREGION@@H@Z @ 0x5A6CE (-iSelect@DC@@QAEHPAVREGION@@H@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     _GreGetAppClipBox@8 @ 0x796EA (_GreGetAppClipBox@8.c)
 *     ?GreExtSelectClipRgnLocked@@YGHAAVXDCOBJ@@PAU_RECTL@@H@Z @ 0x79F82 (-GreExtSelectClipRgnLocked@@YGHAAVXDCOBJ@@PAU_RECTL@@H@Z.c)
 *     ?iSelectTightenRao@DC@@QAEHPAVREGION@@H@Z @ 0x7A3DE (-iSelectTightenRao@DC@@QAEHPAVREGION@@H@Z.c)
 *     ?vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA00EE (-vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     ?iSetMetaRgn@DC@@QAEHXZ @ 0xA9452 (-iSetMetaRgn@DC@@QAEHXZ.c)
 *     ?bSpUpdateDeviceSurface@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@AAVRGNOBJ@@PAVECLIPOBJ@@@Z @ 0xE8A7A (-bSpUpdateDeviceSurface@@YGHPAU_SURFOBJ@@PAPAU_CLIPOBJ@@AAVRGNOBJ@@PAVECLIPOBJ@@@Z.c)
 *     _GreExtSelectClipRgnInternal@16 @ 0xF7316 (_GreExtSelectClipRgnInternal@16.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QAE@PAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z @ 0x1CC939 (--0BOUNDCLIPRGNTOSURFACE@@QAE@PAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YGXPAVSPRITE@@VERECTL@@@Z @ 0x1DFD02 (-vSpAddAndCompactDirtyRect@@YGXPAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YGXPAVSPRITE@@PAVREGION@@@Z @ 0x1DFED7 (-vSpAddAndCompactDirtyRegion@@YGXPAVSPRITE@@PAVREGION@@@Z.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z @ 0x1E2DE5 (-vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YGXPAVEWNDOBJ@@AAVRGNOBJ@@@Z @ 0x1E6921 (-vUpdateClientRgnOnSpriteOverlap@@YGXPAVEWNDOBJ@@AAVRGNOBJ@@@Z.c)
 *     _EngFillPath@28 @ 0x1E7DFE (_EngFillPath@28.c)
 *     _EngStrokeAndFillPath@40 @ 0x1E8174 (_EngStrokeAndFillPath@40.c)
 *     ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A (-NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     _NtGdiOffsetClipRgn@12 @ 0x1FED41 (_NtGdiOffsetClipRgn@12.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     <none>
 */

int __thiscall RGNOBJ::iComplexity(RGNOBJ *this)
{
  int v1; // ecx
  int result; // eax

  v1 = *(_DWORD *)this;
  result = 1;
  if ( *(_DWORD *)(v1 + 56) != 1 )
    return (*(_DWORD *)(v1 + 52) > 0x38u) + 2;
  return result;
}
