/*
 * XREFs of ?StartSfmStateTracking@SFMLOGICALSURFACE@@QAEXPAUHDEV__@@PAUSfmState@@H@Z @ 0x20314
 * Callers:
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YGXPAUHDEV__@@PAVSFMLOGICALSURFACE@@PAVSURFACE@@1@Z @ 0xAA854 (-vSpDwmMigrateSpriteLSurfReference@@YGXPAUHDEV__@@PAVSFMLOGICALSURFACE@@PAVSURFACE@@1@Z.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 * Callees:
 *     ?SpNotifyLSurfaceTracking@@YGJPAUHDEV__@@PAUHLSURF__@@H@Z @ 0x1CD545 (-SpNotifyLSurfaceTracking@@YGJPAUHDEV__@@PAUHLSURF__@@H@Z.c)
 */

void __thiscall SFMLOGICALSURFACE::StartSfmStateTracking(SFMLOGICALSURFACE *this, HDEV a2, struct SfmState *a3, int a4)
{
  struct SfmState *v5; // ecx
  struct SfmState **v6; // edi
  int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  HLSURF v10; // [esp+0h] [ebp-8h]
  int v11; // [esp+4h] [ebp-4h]

  INC_SHARE_REF_CNT(this);
  v5 = (SFMLOGICALSURFACE *)((char *)this + 20);
  v6 = (struct SfmState **)*((_DWORD *)a3 + 7);
  if ( *v6 != (struct SfmState *)((char *)a3 + 24) )
    __fastfail(3u);
  *(_DWORD *)v5 = (char *)a3 + 24;
  *((_DWORD *)this + 6) = v6;
  *v6 = v5;
  v7 = 0;
  *((_DWORD *)a3 + 7) = v5;
  ++*((_DWORD *)a3 + 8);
  v8 = *((_DWORD *)this + 39) | 0x18;
  *((_DWORD *)this + 39) = v8;
  if ( *((_DWORD *)this + 4) )
  {
    if ( SpNotifyLSurfaceTracking((HDEV)1, v10, v11) >= 0 )
      v7 = 128;
    v9 = v7 | *((_DWORD *)this + 39) & 0xFFFFFF7F;
  }
  else
  {
    v9 = v8 & 0xFFFFFF7F;
  }
  *((_DWORD *)this + 39) = v9;
}
