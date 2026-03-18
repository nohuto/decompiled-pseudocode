/*
 * XREFs of ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800AA3B8
 * Callers:
 *     ?RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18000F118 (-RemoveProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z @ 0x18000F1A4 (-AddProjectedShadowReceiver@CVisual@@QEAAXPEAVCProjectedShadowReceiver@@@Z.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18001F9E8 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180023160 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x18003E21C (-ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_S.c)
 *     ?ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETALPHAMARGINS@@@Z @ 0x18003E304 (-ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETALPHAM.c)
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x180042384 (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SE.c)
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x18006DCC8 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x180070C20 (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x180070DC8 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180072744 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180073604 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z @ 0x1800A678C (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A69B0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x1800A6C54 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800A86A0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A9CA8 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800AA250 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1800B4254 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800BCBE4 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x1800C48CC (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x1800C5540 (-ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGET.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1800C58A8 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x1800C59F0 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x1800C7930 (-ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800C86A4 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x1800CC864 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x1800CD190 (-ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITECL.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1800CD90C (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETLAYEREDWINDOW@@@Z @ 0x1800CF498 (-ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETLAYER.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x1800D0F60 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTRANSFORMPA.c)
 *     ?ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETLAYOUTRTL@@@Z @ 0x1800D11EC (-ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETLAYOUTRTL.c)
 *     ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x1800D3C60 (-ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETMODESTODEFAU.c)
 *     ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x1800D6248 (-ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETEXCLUDESUBTR.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D8F80 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x1800D9020 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x1800DA7F0 (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x1800DCB60 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18019A140 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1801ACFDC (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x1801ADC4C (-ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z.c)
 *     ?ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z @ 0x1801ADC80 (-ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x1801ADCE4 (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCOLORTRANSFO.c)
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801ADDB4 (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x1801ADE9C (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 *     ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x1801ADFA0 (-ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETREDRAWREGI.c)
 *     ?SetIntegerProperty@CVisual@@UEAAJI_J@Z @ 0x1801AE3C0 (-SetIntegerProperty@CVisual@@UEAAJI_J@Z.c)
 *     ?ProcessEnableRendering@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CURSORVISUAL_ENABLERENDERING@@@Z @ 0x1801BE12C (-ProcessEnableRendering@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CURSORVISUAL_ENABL.c)
 *     ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x1801D1B70 (-ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1801F2DDC (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801F3100 (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BD340 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::PropagateFlags(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  BOOL v5; // r12d
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax

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
    v16 = 0LL;
    v17 = (unsigned int)v2;
    do
    {
      v18 = CPtrArrayBase::operator[](a1 + 24, v16);
      if ( v18 != *(_QWORD *)(a1 + 80) )
        (*(void (__fastcall **)(__int64, BOOL, __int64))(*(_QWORD *)v18 + 72LL))(v18, v5, a1);
      ++v16;
      --v17;
    }
    while ( v17 );
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1);
  *(_BYTE *)(a1 + 88) |= v3;
  v7 = result;
  if ( (v3 & 0xC) != 0 )
  {
    v3 = v3 & 0xFFFFFF73 | 0x80;
    if ( result )
      ++*(_DWORD *)(result + 28);
  }
  if ( (v3 & 2) != 0 )
    v3 = v3 & 0xFFFFFFBD | 0x40;
  v8 = *(_QWORD *)(a1 + 80);
  if ( (*(_BYTE *)(a1 + 95) & 2) != 0 )
  {
    do
    {
      if ( !v8 )
        break;
      result = v3 & *(char *)(v8 + 88);
      if ( (_DWORD)result == v3 )
        break;
      v9 = *(_QWORD *)v8;
      *(_BYTE *)(v8 + 88) |= v3;
      v10 = (*(__int64 (__fastcall **)(__int64))(v9 + 168))(v8);
      v11 = v10;
      if ( v10 )
      {
        if ( (v3 & 0x80u) != 0 && v10 != v7 )
          ++*(_DWORD *)(v10 + 24);
      }
      else
      {
        v11 = v7;
      }
      v12 = *(_QWORD *)(v8 + 24);
      if ( (v12 & 2) != 0 )
        v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v12) = v12 & 1;
      if ( (_DWORD)v12 )
      {
        v13 = 0LL;
        v14 = (unsigned int)v12;
        do
        {
          v15 = CPtrArrayBase::operator[](v8 + 24, v13);
          if ( v15 != *(_QWORD *)(v8 + 80) )
            (*(void (__fastcall **)(__int64, BOOL, __int64))(*(_QWORD *)v15 + 72LL))(v15, v5, v8);
          ++v13;
          --v14;
        }
        while ( v14 );
      }
      result = v8;
      v7 = v11;
      v8 = *(_QWORD *)(v8 + 80);
    }
    while ( (*(_BYTE *)(result + 95) & 2) != 0 );
  }
  return result;
}
