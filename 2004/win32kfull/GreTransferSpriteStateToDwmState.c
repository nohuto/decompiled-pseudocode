/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C0053B00
 * Callers:
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 * Callees:
 *     UserGetMiniWinInfo @ 0x1C0008E9C (UserGetMiniWinInfo.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001ED40 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001ED74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C001FBA8 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C0029350 (DwmAsyncCreateSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0029534 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0029DA8 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C002A844 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C002B1B8 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C002B618 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C002D6F8 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C004DCFC (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     GreDeleteSprite @ 0x1C004ECD8 (GreDeleteSprite.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0050904 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C0053F8C (UserIsWindowOnDesktopAndComposed.c)
 *     DwmAsyncUpdateSprite @ 0x1C00541BC (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0054360 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00543F8 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C0054838 (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0079870 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0114D58 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C011D504 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     UserGetHwndProcess @ 0x1C01204DC (UserGetHwndProcess.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
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
  _OWORD *v16; // r12
  __int64 v17; // r15
  __int64 v18; // rax
  BOOL v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // ebx
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // rax
  int v28; // r9d
  int v29; // edx
  __int64 v30; // r14
  BOOL v31; // esi
  __int64 v32; // r8
  __int64 v33; // r9
  void *v34; // rax
  int updated; // eax
  struct SFMLOGICALSURFACE *v36; // rbx
  __int64 v37; // r9
  UINT_PTR v38; // r9
  __int64 v39; // r9
  unsigned int v40; // ecx
  unsigned int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rbx
  struct _SURFOBJ *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r12
  BOOL (__stdcall *v48)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  bool v49; // zf
  int (*v50)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rax
  __int64 v51; // rcx
  struct _EPROCESS *HwndProcess; // rax
  _QWORD *v53; // rbx
  _QWORD *v54; // rdi
  struct DwmState *v55; // rbx
  __int64 v56; // r8
  int v57; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v58; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v59; // [rsp+68h] [rbp-98h] BYREF
  int v60; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v61; // [rsp+70h] [rbp-90h] BYREF
  int v62; // [rsp+74h] [rbp-8Ch] BYREF
  int (*v63)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // [rsp+78h] [rbp-88h]
  struct DWMSPRITE *v64; // [rsp+80h] [rbp-80h] BYREF
  __int64 v65; // [rsp+88h] [rbp-78h] BYREF
  __int64 v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-58h] BYREF
  struct SFMLOGICALSURFACE *v70; // [rsp+B0h] [rbp-50h]
  _BYTE v71[8]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v72[8]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v73[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v74[18]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v75; // [rsp+170h] [rbp+70h] BYREF
  int v76; // [rsp+178h] [rbp+78h]
  int v77; // [rsp+17Ch] [rbp+7Ch]
  struct tagRECT v78; // [rsp+180h] [rbp+80h] BYREF

  v2 = a2;
  v67 = a2;
  v66 = a1;
  v62 = 0;
  v3 = (HDEV)a1;
  v69 = a1;
  v4 = 1;
  ENTER_GRE_DWM_CRIT(a1, &v62);
  v5 = (__int64)(v3 + 22);
  if ( *((_DWORD *)v3 + 37) )
    v5 = **((_QWORD **)v3 + 19) + 88LL;
  v6 = *(_QWORD *)(v5 + 8);
  v61 = 0;
  v59 = 0;
  v58 = 0;
  v60 = 0;
  while ( v6 )
  {
    v11 = *(_QWORD *)(v6 + 72);
    if ( v11 && (unsigned int)UserIsWindowOnDesktopAndComposed(v11, v2) )
    {
      if ( *((_DWORD *)v3 + 37) )
      {
        if ( (*(_DWORD *)v6 & 0x20) == 0 )
        {
          v39 = *(_QWORD *)(v6 + 8);
          v40 = 0;
          v41 = *(_DWORD *)(v39 + 20);
          if ( v41 )
          {
            while ( (**(_DWORD **)(v39 + 8LL * v40 + 24) & 0x20) == 0 )
            {
              if ( ++v40 >= v41 )
                goto LABEL_18;
            }
            v6 = *(_QWORD *)(v39 + 8LL * v40 + 24);
          }
        }
      }
LABEL_18:
      DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj(*(HWND *)(v6 + 72), v2, v3, 0);
      v64 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v64, DwmSpriteObj);
      v14 = v64;
      if ( v64 )
      {
        v15 = *(__int64 **)(v6 + 16);
        v16 = (_OWORD *)((char *)v64 + 56);
        v17 = *((_QWORD *)v64 + 21);
        v4 = 1;
        v70 = (struct SFMLOGICALSURFACE *)v17;
        v18 = *v15;
        *((_DWORD *)v64 + 14) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v18 + 2584);
        *((_DWORD *)v14 + 15) = *(_DWORD *)(v18 + 2588) + *(_DWORD *)(v6 + 116);
        *((_DWORD *)v14 + 16) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v18 + 2584);
        *((_DWORD *)v14 + 17) = *(_DWORD *)(v18 + 2588) + *(_DWORD *)(v6 + 116);
        *((_QWORD *)v14 + 9) = *(_QWORD *)(v6 + 224);
        *((_DWORD *)v14 + 20) = *(_DWORD *)(v6 + 232);
        v19 = (*(_DWORD *)v6 & 1) == 0
           && (*(_DWORD *)v6 & 0x10) == 0
           && *(_DWORD *)(v6 + 80) < *(_DWORD *)(v6 + 88)
           && *(_DWORD *)(v6 + 84) < *(_DWORD *)(v6 + 92);
        *((_DWORD *)v14 + 41) = v19 | *((_DWORD *)v14 + 41) & 0xFFFFFFFE;
        v20 = *(_QWORD *)(v6 + 128);
        if ( !v20 )
          goto LABEL_22;
        *((_DWORD *)v14 + 16) += *(_DWORD *)(v20 + 32);
        *((_DWORD *)v14 + 17) += *(_DWORD *)(*(_QWORD *)(v6 + 128) + 36LL);
        v42 = *(_QWORD *)(v6 + 240);
        if ( v42 )
        {
          LOBYTE(v13) = 5;
          v43 = HmgReferenceCheckLock(v42, v13, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, v3, (struct _SURFOBJ *)(v43 + 24));
          *(_DWORD *)(v17 + 252) |= 1u;
          *(_DWORD *)(v17 + 252) ^= ((unsigned __int8)*(_DWORD *)(v17 + 252) ^ (unsigned __int8)(*(_DWORD *)v6 >> 1)) & 0x40;
          goto LABEL_22;
        }
        SpCreateSurface(&v68, v3, *(_QWORD *)(v6 + 128) + 32LL);
        v44 = v68;
        if ( v68 )
        {
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, v3, (struct _SURFOBJ *)(v68 + 24));
          v45 = *(struct _SURFOBJ **)(v17 + 184);
          v73[0] = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)v73, v45);
          if ( v73[0] )
          {
            v46 = *(_QWORD *)(v6 + 128);
            v47 = *(_QWORD *)(v17 + 184);
            v75 = 0LL;
            v76 = *(_DWORD *)(v46 + 32);
            v77 = *(_DWORD *)(v46 + 36);
            v65 = 0LL;
            if ( (*(_DWORD *)(v47 + 88) & 0x400) != 0 )
              v48 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v3 + 355);
            else
              v48 = EngCopyBits;
            v63 = v48;
            v49 = (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v69) == 0;
            v50 = v63;
            if ( !v49 )
              v50 = RedirCopyBits;
            v51 = *((_QWORD *)v14 + 5);
            v63 = v50;
            HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(v51);
            SURFACE::vAppContainerOwner((SURFACE *)(v47 - 24), HwndProcess);
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v63)(
              *(_QWORD *)(v17 + 184),
              *(_QWORD *)(v6 + 128),
              0LL,
              0LL,
              &v75,
              &v65);
            v16 = (_OWORD *)((char *)v14 + 56);
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v73);
        }
        else
        {
          v4 = 0;
        }
        if ( v44 )
          DEC_SHARE_REF_CNT(v44);
        if ( v4 )
        {
LABEL_22:
          memset(v74, 0, 0x88uLL);
          v57 = 39168;
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v72, (struct DWMSPRITE *)((char *)v14 + 88));
          UserGetMiniWinInfo(*((_QWORD *)v14 + 5), (struct tagMINIWINDOWINFO *)v74, &v57);
          v21 = *(_QWORD *)v14;
          v22 = *(_DWORD *)(v17 + 252) & 0xC;
          v23 = *(_DWORD *)(v17 + 252) & 1;
          v24 = v22 | *((_DWORD *)v14 + 41) & 1 | (2
                                                 * (v23 | *((_DWORD *)v14 + 41) & 0x40 | (4
                                                                                        * (*((_DWORD *)v14 + 41) & 0xE))));
          v27 = (void *)UserReferenceDwmApiPort(v22, v23, v25, v26);
          if ( (int)DwmAsyncCreateSprite(v27, v21, *((_QWORD *)v14 + 5), v16, v24, (__int64)v74, v57) < 0 )
          {
            v4 = 0;
          }
          else
          {
            v4 = 1;
            if ( *(_QWORD *)(v17 + 184) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v6 + 72)) )
            {
              *(_DWORD *)(v17 + 252) |= 8u;
              SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v17, v3, gpSfmState, v28);
              SFMLOGICALSURFACE::GetRedirectionInfo(
                (SFMLOGICALSURFACE *)v17,
                (enum _HLSURF_REDIRECTIONSTYLE *)&v60,
                &v59,
                &v58,
                0LL,
                0LL);
              v29 = *(_DWORD *)(v17 + 252);
              v30 = *((_QWORD *)v14 + 13);
              *((_QWORD *)v14 + 13) = 0LL;
              v31 = *((_DWORD *)v14 + 29) >= 1;
              v34 = (void *)UserReferenceDwmApiPort(v29 & 1, v29 & 0xC, v32, v33);
              updated = DwmAsyncUpdateSprite(v34, (__int64)v14 + 72, (__int64)v74, v60, v59, v58, v31, v30);
              v36 = v70;
              v4 = updated >= 0;
              *((_DWORD *)v70 + 63) &= ~8u;
              if ( updated >= 0 )
              {
                PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v71, (struct SFMLOGICALSURFACE *)((char *)v36 + 256));
                v78.right = *((_DWORD *)v14 + 16) - *((_DWORD *)v14 + 14);
                v78.bottom = *((_DWORD *)v14 + 17) - *((_DWORD *)v14 + 15);
                *(_QWORD *)&v78.left = 0LL;
                vSpUpdateDirtyRgn(v14, v36, 0LL, &v78, &v61, 0);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v71);
                v37 = *((_QWORD *)v36 + 23);
                if ( v37 )
                  v38 = *(_QWORD *)(v37 + 8);
                else
                  v38 = 0LL;
                v4 = bSpDwmNotifyDirty(*(HSPRITE *)v14, v36, v61, v38);
              }
              v3 = (HDEV)v66;
            }
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v72);
        }
        v2 = v67;
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
      v53 = (_QWORD *)*((_QWORD *)v3 + 20);
      if ( v53 )
      {
        do
        {
          v54 = (_QWORD *)v53[1];
          if ( *v53 && (unsigned int)UserIsWindowOnDesktopAndComposed(*v53, v2) )
          {
            GdiHintSpriteShape(v3, (HWND)*v53, 0LL, 0, 0);
            GdiDeleteSprite(v3, (HWND)*v53, v53);
          }
          v53 = v54;
        }
        while ( v54 );
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
            GdiDeleteSprite(v3, *(HWND *)(v7 + 72), (_QWORD *)v7);
          }
          v7 = v9;
        }
        while ( v9 );
      }
    }
  }
  else
  {
    v55 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
    while ( v55 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      v56 = ((unsigned __int64)v55 - 24) & -(__int64)(v55 != 0LL);
      v55 = *(struct DwmState **)(v56 + 0x18);
      GreDeleteSprite(v3, 0LL, *(HSPRITE *)v56, 1);
    }
  }
  LEAVE_GRE_DWM_CRIT((__int64)v3, v62);
  return v4;
}
