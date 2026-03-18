/*
 * XREFs of EngUnmapFontFileFD @ 0x1C0114BE0
 * Callers:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C001F0D8 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     bAddAllFlEntry @ 0x1C0021078 (bAddAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00223CC (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C005FD4C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C005FFCC (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C006068C (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0060730 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0062610 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00657A0 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00669FC (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00E3318 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C015E2D8 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     GreEudcLoadLinkW @ 0x1C0297150 (GreEudcLoadLinkW.c)
 *     GreMakeFontDir @ 0x1C02B9A6C (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C02BA760 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C008EBCC (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

void __stdcall EngUnmapFontFileFD(ULONG_PTR iFile)
{
  int v2; // eax
  int v3; // eax
  bool v4; // zf
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _OWORD v9[5]; // [rsp+20h] [rbp-58h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( iFile )
  {
    GreAcquireFastMutex(ghfmMemory);
    v2 = *(_DWORD *)(iFile + 100);
    if ( v2 )
    {
      v3 = v2 - 1;
      *(_DWORD *)(iFile + 100) = v3;
      if ( !v3 )
      {
        if ( *(_QWORD *)(iFile + 80) )
        {
          v4 = *(_QWORD *)(iFile + 16) == 0LL;
          v5 = *(_OWORD *)(iFile + 16);
          v9[0] = *(_OWORD *)iFile;
          v6 = *(_OWORD *)(iFile + 32);
          v9[1] = v5;
          v7 = *(_OWORD *)(iFile + 48);
          v9[2] = v6;
          v8 = *(_OWORD *)(iFile + 64);
          v9[3] = v7;
          v9[4] = v8;
          if ( !v4 )
          {
            *(_QWORD *)(iFile + 16) = 0LL;
            if ( !*(_QWORD *)(iFile + 8) && (*(_DWORD *)(iFile + 40) & 0x18) != 0 )
            {
              *(_QWORD *)(iFile + 48) = 0LL;
              *(_QWORD *)(iFile + 32) = 0LL;
            }
          }
        }
      }
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( *(_QWORD *)&v9[1] )
      vUnmapFileFD((struct _FILEVIEW *)v9, (BYTE8(v9[2]) & 8) != 0 || (BYTE8(v9[2]) & 0x10) != 0);
  }
}
