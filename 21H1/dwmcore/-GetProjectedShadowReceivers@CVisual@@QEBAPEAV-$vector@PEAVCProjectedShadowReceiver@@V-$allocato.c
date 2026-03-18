/*
 * XREFs of ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18000A64C
 * Callers:
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180006E88 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x180006F50 (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x180008398 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E7C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180066A10 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18007DE6C (--1CVisual@@MEAA@XZ.c)
 *     ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x1800A9270 (-HasNonEmptyContent@CVisual@@UEAA_NXZ.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800AA360 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x1800B79F0 (-HasNonEmptyContent@CWindowNode@@UEAA_NXZ.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x1800C2E78 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetProjectedShadowReceivers(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  _BYTE *v3; // r9
  __int64 v4; // rcx
  unsigned int i; // eax

  v1 = *(_DWORD **)(a1 + 224);
  if ( (*v1 & 0x20000) == 0 )
    return 0LL;
  v2 = (unsigned int)v1[1];
  v3 = v1 + 2;
  v4 = 0LL;
  for ( i = 0; i < (unsigned int)v2; ++v3 )
  {
    if ( *v3 == 15 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v2 )
    v4 = (__int64)v1 + 8LL * i - (((_BYTE)v2 + 15) & 7) + v2 + 15;
  return *(_QWORD *)v4;
}
