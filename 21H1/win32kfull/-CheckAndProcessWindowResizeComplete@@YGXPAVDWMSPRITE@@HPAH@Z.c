/*
 * XREFs of ?CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z @ 0x1CCD3C
 * Callers:
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z @ 0xA3F2E (-vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z.c)
 *     _GreWindowLayoutComplete@16 @ 0xA8D24 (_GreWindowLayoutComplete@16.c)
 *     _CheckAndProcessSurfaceComplete@4 @ 0x1CDD54 (_CheckAndProcessSurfaceComplete@4.c)
 *     _GreCancelSynchronizedWindowResize@4 @ 0x1CDE96 (_GreCancelSynchronizedWindowResize@4.c)
 *     _GreWindowResizeComplete@8 @ 0x1CEAC5 (_GreWindowResizeComplete@8.c)
 *     _GreWindowResizeStarted@20 @ 0x1CEC76 (_GreWindowResizeStarted@20.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z @ 0x20372 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z.c)
 *     ?DwmCombineDwmSpriteLogSurfFlags@@YG?AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@@@Z @ 0x2041A (-DwmCombineDwmSpriteLogSurfFlags@@YG-AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@.c)
 *     _DwmAsyncUpdateSprite@44 @ 0x2044E (_DwmAsyncUpdateSprite@44.c)
 *     _DwmCheckForDeferredUpdateSpriteCommands@4 @ 0xF61EA (_DwmCheckForDeferredUpdateSpriteCommands@4.c)
 *     ?UpdateWindowResizeTelemetry@@YGXPAVDWMSPRITE@@H@Z @ 0x1CD5C4 (-UpdateWindowResizeTelemetry@@YGXPAVDWMSPRITE@@H@Z.c)
 *     _DwmAsyncProcessSurfaceComplete@8 @ 0x1D2565 (_DwmAsyncProcessSurfaceComplete@8.c)
 */

void __userpurge CheckAndProcessWindowResizeComplete(
        int a1@<edx>,
        int *a2@<ecx>,
        struct DWMSPRITE *a3@<edi>,
        struct DWMSPRITE *a4,
        int a5,
        int *a6)
{
  int v6; // esi
  int *v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // esi
  int v12; // edi
  void *v13; // eax
  int v14; // edi
  int v15; // eax
  void *v16; // ecx
  int v17; // [esp-24h] [ebp-3Ch]
  int v18; // [esp-18h] [ebp-30h]
  unsigned int v19; // [esp-14h] [ebp-2Ch]
  unsigned int v20; // [esp-10h] [ebp-28h]
  BOOL v21; // [esp-Ch] [ebp-24h]
  int v22; // [esp-8h] [ebp-20h]
  struct DWMSPRITE *v23; // [esp-4h] [ebp-1Ch]
  int v24; // [esp+0h] [ebp-18h]
  int *v25; // [esp+8h] [ebp-10h]
  int v26; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v27; // [esp+10h] [ebp-8h] BYREF
  unsigned int v28; // [esp+14h] [ebp-4h] BYREF

  v6 = 0;
  if ( a1 || !a2[20] && a2[19] == 1 )
  {
    v23 = a3;
    v8 = (int *)a2[34];
    v25 = v8;
    if ( v8 )
    {
      if ( !a1 && DwmCheckForDeferredUpdateSpriteCommands((void *)*v8) )
      {
        v14 = v9;
      }
      else
      {
        v26 = 0;
        v27 = 0;
        v28 = 0;
        SFMLOGICALSURFACE::GetRedirectionInfo(
          (SFMLOGICALSURFACE *)v8,
          (enum _HLSURF_REDIRECTIONSTYLE *)&v26,
          &v27,
          &v28,
          0,
          0);
        v10 = DwmCombineDwmSpriteLogSurfFlags(a2[33], v8[41]);
        v22 = a2[17];
        a2[17] = 0;
        v11 = *v8;
        v12 = *a2;
        v21 = a2[19] >= 1;
        v20 = v28;
        v19 = v27;
        v18 = v26;
        v17 = v10 | 0x100;
        v13 = (void *)UserReferenceDwmApiPort();
        DwmAsyncUpdateSprite(v13, v12, v11, v17, a2 + 12, 0, v18, v19, v20, v21, v22);
        v14 = *v25;
      }
      v15 = UserReferenceDwmApiPort();
      DwmAsyncProcessSurfaceComplete(v15, v14, v23);
    }
    a2[19] = 0;
    UpdateWindowResizeTelemetry(v23, v24);
    v16 = (void *)a2[16];
    if ( v16 )
    {
      ObfDereferenceObject(v16);
      a2[16] = 0;
    }
    v6 = 1;
  }
  if ( a4 )
    *(_DWORD *)a4 = v6;
}
