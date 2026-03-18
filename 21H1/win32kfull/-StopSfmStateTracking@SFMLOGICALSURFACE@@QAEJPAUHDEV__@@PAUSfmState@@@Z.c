/*
 * XREFs of ?StopSfmStateTracking@SFMLOGICALSURFACE@@QAEJPAUHDEV__@@PAUSfmState@@@Z @ 0x21CFA
 * Callers:
 *     _GreSfmCloseCompositorRef@8 @ 0x21E0A (_GreSfmCloseCompositorRef@8.c)
 *     _SFMLOGICALSURFACEREF_vDestructor@4 @ 0x2443A (_SFMLOGICALSURFACEREF_vDestructor@4.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z @ 0xA3F2E (-vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z.c)
 *     _GrepSfmRemoveSurfaces@0 @ 0xD3F28 (_GrepSfmRemoveSurfaces@0.c)
 * Callees:
 *     ?SpNotifyLSurfaceTracking@@YGJPAUHDEV__@@PAUHLSURF__@@H@Z @ 0x1CD545 (-SpNotifyLSurfaceTracking@@YGJPAUHDEV__@@PAUHLSURF__@@H@Z.c)
 */

int __thiscall SFMLOGICALSURFACE::StopSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3)
{
  SFMLOGICALSURFACE **v4; // edx
  SFMLOGICALSURFACE **v5; // eax
  int v6; // eax
  HLSURF v8; // [esp+0h] [ebp-4h]
  int savedregs; // [esp+4h] [ebp+0h]

  *((_DWORD *)this + 39) &= ~8u;
  DEC_SHARE_REF_CNT(this);
  --*((_DWORD *)a3 + 8);
  v4 = (SFMLOGICALSURFACE **)*((_DWORD *)this + 5);
  if ( v4[1] != (SFMLOGICALSURFACE *)((char *)this + 20)
    || (v5 = (SFMLOGICALSURFACE **)*((_DWORD *)this + 6), *v5 != (SFMLOGICALSURFACE *)((char *)this + 20)) )
  {
    __fastfail(3u);
  }
  *v5 = (SFMLOGICALSURFACE *)v4;
  v4[1] = (SFMLOGICALSURFACE *)v5;
  v6 = *((_DWORD *)this + 39);
  if ( (v6 & 0x80u) != 0 )
  {
    if ( a2 || *((_DWORD *)this + 4) )
    {
      SpNotifyLSurfaceTracking(0, v8, savedregs);
      v6 = *((_DWORD *)this + 39);
    }
    *((_DWORD *)this + 39) = v6 & 0xFFFFFF7F;
  }
  return 0;
}
