/*
 * XREFs of _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4
 * Callers:
 *     _zzzDecomposeDesktop@8 @ 0xCF042 (_zzzDecomposeDesktop@8.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     _GreDeleteSprite@16 @ 0x1BB86 (_GreDeleteSprite@16.c)
 *     _DwmAsyncDestroySprite@8 @ 0x1BD68 (_DwmAsyncDestroySprite@8.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QAEXPAVSURFACE@@@Z @ 0x205FE (-CleanupShape@SFMLOGICALSURFACE@@QAEXPAVSURFACE@@@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YGXVPDEVOBJ@@PAH@Z @ 0x21BFE (-ENTER_GRE_DWM_CRIT@@YGXVPDEVOBJ@@PAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YGXVPDEVOBJ@@H@Z @ 0x21D46 (-LEAVE_GRE_DWM_CRIT@@YGXVPDEVOBJ@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z @ 0x22FA6 (-SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QAEPAVSURFACE@@PAUHLSURF__@@H@Z @ 0x24B50 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QAEPAVSURFACE@@PAUHLSURF__@@H@Z.c)
 *     ?GdiCreateSprite@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@@Z @ 0x9F0D4 (-GdiCreateSprite@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@@Z.c)
 *     ?GdiHintSpriteShape@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@HH@Z @ 0x9F2D8 (-GdiHintSpriteShape@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@@Z @ 0x9F558 (-GdiUpdateSprite@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUN.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z @ 0xA3F2E (-vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z.c)
 *     _UserIsWindowOnDesktopAndComposed@8 @ 0xCF5E0 (_UserIsWindowOnDesktopAndComposed@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 *     _UserIsWindowWithNoRedirectionBitmap@4 @ 0x1539D7 (_UserIsWindowWithNoRedirectionBitmap@4.c)
 *     ?vFixupMetaSpriteList@@YGXAAVPDEVOBJ@@@Z @ 0x1DFB45 (-vFixupMetaSpriteList@@YGXAAVPDEVOBJ@@@Z.c)
 */

int __fastcall GreTransferDwmStateToSpriteState(HDEV a1, int a2)
{
  HWND DisplayDC; // esi
  char *v4; // eax
  char *v5; // edi
  HDEV v7; // edi
  HDEV *v8; // ecx
  bool v9; // zf
  int v10; // eax
  _DWORD *v11; // edx
  unsigned int v12; // eax
  struct tagPOINT *v13; // eax
  struct _METASPRITE *v14; // edx
  unsigned int v15; // eax
  int v16; // esi
  void *v17; // eax
  struct PDEVOBJ *v18; // [esp+0h] [ebp-78h]
  unsigned int v19; // [esp+0h] [ebp-78h]
  unsigned int v20; // [esp+0h] [ebp-78h]
  struct tagRECT *v21; // [esp+4h] [ebp-74h]
  struct tagRECT *v22; // [esp+4h] [ebp-74h]
  struct tagRECT *v23; // [esp+4h] [ebp-74h]
  _DWORD v24[2]; // [esp+Ch] [ebp-6Ch] BYREF
  struct HDC__ v25; // [esp+14h] [ebp-64h] BYREF
  int v26; // [esp+18h] [ebp-60h]
  struct tagSIZE v27; // [esp+1Ch] [ebp-5Ch] BYREF
  HDEV v28; // [esp+24h] [ebp-54h]
  int v29; // [esp+28h] [ebp-50h]
  int v30; // [esp+2Ch] [ebp-4Ch]
  int v31; // [esp+30h] [ebp-48h] BYREF
  int v32; // [esp+34h] [ebp-44h]
  struct HDC__ v33; // [esp+38h] [ebp-40h] BYREF
  int v34; // [esp+3Ch] [ebp-3Ch]
  void *v35; // [esp+40h] [ebp-38h] BYREF
  HWND v36; // [esp+44h] [ebp-34h]
  struct tagPOINT *v37; // [esp+48h] [ebp-30h]
  HDEV v38; // [esp+4Ch] [ebp-2Ch]
  int v39; // [esp+50h] [ebp-28h]
  HWND v40; // [esp+54h] [ebp-24h]
  struct SURFACE *v41; // [esp+58h] [ebp-20h]
  HLSURF v42; // [esp+5Ch] [ebp-1Ch]
  int v43; // [esp+60h] [ebp-18h]
  struct tagPOINT *v44; // [esp+64h] [ebp-14h]
  _BYTE Buf2[12]; // [esp+68h] [ebp-10h] BYREF

  v30 = a2;
  v39 = 1;
  memset(Buf2, 0, sizeof(Buf2));
  v28 = a1;
  v35 = 0;
  ENTER_GRE_DWM_CRIT(&v35, (int)a1);
  if ( !g_pDwmState )
    goto LABEL_8;
  DisplayDC = 0;
  v44 = 0;
  v41 = 0;
  v40 = 0;
  v36 = *(HWND *)(_gpDispInfo + 28);
  v37 = (struct tagPOINT *)_ghdcMem;
  v4 = (char *)g_pDwmState + 44;
  v5 = (char *)*((_DWORD *)g_pDwmState + 11);
  while ( v5 != v4 )
  {
    v7 = v5 != 0 ? (HDEV)(v5 - 16) : 0;
    v8 = (HDEV *)v7;
    v38 = v7;
    v9 = ((_DWORD)v7[12] & 0x400000) == 0;
    v42 = (HLSURF)*((_DWORD *)v7 + 34);
    if ( !v9 )
    {
      v5 = (char *)*((_DWORD *)v7 + 4);
      GreDeleteSprite(*v8, (HWND)1);
      goto LABEL_12;
    }
    if ( !UserIsWindowOnDesktopAndComposed(*((_DWORD *)v7 + 6), v30) )
    {
      v5 = (char *)*((_DWORD *)v7 + 4);
      goto LABEL_12;
    }
    if ( GdiCreateSprite(*((HDEV *)v7 + 6), a1, v7 + 8, (HWND)v18, v21) )
    {
      v39 = 1;
      v43 = *((_DWORD *)v42 + 28);
      if ( v43 )
      {
        v41 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v42, v42, (int)v42);
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v42, a1, 0);
LABEL_19:
        v10 = memcmp(v7 + 12, Buf2, 0xCu);
        v11 = v7 + 12;
        if ( !v10 )
        {
          *v11 = 4;
          *((_DWORD *)v7 + 13) = 16711680;
        }
        if ( v43 )
        {
          v12 = *((_DWORD *)v42 + 41);
          if ( (v12 & 1) != 0 )
          {
            GdiHintSpriteShape(
              (int)a1,
              *(HDEV *)(v43 + 4),
              (struct SPRITE *)((v12 >> 6) & 1),
              (HBITMAP)1,
              v19,
              (int)v22);
            GdiUpdateSprite(
              *((struct _METASPRITE **)v7 + 6),
              (int)a1,
              0,
              0,
              0,
              0,
              0,
              0,
              *((HDC *)v7 + 14),
              (struct _POINTL *)(v7 + 13),
              *((_DWORD *)v7 + 12) | 0x20000000,
              0,
              v20,
              v23);
          }
          else
          {
            v31 = 0;
            v32 = 0;
            v27.cx = 0;
            v27.cy = 0;
            v33.unused = 0;
            v34 = 0;
            if ( !DisplayDC )
            {
              DisplayDC = (HWND)GreCreateDisplayDC(a1, 0, 0);
              v40 = DisplayDC;
              if ( !DisplayDC )
              {
                DisplayDC = v36;
                v40 = v36;
              }
            }
            v13 = v44;
            if ( v44
              || (v13 = (struct tagPOINT *)GreCreateDisplayDC(a1, 1, 0), (v44 = v13) != 0)
              || (v13 = v37, (v44 = v37) != 0) )
            {
              if ( DisplayDC )
              {
                *((_DWORD *)v41 + 18) |= 0x4000000u;
                v29 = GreSelectBitmap(v13, *(_DWORD *)(v43 + 4));
                if ( v29 )
                {
                  v31 = *((_DWORD *)v7 + 8);
                  v32 = *((_DWORD *)v7 + 9);
                  v33.unused = *(_DWORD *)(v43 + 16);
                  v14 = (struct _METASPRITE *)*((_DWORD *)v7 + 6);
                  v34 = *(_DWORD *)(v43 + 20);
                  GdiUpdateSprite(
                    v14,
                    (int)a1,
                    0,
                    DisplayDC,
                    (struct SPRITE *)&v31,
                    &v33,
                    (struct _POINTL *)v44,
                    &v27,
                    *((HDC *)v7 + 14),
                    (struct _POINTL *)(v7 + 13),
                    *((_DWORD *)v7 + 12) | 0x20000000,
                    0,
                    v19,
                    v22);
                  GreSelectBitmap(v44, v29);
                }
              }
            }
          }
        }
        else
        {
          v24[0] = (_DWORD)v7[8];
          v24[1] = (_DWORD)v7[9];
          v15 = *v11 | 0x20000000;
          v25.unused = 0;
          v26 = 0;
          GdiUpdateSprite(
            *((struct _METASPRITE **)v7 + 6),
            (int)a1,
            0,
            0,
            (struct SPRITE *)v24,
            &v25,
            0,
            0,
            *((HDC *)v7 + 14),
            (struct _POINTL *)(v7 + 13),
            v15,
            0,
            v19,
            v22);
        }
        if ( v43 )
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v42, (HSURF *)v41);
        goto LABEL_37;
      }
      if ( UserIsWindowWithNoRedirectionBitmap(*((_DWORD *)v7 + 6)) )
        goto LABEL_19;
    }
    else
    {
      v39 = 0;
    }
LABEL_37:
    v5 = (char *)*((_DWORD *)v7 + 4);
    v16 = *(_DWORD *)v38;
    v17 = (void *)UserReferenceDwmApiPort();
    DwmAsyncDestroySprite(v17, v16);
    vspDestroyDwmSpriteObjInternal(0, a1, v38, v19, (struct DWMSPRITE *)v22);
    DisplayDC = v40;
LABEL_12:
    v4 = (char *)g_pDwmState + 44;
  }
  if ( ((unsigned int)&loc_20000 & (_DWORD)a1[6]) != 0 )
    vFixupMetaSpriteList(v18);
  if ( v44 && v44 != v37 )
    GreDeleteDC(v44);
  if ( DisplayDC && DisplayDC != v36 )
    GreDeleteDC(DisplayDC);
LABEL_8:
  LEAVE_GRE_DWM_CRIT(v35, (int)a1);
  return v39;
}
