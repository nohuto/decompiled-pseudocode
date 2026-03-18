/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C0054018
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1C0054000 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C001FBA8 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0029778 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C002A844 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00541BC (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0054360 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00543F8 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        struct SFMLOGICALSURFACE *this,
        struct SURFACE *a3,
        struct SFMLOGICALSURFACE *a4)
{
  struct _SURFOBJ *v4; // r14
  HDEV v8; // rdx
  DWMSPRITE *v9; // rdi
  HDEV v10; // rdx
  int v11; // r9d
  unsigned int v12; // eax
  int v13; // edx
  __int64 v14; // r14
  BOOL v15; // esi
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rax
  int v19; // [rsp+60h] [rbp-20h] BYREF
  DWMSPRITE *v20; // [rsp+68h] [rbp-18h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h] BYREF
  HSPRITE v22; // [rsp+78h] [rbp-8h]
  unsigned int v23; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v24; // [rsp+D0h] [rbp+50h] BYREF

  v4 = (struct _SURFOBJ *)((char *)a3 + 24);
  v22 = (HSPRITE)*((_QWORD *)this + 37);
  v24 = 0;
  v23 = 0;
  v19 = 0;
  v20 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v20, v22);
  v9 = v20;
  if ( v20 )
  {
    DWMSPRITE::SetLogicalSurface(v20, v8, 0LL);
    DWMSPRITE::SetLogicalSurface(v9, v10, a4);
    SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
    SFMLOGICALSURFACE::SetShape(a4, a1, v4);
    if ( *((_QWORD *)a4 + 16) )
    {
      v21 = *((_QWORD *)a4 + 16);
      RGNOBJ::vSet((RGNOBJ *)&v21);
      v12 = *((_DWORD *)a4 + 63) & 0xFFFFFFFD;
    }
    else
    {
      v12 = *((_DWORD *)a4 + 63);
    }
    *((_DWORD *)a4 + 63) = v12 | 8;
    SFMLOGICALSURFACE::StartSfmStateTracking(a4, a1, gpSfmState, v11);
    SFMLOGICALSURFACE::GetRedirectionInfo(a4, (enum _HLSURF_REDIRECTIONSTYLE *)&v19, &v24, &v23, 0LL, 0LL);
    v13 = *((_DWORD *)a4 + 63);
    v14 = *((_QWORD *)v9 + 13);
    *((_QWORD *)v9 + 13) = 0LL;
    v15 = *((_DWORD *)v9 + 29) >= 1;
    v18 = (void *)UserReferenceDwmApiPort(v13 & 1, v13 & 0xC, v16, v17);
    DwmAsyncUpdateSprite(v18, (__int64)v9 + 72, 0LL, v19, v24, v23, v15, v14);
    *((_DWORD *)a4 + 63) &= ~8u;
    _InterlockedDecrement((volatile signed __int32 *)v9 + 3);
  }
}
