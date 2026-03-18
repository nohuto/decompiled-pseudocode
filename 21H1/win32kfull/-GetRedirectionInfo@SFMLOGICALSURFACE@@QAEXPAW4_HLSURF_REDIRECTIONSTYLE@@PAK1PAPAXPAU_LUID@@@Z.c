/*
 * XREFs of ?GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z @ 0x20372
 * Callers:
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YGXPAUHDEV__@@PAVSFMLOGICALSURFACE@@PAVSURFACE@@1@Z @ 0xAA854 (-vSpDwmMigrateSpriteLSurfReference@@YGXPAUHDEV__@@PAVSFMLOGICALSURFACE@@PAVSURFACE@@1@Z.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 *     ?CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z @ 0x1CCD3C (-CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z.c)
 *     _GreDwmGetRedirectionStyle@12 @ 0x1CE113 (_GreDwmGetRedirectionStyle@12.c)
 *     _GreProtectSpriteContent@16 @ 0x1CE69D (_GreProtectSpriteContent@16.c)
 * Callees:
 *     <none>
 */

void __thiscall SFMLOGICALSURFACE::GetRedirectionInfo(
        SFMLOGICALSURFACE *this,
        enum _HLSURF_REDIRECTIONSTYLE *a2,
        unsigned int *a3,
        unsigned int *a4,
        void **a5,
        struct _LUID *a6)
{
  int v6; // edx
  struct _LUID *v7; // eax

  v6 = *((_DWORD *)this + 28);
  if ( v6 )
  {
    *a3 = *(_DWORD *)(v6 + 16);
    *a4 = *(_DWORD *)(v6 + 20);
    if ( (*(_BYTE *)(v6 + 60) & 1) != 0 )
    {
      *(_DWORD *)a2 = 2;
      if ( a5 )
        *a5 = *(void **)(v6 + 388);
      if ( a6 )
        *a6 = *(struct _LUID *)(v6 + 392);
      return;
    }
    if ( (*(_DWORD *)(v6 + 56) & 0x800) != 0 )
    {
      *(_DWORD *)a2 = 1;
      if ( a5 )
        *a5 = *(void **)(v6 + 4);
      v7 = a6;
      if ( a6 )
      {
LABEL_15:
        v7->HighPart = 0;
        v7->LowPart = 0;
      }
    }
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *a3 = 0;
    *a4 = 0;
    if ( a5 )
      *a5 = 0;
    v7 = a6;
    if ( a6 )
      goto LABEL_15;
  }
}
