/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YGXPAUHDEV__@@PAVSFMLOGICALSURFACE@@PAVSURFACE@@1@Z @ 0xAA854
 * Callers:
 *     _vSpDwmMigrateSpriteLSurfReferenceWrap@16 @ 0xAA83A (_vSpDwmMigrateSpriteLSurfReferenceWrap@16.c)
 * Callees:
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QAEXPAUHDEV__@@PAUSfmState@@H@Z @ 0x20314 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QAEXPAUHDEV__@@PAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z @ 0x20372 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z.c)
 *     ?DwmCombineDwmSpriteLogSurfFlags@@YG?AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@@@Z @ 0x2041A (-DwmCombineDwmSpriteLogSurfFlags@@YG-AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@.c)
 *     _DwmAsyncUpdateSprite@44 @ 0x2044E (_DwmAsyncUpdateSprite@44.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z @ 0x22FA6 (-SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QAEXPAUHDEV__@@PAVSFMLOGICALSURFACE@@@Z @ 0x246B2 (-SetLogicalSurface@DWMSPRITE@@QAEXPAUHDEV__@@PAVSFMLOGICALSURFACE@@@Z.c)
 */

void __userpurge vSpDwmMigrateSpriteLSurfReference(
        int *a1@<edx>,
        HDEV a2@<ecx>,
        HDEV a3,
        struct _SURFOBJ **a4,
        struct SURFACE *a5,
        struct SFMLOGICALSURFACE *a6)
{
  SFMLOGICALSURFACE *v6; // edi
  DWMSPRITE *v7; // esi
  int v8; // eax
  DWMSPRITE *v9; // eax
  HDEV v10; // ecx
  HDEV v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // eax
  void *v15; // eax
  int v16; // [esp-24h] [ebp-4Ch]
  int v17; // [esp-20h] [ebp-48h]
  int v18; // [esp-14h] [ebp-3Ch]
  unsigned int v19; // [esp-10h] [ebp-38h]
  unsigned int v20; // [esp-Ch] [ebp-34h]
  BOOL v21; // [esp-8h] [ebp-30h]
  int v22; // [esp-4h] [ebp-2Ch]
  unsigned int v24; // [esp+14h] [ebp-14h] BYREF
  unsigned int v25; // [esp+18h] [ebp-10h] BYREF
  int v26; // [esp+1Ch] [ebp-Ch] BYREF
  struct _SURFOBJ *v27; // [esp+20h] [ebp-8h] BYREF
  int v28; // [esp+24h] [ebp-4h]

  v6 = (SFMLOGICALSURFACE *)a1;
  v27 = (struct _SURFOBJ *)(a3 + 4);
  v25 = 0;
  v7 = 0;
  v24 = 0;
  v8 = a1[49];
  v26 = 0;
  v28 = v8;
  if ( v8 )
  {
    LOBYTE(a1) = 15;
    v9 = (DWMSPRITE *)HmgLock(v8, a1);
    v7 = v9;
    if ( !v9 )
      return;
    DWMSPRITE::SetLogicalSurface(v9, v10, 0);
    DWMSPRITE::SetLogicalSurface(v7, v11, (struct SFMLOGICALSURFACE *)a4);
    SFMLOGICALSURFACE::SetShape(v6, a2, 0);
    SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)a4, a2, v27);
    if ( a4[20] )
    {
      v27 = a4[20];
      RGNOBJ::vSet((RGNOBJ *)&v27);
      v13 = (unsigned int)a4[41] & 0xFFFFFFFD;
    }
    else
    {
      v13 = (unsigned int)a4[41];
    }
    a4[41] = (struct _SURFOBJ *)(v13 | 8);
    SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)a4, a2, gpSfmState, v12);
    SFMLOGICALSURFACE::GetRedirectionInfo(
      (SFMLOGICALSURFACE *)a4,
      (enum _HLSURF_REDIRECTIONSTYLE *)&v26,
      &v25,
      &v24,
      0,
      0);
    v14 = DwmCombineDwmSpriteLogSurfFlags(*((_DWORD *)v7 + 33), (char)a4[41]);
    v22 = *((_DWORD *)v7 + 17);
    *((_DWORD *)v7 + 17) = 0;
    v21 = *((_DWORD *)v7 + 19) >= 1;
    v20 = v24;
    v19 = v25;
    v18 = v26;
    v17 = v14;
    v16 = (int)*a4;
    v15 = (void *)UserReferenceDwmApiPort();
    DwmAsyncUpdateSprite(v15, v28, v16, v17, (_DWORD *)v7 + 12, 0, v18, v19, v20, v21, v22);
    a4[41] = (struct _SURFOBJ *)((unsigned int)a4[41] & 0xFFFFFFF7);
  }
  if ( v7 )
    _InterlockedDecrement((volatile signed __int32 *)v7 + 2);
}
