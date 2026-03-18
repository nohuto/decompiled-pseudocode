/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580
 * Callers:
 *     GreSetDeviceGammaRamp @ 0x1C0029BA8 (GreSetDeviceGammaRamp.c)
 *     GreSetTextAlign @ 0x1C002F63C (GreSetTextAlign.c)
 *     GreSetBkMode @ 0x1C00372BC (GreSetBkMode.c)
 *     GreSetBrushOrg @ 0x1C0037A28 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C0037B68 (GrePolyPatBlt.c)
 *     GreGetLayout @ 0x1C00417CC (GreGetLayout.c)
 *     ulGetFontData @ 0x1C005FCC8 (ulGetFontData.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00620D4 (GreGetOutlineTextMetricsInternalW.c)
 *     bUMPD @ 0x1C008BEA4 (bUMPD.c)
 *     GreSetStretchBltMode @ 0x1C0092280 (GreSetStretchBltMode.c)
 *     GreSetTextColor @ 0x1C0092300 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0092394 (GreSetBkColor.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0097BA0 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0098908 (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GreExtTextOutRect @ 0x1C0098944 (GreExtTextOutRect.c)
 *     GrePolyTextOutW @ 0x1C009994C (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C009A950 (GreExtTextOutWInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009AB10 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetDIBitsInternal @ 0x1C009B01C (GreGetDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     GreGetCharSet @ 0x1C009ED18 (GreGetCharSet.c)
 *     GreGetBoundsRect @ 0x1C009EF48 (GreGetBoundsRect.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00A1070 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00A10C0 (UntrapAppContainerRenderingWrap.c)
 *     NtGdiGetRandomRgn @ 0x1C00A11E0 (NtGdiGetRandomRgn.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A16C0 (GreSetDIBitsToDeviceInternal.c)
 *     GreDrawStream @ 0x1C00A2D50 (GreDrawStream.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B3D30 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00E7F70 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     GreGetAppClipBox @ 0x1C00F1118 (GreGetAppClipBox.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00F4C9C (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     NtGdiSetMetaRgn @ 0x1C00F73B0 (NtGdiSetMetaRgn.c)
 *     NtGdiGetPixel @ 0x1C0102880 (NtGdiGetPixel.c)
 *     GreMaskBlt @ 0x1C0102C4C (GreMaskBlt.c)
 *     NtGdiGetAndSetDCDword @ 0x1C0104C90 (NtGdiGetAndSetDCDword.c)
 *     GreGetGlyphIndicesW @ 0x1C010B4F8 (GreGetGlyphIndicesW.c)
 *     GreGetDeviceGammaRamp @ 0x1C0115164 (GreGetDeviceGammaRamp.c)
 *     GreGetTextAlign @ 0x1C011C378 (GreGetTextAlign.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C013A240 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0141008 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     NtGdiSetFontXform @ 0x1C0141280 (NtGdiSetFontXform.c)
 *     GreGetUFI @ 0x1C0144D40 (GreGetUFI.c)
 *     GreForceUFIMapping @ 0x1C0144EE4 (GreForceUFIMapping.c)
 *     NtGdiGetLinkedUFIs @ 0x1C01451A0 (NtGdiGetLinkedUFIs.c)
 *     NtGdiComputeXformCoefficients @ 0x1C01466E0 (NtGdiComputeXformCoefficients.c)
 *     NtGdiSetPixel @ 0x1C014B070 (NtGdiSetPixel.c)
 *     GreGetTextColor @ 0x1C014CF8C (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C014CFDC (GreGetBkColor.c)
 *     NtGdiMakeInfoDC @ 0x1C014F6D0 (NtGdiMakeInfoDC.c)
 *     NtGdiSetColorSpace @ 0x1C0150E90 (NtGdiSetColorSpace.c)
 *     GreGetRealizationInfo @ 0x1C015D9E8 (GreGetRealizationInfo.c)
 *     GreSelectFontInternal @ 0x1C015E8C8 (GreSelectFontInternal.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026D3AC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026D97C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026DAB4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     NtGdiGetMonitorID @ 0x1C0273900 (NtGdiGetMonitorID.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C027AC24 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C027B0E8 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C027C3D0 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiRemoveMergeFont @ 0x1C027C800 (NtGdiRemoveMergeFont.c)
 *     NtGdiSetLinkedUFIs @ 0x1C027C8B0 (NtGdiSetLinkedUFIs.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027F5C8 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C02899B0 (NtGdiAddRemoteFontToDC.c)
 *     GreGetHFONT @ 0x1C029ED64 (GreGetHFONT.c)
 *     GreMoveTo @ 0x1C029F55C (GreMoveTo.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02AD17C (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B489C (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02B4A60 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02B4BB4 (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02B4C6C (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02B4E64 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreGetMapMode @ 0x1C02B5D84 (GreGetMapMode.c)
 *     NtGdiUpdateTransform @ 0x1C02B6130 (NtGdiUpdateTransform.c)
 *     GreGetTextCharacterExtra @ 0x1C02BB148 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02BB194 (GreSetTextCharacterExtra.c)
 *     GreSetGraphicsMode @ 0x1C02BE944 (GreSetGraphicsMode.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
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
