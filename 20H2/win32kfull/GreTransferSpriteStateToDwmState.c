/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C0080B34
 * Callers:
 *     zzzComposeDesktop @ 0x1C00801A8 (zzzComposeDesktop.c)
 * Callees:
 *     UserGetMiniWinInfo @ 0x1C0008E8C (UserGetMiniWinInfo.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C0080FC0 (UserIsWindowOnDesktopAndComposed.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C008278C (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00837D8 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C008C920 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0090670 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00906A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0097118 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00A4D00 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     GreDeleteSprite @ 0x1C00C0E74 (GreDeleteSprite.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C00C4298 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00C4698 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00C4C5C (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C57E0 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00C6054 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C00C645C (DwmAsyncCreateSprite.c)
 *     DwmAsyncUpdateSprite @ 0x1C00FB99C (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00FBB40 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00FBBD8 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C01109D0 (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0115DB8 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C011EB44 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     UserGetHwndProcess @ 0x1C01217BC (UserGetHwndProcess.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(HDEV a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  HDEV v3; // r14
  unsigned int v4; // esi
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v11; // rcx
  HSPRITE DwmSpriteObj; // rax
  __int64 v13; // rdx
  struct DWMSPRITE *v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  BOOL v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // ebx
  __int64 v23; // r8
  __int64 v24; // r9
  void *v25; // rax
  int v26; // r9d
  int v27; // edx
  __int64 v28; // r14
  BOOL v29; // esi
  __int64 v30; // r8
  __int64 v31; // r9
  void *v32; // rax
  int updated; // eax
  struct SFMLOGICALSURFACE *v34; // rbx
  __int64 v35; // r9
  unsigned __int64 v36; // r9
  __int64 v37; // r9
  unsigned int v38; // ecx
  unsigned int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rbx
  struct _SURFOBJ *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r12
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  bool v47; // zf
  int (*v48)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rax
  __int64 v49; // rcx
  struct _EPROCESS *HwndProcess; // rax
  _QWORD *v51; // rbx
  _QWORD *v52; // rdi
  struct DwmState *v53; // rbx
  __int64 v54; // r8
  int v55; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v56; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v57; // [rsp+68h] [rbp-98h] BYREF
  int v58; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v59; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v60; // [rsp+74h] [rbp-8Ch] BYREF
  int (*v61)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // [rsp+78h] [rbp-88h]
  struct DWMSPRITE *v62; // [rsp+80h] [rbp-80h] BYREF
  __int64 v63; // [rsp+88h] [rbp-78h] BYREF
  HDEV v64; // [rsp+90h] [rbp-70h]
  unsigned __int64 v65; // [rsp+98h] [rbp-68h]
  __int64 v66; // [rsp+A0h] [rbp-60h] BYREF
  HDEV v67; // [rsp+A8h] [rbp-58h] BYREF
  struct SFMLOGICALSURFACE *v68; // [rsp+B0h] [rbp-50h]
  _BYTE v69[8]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v70[8]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v71[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v72[18]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v73; // [rsp+170h] [rbp+70h] BYREF
  int v74; // [rsp+178h] [rbp+78h]
  int v75; // [rsp+17Ch] [rbp+7Ch]
  struct tagRECT v76; // [rsp+180h] [rbp+80h] BYREF

  v2 = a2;
  v65 = a2;
  v64 = a1;
  v60 = 0;
  v3 = a1;
  v67 = a1;
  v4 = 1;
  ENTER_GRE_DWM_CRIT(a1, &v60);
  v5 = (__int64)(v3 + 22);
  if ( *((_DWORD *)v3 + 37) )
    v5 = **((_QWORD **)v3 + 19) + 88LL;
  v6 = *(_QWORD *)(v5 + 8);
  v59 = 0;
  v57 = 0;
  v56 = 0;
  v58 = 0;
  while ( v6 )
  {
    v11 = *(_QWORD *)(v6 + 72);
    if ( v11 && (unsigned int)UserIsWindowOnDesktopAndComposed(v11, v2) )
    {
      if ( *((_DWORD *)v3 + 37) )
      {
        if ( (*(_DWORD *)v6 & 0x20) == 0 )
        {
          v37 = *(_QWORD *)(v6 + 8);
          v38 = 0;
          v39 = *(_DWORD *)(v37 + 20);
          if ( v39 )
          {
            while ( (**(_DWORD **)(v37 + 8LL * v38 + 24) & 0x20) == 0 )
            {
              if ( ++v38 >= v39 )
                goto LABEL_18;
            }
            v6 = *(_QWORD *)(v37 + 8LL * v38 + 24);
          }
        }
      }
LABEL_18:
      DwmSpriteObj = hspCreateDwmSpriteObj(*(HWND *)(v6 + 72), v2, v3, 0);
      v62 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v62, DwmSpriteObj);
      v14 = v62;
      if ( v62 )
      {
        v15 = *(__int64 **)(v6 + 16);
        v16 = *((_QWORD *)v62 + 21);
        v4 = 1;
        v68 = (struct SFMLOGICALSURFACE *)v16;
        v17 = *v15;
        *((_DWORD *)v62 + 14) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v17 + 2584);
        *((_DWORD *)v14 + 15) = *(_DWORD *)(v17 + 2588) + *(_DWORD *)(v6 + 116);
        *((_DWORD *)v14 + 16) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v17 + 2584);
        *((_DWORD *)v14 + 17) = *(_DWORD *)(v17 + 2588) + *(_DWORD *)(v6 + 116);
        *((_QWORD *)v14 + 9) = *(_QWORD *)(v6 + 224);
        *((_DWORD *)v14 + 20) = *(_DWORD *)(v6 + 232);
        v18 = (*(_DWORD *)v6 & 1) == 0
           && (*(_DWORD *)v6 & 0x10) == 0
           && *(_DWORD *)(v6 + 80) < *(_DWORD *)(v6 + 88)
           && *(_DWORD *)(v6 + 84) < *(_DWORD *)(v6 + 92);
        *((_DWORD *)v14 + 41) = v18 | *((_DWORD *)v14 + 41) & 0xFFFFFFFE;
        v19 = *(_QWORD *)(v6 + 128);
        if ( !v19 )
          goto LABEL_22;
        *((_DWORD *)v14 + 16) += *(_DWORD *)(v19 + 32);
        *((_DWORD *)v14 + 17) += *(_DWORD *)(*(_QWORD *)(v6 + 128) + 36LL);
        v40 = *(_QWORD *)(v6 + 240);
        if ( v40 )
        {
          LOBYTE(v13) = 5;
          v41 = HmgReferenceCheckLock(v40, v13, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v16, v3, (struct _SURFOBJ *)(v41 + 24));
          *(_DWORD *)(v16 + 252) |= 1u;
          *(_DWORD *)(v16 + 252) ^= ((unsigned __int8)*(_DWORD *)(v16 + 252) ^ (unsigned __int8)(*(_DWORD *)v6 >> 1)) & 0x40;
          goto LABEL_22;
        }
        SpCreateSurface(&v66, v3, *(_QWORD *)(v6 + 128) + 32LL);
        v42 = v66;
        if ( v66 )
        {
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v16, v3, (struct _SURFOBJ *)(v66 + 24));
          v43 = *(struct _SURFOBJ **)(v16 + 184);
          v71[0] = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)v71, v43);
          if ( v71[0] )
          {
            v44 = *(_QWORD *)(v6 + 128);
            v45 = *(_QWORD *)(v16 + 184);
            v73 = 0LL;
            v74 = *(_DWORD *)(v44 + 32);
            v75 = *(_DWORD *)(v44 + 36);
            v63 = 0LL;
            if ( (*(_DWORD *)(v45 + 88) & 0x400) != 0 )
              v46 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v3 + 355);
            else
              v46 = EngCopyBits;
            v61 = v46;
            v47 = (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v67) == 0;
            v48 = v61;
            if ( !v47 )
              v48 = RedirCopyBits;
            v49 = *((_QWORD *)v14 + 5);
            v61 = v48;
            HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(v49);
            SURFACE::vAppContainerOwner((SURFACE *)(v45 - 24), HwndProcess);
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v61)(
              *(_QWORD *)(v16 + 184),
              *(_QWORD *)(v6 + 128),
              0LL,
              0LL,
              &v73,
              &v63);
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v71);
        }
        else
        {
          v4 = 0;
        }
        if ( v42 )
          DEC_SHARE_REF_CNT(v42);
        if ( v4 )
        {
LABEL_22:
          memset(v72, 0, 0x88uLL);
          v55 = 39168;
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v70, (struct DWMSPRITE *)((char *)v14 + 88));
          UserGetMiniWinInfo(*((_QWORD *)v14 + 5), (struct tagMINIWINDOWINFO *)v72, &v55);
          v20 = *(_DWORD *)(v16 + 252) & 0xC;
          v21 = *(_DWORD *)(v16 + 252) & 1;
          v22 = v20 | *((_DWORD *)v14 + 41) & 1 | (2
                                                 * (v21 | *((_DWORD *)v14 + 41) & 0x40 | (4
                                                                                        * (*((_DWORD *)v14 + 41) & 0xE))));
          v25 = (void *)UserReferenceDwmApiPort(v20, v21, v23, v24);
          if ( (int)DwmAsyncCreateSprite(v25, v22, (__int64)v72, v55) < 0 )
          {
            v4 = 0;
          }
          else
          {
            v4 = 1;
            if ( *(_QWORD *)(v16 + 184) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v6 + 72)) )
            {
              *(_DWORD *)(v16 + 252) |= 8u;
              SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v16, v3, gpSfmState, v26);
              SFMLOGICALSURFACE::GetRedirectionInfo(
                (SFMLOGICALSURFACE *)v16,
                (enum _HLSURF_REDIRECTIONSTYLE *)&v58,
                &v57,
                &v56,
                0LL,
                0LL);
              v27 = *(_DWORD *)(v16 + 252);
              v28 = *((_QWORD *)v14 + 13);
              *((_QWORD *)v14 + 13) = 0LL;
              v29 = *((_DWORD *)v14 + 29) >= 1;
              v32 = (void *)UserReferenceDwmApiPort(v27 & 1, v27 & 0xC, v30, v31);
              updated = DwmAsyncUpdateSprite(v32, (__int64)v14 + 72, (__int64)v72, v58, v57, v56, v29, v28);
              v34 = v68;
              v4 = updated >= 0;
              *((_DWORD *)v68 + 63) &= ~8u;
              if ( updated >= 0 )
              {
                PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v69, (struct SFMLOGICALSURFACE *)((char *)v34 + 256));
                v76.right = *((_DWORD *)v14 + 16) - *((_DWORD *)v14 + 14);
                v76.bottom = *((_DWORD *)v14 + 17) - *((_DWORD *)v14 + 15);
                *(_QWORD *)&v76.left = 0LL;
                vSpUpdateDirtyRgn(v14, v34, 0LL, &v76, &v59, 0);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v69);
                v35 = *((_QWORD *)v34 + 23);
                if ( v35 )
                  v36 = *(_QWORD *)(v35 + 8);
                else
                  v36 = 0LL;
                v4 = bSpDwmNotifyDirty(*(HSPRITE *)v14, v34, v59, v36);
              }
              v3 = v64;
            }
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v70);
        }
        v2 = v65;
      }
      else
      {
        v4 = 0;
      }
      v6 = *(_QWORD *)(v6 + 24);
      if ( v14 )
        _InterlockedDecrement((volatile signed __int32 *)v14 + 3);
      goto LABEL_15;
    }
    v6 = *(_QWORD *)(v6 + 24);
LABEL_15:
    if ( !v4 )
      break;
  }
  if ( v4 )
  {
    if ( *((_DWORD *)v3 + 37) )
    {
      v51 = (_QWORD *)*((_QWORD *)v3 + 20);
      if ( v51 )
      {
        do
        {
          v52 = (_QWORD *)v51[1];
          if ( *v51 && (unsigned int)UserIsWindowOnDesktopAndComposed(*v51, v2) )
          {
            GdiHintSpriteShape(v3, (HWND)*v51, 0LL, 0, 0);
            GdiDeleteSprite(v3, (HWND)*v51, v51);
          }
          v51 = v52;
        }
        while ( v52 );
      }
    }
    else
    {
      v7 = *((_QWORD *)v3 + 12);
      if ( v7 )
      {
        do
        {
          v8 = *(_QWORD *)(v7 + 72);
          v9 = *(_QWORD *)(v7 + 24);
          if ( v8 && (unsigned int)UserIsWindowOnDesktopAndComposed(v8, v2) )
          {
            if ( *(_QWORD *)(v7 + 240) )
              GdiHintSpriteShape(v3, *(HWND *)(v7 + 72), 0LL, 0, 0);
            GdiDeleteSprite(v3, *(HWND *)(v7 + 72), (void *)v7);
          }
          v7 = v9;
        }
        while ( v9 );
      }
    }
  }
  else
  {
    v53 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
    while ( v53 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      v54 = ((unsigned __int64)v53 - 24) & -(__int64)(v53 != 0LL);
      v53 = *(struct DwmState **)(v54 + 0x18);
      GreDeleteSprite(v3, 0LL, *(void **)v54, 1);
    }
  }
  LEAVE_GRE_DWM_CRIT(v3, v60);
  return v4;
}
