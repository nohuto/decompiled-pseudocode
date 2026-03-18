/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510
 * Callers:
 *     GreMaskBlt @ 0x1C001456C (GreMaskBlt.c)
 *     bUMPD @ 0x1C00153D0 (bUMPD.c)
 *     GreExtTextOutRect @ 0x1C0017C44 (GreExtTextOutRect.c)
 *     GrePolyTextOutW @ 0x1C001836C (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C00188EC (GreExtTextOutWInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0018AAC (GreCreateCompatibleBitmapInternal.c)
 *     GreGetAppClipBox @ 0x1C0019498 (GreGetAppClipBox.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001C14C (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C001C188 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     GreSetDeviceGammaRamp @ 0x1C00525A8 (GreSetDeviceGammaRamp.c)
 *     GreGetDeviceGammaRamp @ 0x1C00534B8 (GreGetDeviceGammaRamp.c)
 *     GreGetTextAlign @ 0x1C005D2C8 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C005D450 (GreSetTextAlign.c)
 *     GreSetBrushOrg @ 0x1C0061F44 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C0062084 (GrePolyPatBlt.c)
 *     GreSetBkMode @ 0x1C00626AC (GreSetBkMode.c)
 *     GreGetLayout @ 0x1C0062728 (GreGetLayout.c)
 *     GreSetStretchBltMode @ 0x1C0063E90 (GreSetStretchBltMode.c)
 *     GreSetTextColor @ 0x1C0063F10 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0063FA4 (GreSetBkColor.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0075990 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00759E0 (UntrapAppContainerRenderingWrap.c)
 *     GreGetDIBitsInternal @ 0x1C0075B1C (GreGetDIBitsInternal.c)
 *     NtGdiGetRandomRgn @ 0x1C0076170 (NtGdiGetRandomRgn.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0076650 (GreSetDIBitsToDeviceInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0077CC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00783D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     GreDrawStream @ 0x1C00850A0 (GreDrawStream.c)
 *     GreGetCharSet @ 0x1C00A1BE0 (GreGetCharSet.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00DAC84 (GreGetOutlineTextMetricsInternalW.c)
 *     ulGetFontData @ 0x1C00DF6A8 (ulGetFontData.c)
 *     GreGetGlyphIndicesW @ 0x1C00E2A28 (GreGetGlyphIndicesW.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00EB920 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     GreGetBoundsRect @ 0x1C00F61E8 (GreGetBoundsRect.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00FACFC (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     NtGdiSetMetaRgn @ 0x1C00FC210 (NtGdiSetMetaRgn.c)
 *     NtGdiGetAndSetDCDword @ 0x1C0103FD0 (NtGdiGetAndSetDCDword.c)
 *     NtGdiGetPixel @ 0x1C010CFB0 (NtGdiGetPixel.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0138270 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C013EFF8 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     NtGdiSetFontXform @ 0x1C013F270 (NtGdiSetFontXform.c)
 *     GreGetUFI @ 0x1C0142710 (GreGetUFI.c)
 *     GreForceUFIMapping @ 0x1C01428B4 (GreForceUFIMapping.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0142B70 (NtGdiGetLinkedUFIs.c)
 *     NtGdiComputeXformCoefficients @ 0x1C01440B0 (NtGdiComputeXformCoefficients.c)
 *     NtGdiSetPixel @ 0x1C0148A80 (NtGdiSetPixel.c)
 *     GreGetTextColor @ 0x1C014A75C (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C014A7AC (GreGetBkColor.c)
 *     NtGdiMakeInfoDC @ 0x1C014CEC0 (NtGdiMakeInfoDC.c)
 *     NtGdiSetColorSpace @ 0x1C014E680 (NtGdiSetColorSpace.c)
 *     GreGetRealizationInfo @ 0x1C015A87C (GreGetRealizationInfo.c)
 *     GreSelectFontInternal @ 0x1C015B3DC (GreSelectFontInternal.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026E9CC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026EF9C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026F0D4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     NtGdiGetMonitorID @ 0x1C0274ED0 (NtGdiGetMonitorID.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C027C194 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C027C658 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C027D940 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiRemoveMergeFont @ 0x1C027DD70 (NtGdiRemoveMergeFont.c)
 *     NtGdiSetLinkedUFIs @ 0x1C027DE20 (NtGdiSetLinkedUFIs.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C0280B38 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C028AF20 (NtGdiAddRemoteFontToDC.c)
 *     GreGetHFONT @ 0x1C02A01B4 (GreGetHFONT.c)
 *     GreMoveTo @ 0x1C02A09AC (GreMoveTo.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B5E1C (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02B5FE0 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02B6134 (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B61EC (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B63E4 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreGetMapMode @ 0x1C02B7304 (GreGetMapMode.c)
 *     NtGdiUpdateTransform @ 0x1C02B76B0 (NtGdiUpdateTransform.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02B7844 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetTextCharacterExtra @ 0x1C02BC6A8 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02BC6F4 (GreSetTextCharacterExtra.c)
 *     GreSetGraphicsMode @ 0x1C02BFEA4 (GreSetGraphicsMode.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026FA74 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  HDC v2; // rax
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rcx
  struct _DC_ATTR *UserAttr; // rax
  int v8; // edi

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HmgLockEx(v2, a2, *((unsigned int *)this + 3));
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 48) + 40LL) & 0x8000) == 0
        || (v8 = *(_DWORD *)(v4 + 2096), v8 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
        goto LABEL_13;
      }
    }
    v5 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    {
      if ( *((_DWORD *)this + 3)
        || (UserAttr = XDCOBJ::GetUserAttr(this)) == 0LL
        || DC::SaveAttributes(*(DC **)this, UserAttr) )
      {
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
        *((_DWORD *)this + 2) = 1;
      }
      else
      {
        v5 = 0;
      }
    }
    v6 = *(_QWORD *)this;
    if ( !v5 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
LABEL_13:
      *(_QWORD *)this = 0LL;
      return;
    }
    if ( (*(_DWORD *)(v6 + 520) & 4) != 0 )
      DC::vMarkTransformDirty((DC *)v6);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
