/*
 * XREFs of ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC
 * Callers:
 *     ?IsActivePpi@CRotationMgr@@SG_NPAUtagPROCESSINFO@@@Z @ 0x1215E (-IsActivePpi@CRotationMgr@@SG_NPAUtagPROCESSINFO@@@Z.c)
 *     _GreAdjustSpriteDirtyAccum@24 @ 0x1FEC6 (_GreAdjustSpriteDirtyAccum@24.c)
 *     _GreNotifyDirtySprite@4 @ 0x20098 (_GreNotifyDirtySprite@4.c)
 *     _GreSetRedirectionSurfaceSignaling@24 @ 0x21A20 (_GreSetRedirectionSurfaceSignaling@24.c)
 *     _GreSfmCloseCompositorRef@8 @ 0x21E0A (_GreSfmCloseCompositorRef@8.c)
 *     _GreSfmOpenCompositorRef@8 @ 0x2212A (_GreSfmOpenCompositorRef@8.c)
 *     _GreUpdateSpriteClipRgn@16 @ 0x239F2 (_GreUpdateSpriteClipRgn@16.c)
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     _GreAddLogicalSurfaceToDirtyQueue@16 @ 0xC6A7E (_GreAddLogicalSurfaceToDirtyQueue@16.c)
 *     _UmfdUnloadFontFileInternal@4 @ 0xCDEEE (_UmfdUnloadFontFileInternal@4.c)
 *     _FreeFileView@8 @ 0xCE1EE (_FreeFileView@8.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SGXXZ @ 0xCFB96 (-UninitializeProcess@UmfdHostLifeTimeManager@@SGXXZ.c)
 *     ?ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CGXXZ @ 0xCFEFC (-ResetUmfdHostReadiness@UmfdHostLifeTimeManager@@CGXXZ.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SGXXZ @ 0xCFF72 (-UninitializeThread@UmfdHostLifeTimeManager@@SGXXZ.c)
 *     ?DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0xD014E (-DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z @ 0xD03E2 (-DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@@Z @ 0xD05AE (-bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SGX_N@Z @ 0xD3DCC (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SGX_N@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDE13E (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     ?UmfdInsertFontFileViewForLookup@@YGHPAPAU_FONTFILEVIEW@@I@Z @ 0xDE312 (-UmfdInsertFontFileViewForLookup@@YGHPAPAU_FONTFILEVIEW@@I@Z.c)
 *     _UmfdLoadFontFile@28 @ 0xDE9A6 (_UmfdLoadFontFile@28.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SGHPAX@Z @ 0xEA2EA (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SGHPAX@Z.c)
 *     ??0ExclusiveWinlognRequestLock@@QAE@XZ @ 0xF72C3 (--0ExclusiveWinlognRequestLock@@QAE@XZ.c)
 *     ?GetActivePid@CRotationMgr@@SGKXZ @ 0x1407B7 (-GetActivePid@CRotationMgr@@SGKXZ.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SG?AW4ORIENTATION_PREFERENCE@@PAK@Z @ 0x140802 (-GetActivePpiPreference@CRotationMgr@@SG-AW4ORIENTATION_PREFERENCE@@PAK@Z.c)
 *     _GreHLsurfSetPresentFlags@12 @ 0x1CE44E (_GreHLsurfSetPresentFlags@12.c)
 *     _GreHLsurfSetUpdateId@16 @ 0x1CE54B (_GreHLsurfSetUpdateId@16.c)
 *     ?psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z @ 0x1DFA3C (-psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z @ 0x1E22F2 (-vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z.c)
 *     _GreEnsureDpiDepDefaultGuiFontForPlateau@4 @ 0x1F3762 (_GreEnsureDpiDepDefaultGuiFontForPlateau@4.c)
 *     _GreMakeFontDir@12 @ 0x221195 (_GreMakeFontDir@12.c)
 * Callees:
 *     <none>
 */

PUSHLOCKEX *__thiscall PUSHLOCKEX::PUSHLOCKEX(PUSHLOCKEX *this, struct _EX_PUSH_LOCK *a2)
{
  *(_DWORD *)this = a2;
  if ( a2 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_DWORD *)this, 0);
  }
  return this;
}
