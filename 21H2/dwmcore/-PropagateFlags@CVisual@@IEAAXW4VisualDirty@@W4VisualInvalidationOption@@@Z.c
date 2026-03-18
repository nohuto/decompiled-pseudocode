/*
 * XREFs of ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04
 * Callers:
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1800158F8 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18004561C (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1800460F4 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800471B0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800474A4 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180047600 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800486D0 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800488D8 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180048940 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x18004C450 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180062144 (-SetSpriteBitmap@CWindowNode@@AEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x180064954 (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SE.c)
 *     ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x1800675B4 (-ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGET.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x180084DC0 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085064 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180086524 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18008F470 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800D48AC (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x1800DB52C (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ @ 0x1800DCC08 (-DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1800DEA38 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x1800DEBCC (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800E0CA8 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1800E11F0 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x1800E25BC (-ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS.c)
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x1800E2DFC (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x1800E2EE4 (-ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_S.c)
 *     ?ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETALPHAMARGINS@@@Z @ 0x1800E2F40 (-ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETALPHAM.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800E301C (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x1800E38C8 (-ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECL.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800E6DC4 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800E941C (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETLAYOUTRTL@@@Z @ 0x1800EC758 (-ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETLAYOUTRTL.c)
 *     ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x1800ECCAC (-ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETMODESTODEFAU.c)
 *     ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x1800EE3D0 (-ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTR.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800F058C (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1800F450C (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 *     ?ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE@@@Z @ 0x1800F581C (-ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLU.c)
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x1800F6C1C (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 *     ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x1800F6C7C (-ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT@@@Z @ 0x1800F7448 (-ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SE.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180115080 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ @ 0x1801152E0 (-ProcessReadyFlipExSurfaces@CWindowNode@@AEAA_NXZ.c)
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x1801F6A58 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x1801F7950 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x1801F7B1C (-ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z.c)
 *     ?ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z @ 0x1801F7B50 (-ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x1801F7BB4 (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFO.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x1801F7D5C (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 *     ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x1801F7E7C (-ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGI.c)
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x1801F8238 (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z @ 0x1801F863C (-SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x1802239BC (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1802443C8 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1802446E8 (-SetFlipExSurface@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::PropagateFlags(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  BOOL v5; // r12d
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2 | 0x10;
  if ( (a2 & 1) == 0 )
    v3 = a2;
  v5 = !(a2 & 1);
  if ( (v2 & 2) != 0 )
    v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v2) = v2 & 1;
  if ( (_DWORD)v2 )
  {
    v11 = 0LL;
    v12 = (unsigned int)v2;
    do
    {
      v13 = CPtrArrayBase::operator[](a1 + 24, v11);
      if ( v13 != *(_QWORD *)(a1 + 88) )
        (*(void (__fastcall **)(__int64, BOOL, __int64))(*(_QWORD *)v13 + 72LL))(v13, v5, a1);
      ++v11;
      --v12;
    }
    while ( v12 );
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  *(_BYTE *)(a1 + 96) |= v3;
  v7 = result;
  if ( (v3 & 0xC) != 0 )
  {
    v3 = v3 & 0xFFFFFF73 | 0x80;
    if ( result )
      ++*(_DWORD *)(result + 28);
  }
  if ( (v3 & 2) != 0 )
    v3 = v3 & 0xFFFFFFBD | 0x40;
  v8 = *(_QWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a1 + 103) & 2) != 0 )
  {
    do
    {
      if ( !v8 )
        break;
      result = v3 & *(char *)(v8 + 96);
      if ( (_DWORD)result == v3 )
        break;
      *(_BYTE *)(v8 + 96) |= v3;
      v9 = *(_QWORD *)(v8 + 24);
      if ( (v9 & 2) != 0 )
        v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v9) = v9 & 1;
      if ( (_DWORD)v9 )
      {
        v14 = 0LL;
        v15 = (unsigned int)v9;
        do
        {
          v16 = CPtrArrayBase::operator[](v8 + 24, v14);
          if ( v16 != *(_QWORD *)(v8 + 88) )
            (*(void (__fastcall **)(__int64, BOOL, __int64))(*(_QWORD *)v16 + 72LL))(v16, v5, v8);
          ++v14;
          --v15;
        }
        while ( v15 );
      }
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 160LL))(v8);
      if ( v10 && v7 != v10 )
      {
        if ( (v3 & 0x80u) != 0 )
          ++*(_DWORD *)(v10 + 24);
        v7 = v10;
      }
      result = v8;
      v8 = *(_QWORD *)(v8 + 88);
    }
    while ( (*(_BYTE *)(result + 103) & 2) != 0 );
  }
  return result;
}
