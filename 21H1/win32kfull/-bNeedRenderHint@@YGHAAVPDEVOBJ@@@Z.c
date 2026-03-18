/*
 * XREFs of ?bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z @ 0x23160
 * Callers:
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YGJQAUHDEV__@@PAUHLSURF__@@PAU_SURFOBJ@@H@Z @ 0x23086 (-SpNotifyLSurfaceRedirSurfAssoc@@YGJQAUHDEV__@@PAUHLSURF__@@PAU_SURFOBJ@@H@Z.c)
 *     ?SpNotifyLSurface@@YGJPAUHDEV__@@PAUHLSURF__@@HKPAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x230F2 (-SpNotifyLSurface@@YGJPAUHDEV__@@PAUHLSURF__@@HKPAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     _GreDesktopSwitch@20 @ 0xB23DE (_GreDesktopSwitch@20.c)
 *     ?bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z @ 0xB3164 (-bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_RECTL@@PAVPALETTE@@PAK4PAPAV3@@Z @ 0xC62AC (-bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_REC.c)
 *     _GreDwmShutdown@4 @ 0xCF60A (_GreDwmShutdown@4.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 *     _GreDwmStartup@4 @ 0xE1BEA (_GreDwmStartup@4.c)
 *     ?SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z @ 0x1CCEEA (-SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z.c)
 *     ?SpNotifyLSurfaceTracking@@YGJPAUHDEV__@@PAUHLSURF__@@H@Z @ 0x1CD545 (-SpNotifyLSurfaceTracking@@YGJPAUHDEV__@@PAUHLSURF__@@H@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagPOINT@@PAUtagSIZE@@PAKPAPAV3@@Z @ 0x1CD629 (-bSpDwmUpdateDragRectShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagPOINT@@PAUta.c)
 * Callees:
 *     <none>
 */

int __thiscall bNeedRenderHint(void *this)
{
  int v1; // esi

  v1 = 0;
  if ( *(_DWORD *)(*(_DWORD *)this + 2272)
    && (*(_DWORD *)(*(_DWORD *)this + 1416) & 0x400) != 0
    && (!g_pDwmState || !UserIsRemoteAndNotDisconnectConnection()) )
  {
    return 1;
  }
  return v1;
}
