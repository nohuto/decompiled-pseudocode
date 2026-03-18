/*
 * XREFs of _GreTransferSpriteStateToDwmState@8 @ 0xE11CA
 * Callers:
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     _GreDeleteSprite@16 @ 0x1BB86 (_GreDeleteSprite@16.c)
 *     _DwmAsyncCreateSprite@28 @ 0x1EE40 (_DwmAsyncCreateSprite@28.c)
 *     ?hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z @ 0x1EF6E (-hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QAEXPAUHDEV__@@PAUSfmState@@H@Z @ 0x20314 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QAEXPAUHDEV__@@PAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z @ 0x20372 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z.c)
 *     ?DwmCombineDwmSpriteLogSurfFlags@@YG?AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@@@Z @ 0x2041A (-DwmCombineDwmSpriteLogSurfFlags@@YG-AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@.c)
 *     _DwmAsyncUpdateSprite@44 @ 0x2044E (_DwmAsyncUpdateSprite@44.c)
 *     ?ENTER_GRE_DWM_CRIT@@YGXVPDEVOBJ@@PAH@Z @ 0x21BFE (-ENTER_GRE_DWM_CRIT@@YGXVPDEVOBJ@@PAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YGXVPDEVOBJ@@H@Z @ 0x21D46 (-LEAVE_GRE_DWM_CRIT@@YGXVPDEVOBJ@@H@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z @ 0x22FA6 (-SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z.c)
 *     ?bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z @ 0x23160 (-bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z.c)
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z @ 0x25270 (-bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z @ 0x60D20 (-vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z.c)
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     ?GdiDeleteSprite@@YGJPAUHDEV__@@PAUHWND__@@PAX@Z @ 0x9EAA8 (-GdiDeleteSprite@@YGJPAUHDEV__@@PAUHWND__@@PAX@Z.c)
 *     ?GdiHintSpriteShape@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@HH@Z @ 0x9F2D8 (-GdiHintSpriteShape@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@HH@Z.c)
 *     ?bValid@SURFREF@@QBEHXZ @ 0xA8E4A (-bValid@SURFREF@@QBEHXZ.c)
 *     ?vAppContainerOwner@SURFACE@@QAEXPAU_EPROCESS@@@Z @ 0xC680C (-vAppContainerOwner@SURFACE@@QAEXPAU_EPROCESS@@@Z.c)
 *     _UserGetHwndProcess@4 @ 0xC6856 (_UserGetHwndProcess@4.c)
 *     _UserIsWindowOnDesktopAndComposed@8 @ 0xCF5E0 (_UserIsWindowOnDesktopAndComposed@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?SpCreateSurface@@YG?AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z @ 0xF5BC4 (-SpCreateSurface@@YG-AVSURFREF@@PAUHDEV__@@PAUtagSIZE@@@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _UserGetMiniWinInfo@12 @ 0x1539A0 (_UserGetMiniWinInfo@12.c)
 *     _UserIsWindowWithNoRedirectionBitmap@4 @ 0x1539D7 (_UserIsWindowWithNoRedirectionBitmap@4.c)
 */

int __fastcall GreTransferSpriteStateToDwmState(HDEV a1, int a2)
{
  HDEV v2; // edi
  int v3; // ebx
  _BYTE *v4; // ebx
  int v5; // eax
  int v6; // esi
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  _BYTE **v11; // eax
  int DwmSpriteObj; // eax
  int v13; // edx
  int v14; // esi
  int v15; // eax
  int v16; // edx
  int v17; // eax
  BOOL v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  SFMLOGICALSURFACE *v22; // edx
  int v23; // ecx
  struct _EPROCESS *HwndProcess; // eax
  int v25; // eax
  int v26; // edi
  void *v27; // eax
  int v28; // ecx
  SFMLOGICALSURFACE *v29; // edi
  int v30; // eax
  int v31; // ebx
  void *v32; // eax
  int updated; // eax
  SFMLOGICALSURFACE *v34; // ebx
  int v35; // eax
  struct SFMLOGICALSURFACE *v36; // eax
  int *v37; // esi
  int *v38; // ebx
  int v39; // esi
  unsigned int v40; // ecx
  int v41; // ebx
  char *v42; // eax
  char *v43; // esi
  int v45; // [esp-24h] [ebp-134h]
  int v46; // [esp-20h] [ebp-130h]
  int v47; // [esp-14h] [ebp-124h]
  int v48; // [esp-14h] [ebp-124h]
  unsigned int v49; // [esp-10h] [ebp-120h]
  int v50; // [esp-Ch] [ebp-11Ch]
  unsigned int v51; // [esp-Ch] [ebp-11Ch]
  BOOL v52; // [esp-8h] [ebp-118h]
  HDEV v53; // [esp-8h] [ebp-118h]
  int v54; // [esp-4h] [ebp-114h]
  int v55; // [esp-4h] [ebp-114h]
  HDEV v56; // [esp+0h] [ebp-110h]
  unsigned __int64 v57; // [esp+0h] [ebp-110h]
  HWND v58; // [esp+0h] [ebp-110h]
  void *v59; // [esp+4h] [ebp-10Ch]
  void *v60; // [esp+4h] [ebp-10Ch]
  _BYTE v61[140]; // [esp+10h] [ebp-100h] BYREF
  _DWORD v62[2]; // [esp+9Ch] [ebp-74h] BYREF
  _DWORD v63[2]; // [esp+A4h] [ebp-6Ch] BYREF
  int v64; // [esp+ACh] [ebp-64h] BYREF
  int v65; // [esp+B0h] [ebp-60h] BYREF
  SURFACE *v66; // [esp+B4h] [ebp-5Ch]
  HDEV v67; // [esp+B8h] [ebp-58h] BYREF
  void *v68; // [esp+BCh] [ebp-54h] BYREF
  struct HDC__ v69; // [esp+C0h] [ebp-50h] BYREF
  int v70; // [esp+C4h] [ebp-4Ch] BYREF
  unsigned int v71; // [esp+C8h] [ebp-48h] BYREF
  unsigned int v72; // [esp+CCh] [ebp-44h] BYREF
  int v73; // [esp+D0h] [ebp-40h] BYREF
  _BYTE *v74; // [esp+D4h] [ebp-3Ch]
  HDEV v75; // [esp+D8h] [ebp-38h]
  int v76; // [esp+DCh] [ebp-34h]
  int v77; // [esp+E0h] [ebp-30h] BYREF
  SFMLOGICALSURFACE *v78; // [esp+E4h] [ebp-2Ch]
  int v79; // [esp+E8h] [ebp-28h]
  struct _RECTL v80; // [esp+ECh] [ebp-24h] BYREF
  _DWORD v81[4]; // [esp+FCh] [ebp-14h] BYREF

  v2 = a1;
  v76 = a2;
  v75 = a1;
  v67 = a1;
  v79 = 1;
  v68 = 0;
  ENTER_GRE_DWM_CRIT(&v68, (int)a1);
  v3 = (int)(v2 + 16);
  if ( *((_DWORD *)v2 + 26) )
    v3 = **((_DWORD **)v2 + 27) + 64;
  v4 = *(_BYTE **)(v3 + 4);
  v5 = v79;
  v69.unused = 0;
  v71 = 0;
  v72 = 0;
  v70 = 0;
  v6 = v76;
  v74 = v4;
  while ( v4 )
  {
    v7 = *((_DWORD *)v4 + 10);
    if ( v7 && UserIsWindowOnDesktopAndComposed(v7, v6) )
    {
      if ( *((_DWORD *)v2 + 26) )
      {
        if ( (*v4 & 0x20) == 0 )
        {
          v8 = *((_DWORD *)v4 + 2);
          v9 = 0;
          v10 = *(_DWORD *)(v8 + 12);
          if ( v10 )
          {
            v11 = (_BYTE **)(v8 + 16);
            while ( (**v11 & 0x20) == 0 )
            {
              ++v9;
              ++v11;
              if ( v9 >= v10 )
                goto LABEL_15;
            }
            v4 = *v11;
            v74 = *v11;
          }
        }
      }
LABEL_15:
      DwmSpriteObj = hspCreateDwmSpriteObj(v76, *((struct SFMLOGICALSURFACE **)v4 + 10), (HWND)v2, 0, v56, (int)v59);
      v14 = 0;
      if ( DwmSpriteObj && (LOBYTE(v13) = 15, v15 = HmgLock(DwmSpriteObj, v13), v14 = v15, (v77 = v15) != 0) )
      {
        v79 = 1;
        v78 = *(SFMLOGICALSURFACE **)(v15 + 136);
        v17 = **((_DWORD **)v4 + 3);
        *(_DWORD *)(v14 + 32) = *((_DWORD *)v4 + 19) + *(_DWORD *)(v17 + 1836);
        *(_DWORD *)(v14 + 36) = *(_DWORD *)(v17 + 1840) + *((_DWORD *)v4 + 20);
        *(_DWORD *)(v14 + 40) = *((_DWORD *)v4 + 19) + *(_DWORD *)(v17 + 1836);
        *(_DWORD *)(v14 + 44) = *(_DWORD *)(v17 + 1840) + *((_DWORD *)v4 + 20);
        *(_DWORD *)(v14 + 48) = *((_DWORD *)v4 + 41);
        *(_DWORD *)(v14 + 52) = *((_DWORD *)v4 + 42);
        *(_DWORD *)(v14 + 56) = *((_DWORD *)v4 + 43);
        v18 = (*(_DWORD *)v4 & 0x11) == 0
           && *((_DWORD *)v4 + 11) < *((_DWORD *)v4 + 13)
           && *((_DWORD *)v4 + 12) < *((_DWORD *)v4 + 14);
        v14 = v77;
        *(_DWORD *)(v77 + 132) = v18 | *(_DWORD *)(v77 + 132) & 0xFFFFFFFE;
        v19 = *((_DWORD *)v4 + 22);
        if ( !v19 )
          goto LABEL_36;
        *(_DWORD *)(v14 + 40) += *(_DWORD *)(v19 + 16);
        *(_DWORD *)(v14 + 44) += *(_DWORD *)(*((_DWORD *)v4 + 22) + 20);
        v20 = *((_DWORD *)v4 + 44);
        if ( v20 )
        {
          LOBYTE(v16) = 5;
          v21 = HmgReferenceCheckLock(v20, v16, 0);
          SFMLOGICALSURFACE::SetShape(v78, v75, (struct _SURFOBJ *)(v21 + 16));
          v22 = v78;
          *((_DWORD *)v78 + 41) |= 1u;
          *((_DWORD *)v22 + 41) ^= ((unsigned __int8)*((_DWORD *)v22 + 41) ^ (unsigned __int8)(*(_DWORD *)v4 >> 1)) & 0x40;
          goto LABEL_36;
        }
        v2 = v75;
        SpCreateSurface(&v73, v75, *((_DWORD *)v4 + 22) + 16);
        if ( SURFREF::bValid((SURFREF *)&v73) )
        {
          SFMLOGICALSURFACE::SetShape(v78, v2, (struct _SURFOBJ *)(v73 + 16));
          v63[0] = 0;
          SURFREFVIEW::bMap((SURFREFVIEW *)v63, *((struct _SURFOBJ **)v78 + 28));
          if ( v63[0] )
          {
            v23 = *((_DWORD *)v4 + 22);
            v81[0] = 0;
            v81[1] = 0;
            v81[2] = *(_DWORD *)(v23 + 16);
            v81[3] = *(_DWORD *)(v23 + 20);
            v62[0] = 0;
            v62[1] = 0;
            v66 = (SURFACE *)(*((_DWORD *)v78 + 28) - 16);
            if ( (*((_DWORD *)v66 + 18) & 0x400) != 0 )
              v77 = *((_DWORD *)v2 + 494);
            else
              v77 = (int)EngCopyBits;
            if ( bNeedRenderHint(&v67) )
              v77 = (int)RedirCopyBits;
            HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(*(void **)(v14 + 24));
            SURFACE::vAppContainerOwner(v66, HwndProcess);
            ((void (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD *, _DWORD *))v77)(
              *((_DWORD *)v78 + 28),
              *((_DWORD *)v4 + 22),
              0,
              0,
              v81,
              v62);
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v63);
        }
        else
        {
          v79 = 0;
        }
        SURFREF::vUnlock((SURFREF *)&v73);
        if ( v79 )
        {
LABEL_36:
          memset(v61, 0, 0x84u);
          v77 = 39168;
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v64, (struct _EX_PUSH_LOCK *)(v14 + 60));
          UserGetMiniWinInfo(*(_DWORD *)(v14 + 24), v61, &v77);
          v25 = DwmCombineDwmSpriteLogSurfFlags(*(_DWORD *)(v14 + 132), *((_DWORD *)v78 + 41));
          v54 = v77;
          v26 = *(_DWORD *)v14;
          v50 = v25;
          v47 = *(_DWORD *)(v14 + 24);
          v27 = (void *)UserReferenceDwmApiPort();
          if ( DwmAsyncCreateSprite(v27, v26, v47, (_DWORD *)(v14 + 32), v50, v61, v54) < 0 )
          {
            v79 = 0;
          }
          else
          {
            v29 = v78;
            v79 = 1;
            if ( *((_DWORD *)v78 + 28) || UserIsWindowWithNoRedirectionBitmap(*((_DWORD *)v4 + 10)) )
            {
              *((_DWORD *)v29 + 41) |= 8u;
              SFMLOGICALSURFACE::StartSfmStateTracking(v29, v75, gpSfmState, v28);
              SFMLOGICALSURFACE::GetRedirectionInfo(v29, (enum _HLSURF_REDIRECTIONSTYLE *)&v70, &v71, &v72, 0, 0);
              v30 = DwmCombineDwmSpriteLogSurfFlags(*(_DWORD *)(v14 + 132), *((_DWORD *)v29 + 41));
              v55 = *(_DWORD *)(v14 + 68);
              *(_DWORD *)(v14 + 68) = 0;
              v31 = *(_DWORD *)v14;
              v52 = *(_DWORD *)(v14 + 76) >= 1;
              v51 = v72;
              v49 = v71;
              v48 = v70;
              v46 = v30;
              v45 = *(_DWORD *)v29;
              v32 = (void *)UserReferenceDwmApiPort();
              updated = DwmAsyncUpdateSprite(v32, v31, v45, v46, (_DWORD *)(v14 + 48), v61, v48, v49, v51, v52, v55);
              v34 = v78;
              *((_DWORD *)v78 + 41) &= ~8u;
              v79 = updated >= 0;
              if ( updated >= 0 )
              {
                PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v65, (SFMLOGICALSURFACE *)((char *)v34 + 168));
                v80.right = *(_DWORD *)(v14 + 40) - *(_DWORD *)(v14 + 32);
                v80.bottom = *(_DWORD *)(v14 + 44) - *(_DWORD *)(v14 + 36);
                v80.left = 0;
                v80.top = 0;
                vSpUpdateDirtyRgn(v34, v14, 0, &v80, &v69, 0, (unsigned int *)v56, (int)v59);
                if ( v65 )
                {
                  ExReleasePushLockExclusiveEx(v65, 0);
                  KeLeaveCriticalRegion();
                }
                v35 = *((_DWORD *)v34 + 28);
                if ( v35 )
                  v36 = *(struct SFMLOGICALSURFACE **)(v35 + 4);
                else
                  v36 = 0;
                v79 = bSpDwmNotifyDirty(v34, v69.unused, v36, 0, v57);
              }
              v4 = v74;
            }
          }
          if ( v64 )
          {
            ExReleasePushLockExclusiveEx(v64, 0);
            KeLeaveCriticalRegion();
          }
          v2 = v75;
        }
      }
      else
      {
        v79 = 0;
      }
      v4 = (_BYTE *)*((_DWORD *)v4 + 4);
      v74 = v4;
      if ( v14 )
        _InterlockedDecrement((volatile signed __int32 *)(v14 + 8));
      v6 = v76;
      goto LABEL_53;
    }
    v4 = (_BYTE *)*((_DWORD *)v4 + 4);
    v74 = v4;
LABEL_53:
    v5 = v79;
    if ( !v79 )
      break;
  }
  if ( v5 )
  {
    if ( *((_DWORD *)v2 + 26) )
    {
      v37 = (int *)*((_DWORD *)v2 + 28);
      if ( v37 )
      {
        do
        {
          v38 = (int *)v37[1];
          if ( *v37 && UserIsWindowOnDesktopAndComposed(*v37, v76) )
          {
            GdiHintSpriteShape((int)v2, 0, 0, 0, (int)v56, (int)v59);
            GdiDeleteSprite(*v37, (int)v2, (struct _SPRITESTATE *)v37, v58, v60);
          }
          v37 = v38;
        }
        while ( v38 );
      }
    }
    else
    {
      v39 = *((_DWORD *)v2 + 17);
      if ( v39 )
      {
        do
        {
          v40 = *(_DWORD *)(v39 + 40);
          v41 = *(_DWORD *)(v39 + 16);
          if ( v40 && UserIsWindowOnDesktopAndComposed(v40, v76) )
          {
            if ( *(_DWORD *)(v39 + 176) )
              GdiHintSpriteShape((int)v2, 0, 0, 0, (int)v56, (int)v59);
            GdiDeleteSprite(*(_DWORD *)(v39 + 40), (int)v2, (struct _SPRITESTATE *)v39, (HWND)v56, v59);
          }
          v39 = v41;
        }
        while ( v41 );
      }
    }
  }
  else
  {
    v42 = (char *)g_pDwmState + 44;
    v43 = (char *)*((_DWORD *)g_pDwmState + 11);
    while ( v43 != v42 )
    {
      v53 = (HDEV)*(v43 != 0 ? (_DWORD *)v43 - 4 : 0);
      v43 = *(v43 != 0 ? (char **)v43 : (char **)16);
      GreDeleteSprite(v53, (HWND)1);
      v42 = (char *)g_pDwmState + 44;
    }
  }
  LEAVE_GRE_DWM_CRIT(v68, (int)v2);
  return v79;
}
