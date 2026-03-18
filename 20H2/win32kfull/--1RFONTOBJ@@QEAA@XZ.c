/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0005FBC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0006E3C (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     prfntKillList @ 0x1C001DA20 (prfntKillList.c)
 *     bUnloadEudcFont @ 0x1C001F7B8 (bUnloadEudcFont.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0020748 (prfntDeactivateEudcRFONTs.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C0021B2C (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0021F84 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0023EE8 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     GreGetTextMetricsW @ 0x1C0024D94 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00252E8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C00262AC (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00264BC (GreGetGlyphOutlineInternal.c)
 *     NtGdiGetWidthTable @ 0x1C005EBE0 (NtGdiGetWidthTable.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C005FD4C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00620D4 (GreGetOutlineTextMetricsInternalW.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C00647E4 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00650FC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0065230 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00659FC (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     GreGetTextCharsetInfo @ 0x1C009D574 (GreGetTextCharsetInfo.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00F1738 (GreGetCharABCWidthsW.c)
 *     GreGetCharWidthW @ 0x1C00F70D4 (GreGetCharWidthW.c)
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1C0100404 (FONTOBJ_GetCachedGlyphAttrs.c)
 *     GreFontIsLinked @ 0x1C0108F48 (GreFontIsLinked.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C010A630 (NtGdiQueryFontAssocInfo.c)
 *     GreGetGlyphIndicesW @ 0x1C010B4F8 (GreGetGlyphIndicesW.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C01116E8 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     GreGetCharWidthInfo @ 0x1C0114AF4 (GreGetCharWidthInfo.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C0118F28 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C0119014 (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0132770 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C0132BF8 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     FONTOBJ_pifi @ 0x1C0133070 (FONTOBJ_pifi.c)
 *     NtGdiGetETM @ 0x1C0134190 (NtGdiGetETM.c)
 *     GreGetKerningPairs @ 0x1C0134784 (GreGetKerningPairs.c)
 *     GreGetUFI @ 0x1C0144D40 (GreGetUFI.c)
 *     NtGdiGetLinkedUFIs @ 0x1C01451A0 (NtGdiGetLinkedUFIs.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C01452C4 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     GreGetFontUnicodeRanges @ 0x1C0150CB8 (GreGetFontUnicodeRanges.c)
 *     GreGetRealizationInfo @ 0x1C015D9E8 (GreGetRealizationInfo.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C015DCE4 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     FONTOBJ_AdvanceGlyphCacheBuffer @ 0x1C015EAD8 (FONTOBJ_AdvanceGlyphCacheBuffer.c)
 *     FONTOBJ_bEnsureGlyphCacheBuffer @ 0x1C015EB38 (FONTOBJ_bEnsureGlyphCacheBuffer.c)
 *     GreGetTextExtentExW @ 0x1C015EFE8 (GreGetTextExtentExW.c)
 *     vKillRFONTList @ 0x1C0272A78 (vKillRFONTList.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C0272B20 (-vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027AD8C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C028F3AC (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C0292924 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1C0292970 (FONTOBJ_cGetAllGlyphHandles.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C02929B0 (FONTOBJ_cGetGlyphs.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C0292A20 (FONTOBJ_pQueryGlyphAttrs.c)
 *     FONTOBJ_pjOpenTypeTablePointer @ 0x1C0292AA0 (FONTOBJ_pjOpenTypeTablePointer.c)
 *     FONTOBJ_pvTrueTypeFontFile @ 0x1C0292AE0 (FONTOBJ_pvTrueTypeFontFile.c)
 *     FONTOBJ_pwszFontFilePaths @ 0x1C0292B30 (FONTOBJ_pwszFontFilePaths.c)
 *     FONTOBJ_vGetInfo @ 0x1C0292B90 (FONTOBJ_vGetInfo.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0297584 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     vMakeInactiveHelper @ 0x1C0297D2C (vMakeInactiveHelper.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C0297F80 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C02980DC (vUnlinkEudcRFONTsWorker.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A69A4 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A6BC8 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C02A7180 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C02A7D80 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02A7DD0 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x1C02A7E28 (FONTOBJ_SetCachedGlyphAttrs.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A7E54 (vRemoveAllInactiveRFONTs.c)
 *     ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C02A8AF0 (-UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02A91D0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02AA480 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C02AABF0 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02B3640 (NtGdiFONTOBJ_pfdg.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02BC974 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C00240F8 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(v1 + 712) & 0x81) != 0 )
    {
      RFONTOBJ::dtorHelper(this);
      v1 = *(_QWORD *)this;
    }
    v3 = *(_QWORD *)(v1 + 616);
    if ( v3 )
    {
      Win32FreePool(v3);
      *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
      v1 = *(_QWORD *)this;
    }
    EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v1 + 504));
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 504LL));
  }
}
