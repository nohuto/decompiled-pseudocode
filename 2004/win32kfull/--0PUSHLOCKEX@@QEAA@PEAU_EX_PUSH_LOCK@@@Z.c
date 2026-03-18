/*
 * XREFs of ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001ED74
 * Callers:
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C0008DA8 (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 *     FreeFileView @ 0x1C0013678 (FreeFileView.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0014E9C (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C001541C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreUpdateSpriteClipRgn @ 0x1C001D924 (GreUpdateSpriteClipRgn.c)
 *     ?GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z @ 0x1C001E8F8 (-GrepSfmGetDirtyRgn@@YAJPEAVSFMLOGICALSURFACE@@_KPEAPEAUHRGN__@@222PEAU_POINTL@@PEAH4@Z.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C001EBD4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GreSfmCloseCompositorRef @ 0x1C002BA6C (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1C002BECC (GreSfmOpenCompositorRef.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C002D634 (-hspLookupWindow@DWMALTSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C002D8E0 (GreSetRedirectionSurfaceSignaling.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C004FC08 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     GreNotifyDirtySprite @ 0x1C00519D4 (GreNotifyDirtySprite.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C0051E50 (GreAdjustSpriteDirtyAccum.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0052C4C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0052FE4 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0053254 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0053B00 (GreTransferSpriteStateToDwmState.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00D8FE8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00E2380 (UmfdUnloadFontFileInternal.c)
 *     UmfdLoadFontFile @ 0x1C00E26D0 (UmfdLoadFontFile.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C010E240 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C010E548 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C010E6E0 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C010E8C8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0156044 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C01569C4 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ??0ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C015AD70 (--0ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01D17C0 (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D2664 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@HPEAU_DXGK.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026FE1C (GreAddBitmapD3DDirtyRgn.c)
 *     GreHLsurfSetPresentFlags @ 0x1C02707F0 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0270938 (GreHLsurfSetUpdateId.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0284864 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0284BF0 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     GreEnsureDpiDepDefaultGuiFontForPlateau @ 0x1C0294050 (GreEnsureDpiDepDefaultGuiFontForPlateau.c)
 *     GreMakeFontDir @ 0x1C02BAFCC (GreMakeFontDir.c)
 * Callees:
 *     <none>
 */

PUSHLOCKEX *__fastcall PUSHLOCKEX::PUSHLOCKEX(PUSHLOCKEX *this, struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  }
  return this;
}
