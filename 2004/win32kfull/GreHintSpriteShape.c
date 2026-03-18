/*
 * XREFs of GreHintSpriteShape @ 0x1C001F3C4
 * Callers:
 *     HintSpriteShape @ 0x1C001F104 (HintSpriteShape.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007BFD0 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C001F880 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C001FB78 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C001FC7C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C001FCC4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0020558 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C002058C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0029778 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C002A844 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C002B78C (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C004DCFC (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C004F8CC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     DwmAsyncUpdateSprite @ 0x1C00541BC (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0054360 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00543F8 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026E6AC (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreHintSpriteShape(HDEV a1, struct PDEVOBJ *a2, HBITMAP a3, __int64 a4, int a5, int a6, int a7)
{
  int v7; // r13d
  HDEV v8; // rdi
  HBITMAP v10; // r12
  HWND v11; // rsi
  unsigned int v12; // r15d
  __int64 v13; // r14
  DWMSPRITE *v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdx
  int v17; // r9d
  __int64 v18; // r8
  struct SFMLOGICALSURFACE *v19; // rdi
  HDEV v20; // rsi
  int v21; // ecx
  int v22; // edx
  int v23; // r8d
  int v24; // edx
  int v25; // ecx
  int v27; // edx
  __int64 v28; // rsi
  BOOL v29; // edi
  __int64 v30; // r8
  __int64 v31; // r9
  void *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // r8
  HLSURF HLSURFClone; // rax
  HDEV v36; // rdx
  HDEV v37; // rdx
  int v38; // eax
  int v39; // xmm1_4
  unsigned int v40; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v41; // [rsp+6Ch] [rbp-4Dh] BYREF
  int v42; // [rsp+70h] [rbp-49h] BYREF
  int v43; // [rsp+74h] [rbp-45h]
  _BYTE v44[8]; // [rsp+78h] [rbp-41h] BYREF
  struct SFMLOGICALSURFACE *v45; // [rsp+80h] [rbp-39h]
  struct SFMLOGICALSURFACE *v46; // [rsp+88h] [rbp-31h] BYREF
  int v47; // [rsp+90h] [rbp-29h]
  DWMSPRITE *v48; // [rsp+98h] [rbp-21h] BYREF
  _BYTE v49[88]; // [rsp+A0h] [rbp-19h] BYREF

  v7 = a7;
  v8 = a1;
  v43 = 1;
  v41 = 0;
  v40 = 0;
  v10 = a3;
  v42 = 0;
  v11 = (HWND)a2;
  v46 = 0LL;
  v12 = 0;
  v47 = 0;
  v13 = 0LL;
  if ( a7 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  if ( a6 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v44, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    v43 = 0;
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v48, v11);
    v14 = v48;
    if ( !v48 )
      goto LABEL_18;
    v15 = *((_QWORD *)v48 + 21);
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v49, (struct SFMLOGICALSURFACE *)v15);
    v18 = *(_QWORD *)(v15 + 184);
    v12 = 1;
    if ( v18 )
    {
      v33 = v18 - 24;
      if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v18 - 24)) )
      {
        W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v33 + 272));
        if ( *(_DWORD *)(v33 + 324) )
        {
          v11 = (HWND)a2;
          *(_QWORD *)(v33 + 328) = a1;
          *(_QWORD *)(v33 + 336) = a2;
          *(_QWORD *)(v33 + 344) = v10;
          *(_OWORD *)(v33 + 352) = *(_OWORD *)a4;
          *(_OWORD *)(v33 + 368) = *(_OWORD *)(a4 + 16);
          *(_OWORD *)(v33 + 384) = *(_OWORD *)(a4 + 32);
          *(_OWORD *)(v33 + 400) = *(_OWORD *)(a4 + 48);
          *(_OWORD *)(v33 + 416) = *(_OWORD *)(a4 + 64);
          *(_OWORD *)(v33 + 432) = *(_OWORD *)(a4 + 80);
          *(_OWORD *)(v33 + 448) = *(_OWORD *)(a4 + 96);
          *(_OWORD *)(v33 + 464) = *(_OWORD *)(a4 + 112);
          *(_QWORD *)(v33 + 480) = *(_QWORD *)(a4 + 128);
          *(_DWORD *)(v33 + 488) = a5;
          *(_DWORD *)(v33 + 492) = a6;
          v38 = *(_DWORD *)(v33 + 112);
          if ( (v38 & 0x2000000) == 0 )
          {
            *(_DWORD *)(v33 + 112) = v38 | 0x2000000;
            _InterlockedIncrement(&glDelayedHintShape);
          }
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v33 + 272));
          SFMLOGICALSURFACEREF_vDestructorWrap(v49);
          v8 = a1;
          goto LABEL_17;
        }
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v33 + 272));
        v34 = *(_QWORD *)(v15 + 184);
      }
      v8 = a1;
      if ( v34 )
        goto LABEL_32;
    }
    if ( (*(_DWORD *)(v15 + 244) & 1) != 0 )
    {
LABEL_32:
      HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(v8, (struct SFMLOGICALSURFACE *)v15, 0, a5 & 2, 1);
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v46, HLSURFClone);
      v19 = v46;
      v45 = v46;
      if ( v46 )
      {
        DWMSPRITE::SetLogicalSurface(v14, v36, 0LL);
        DWMSPRITE::SetLogicalSurface(v14, v37, v19);
      }
      else
      {
        if ( v10 )
        {
          v12 = 0;
          SFMLOGICALSURFACEREF_vDestructorWrap(v49);
          v8 = a1;
          v11 = (HWND)a2;
          goto LABEL_17;
        }
        v45 = (struct SFMLOGICALSURFACE *)v15;
        v19 = (struct SFMLOGICALSURFACE *)v15;
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, a1, 0LL);
      }
    }
    else
    {
      v19 = (struct SFMLOGICALSURFACE *)v15;
      v45 = (struct SFMLOGICALSURFACE *)v15;
    }
    if ( v10 )
    {
      LOBYTE(v16) = 5;
      v20 = a1;
      v13 = HmgReferenceCheckLock(v10, v16, 0LL) + 24;
      SFMLOGICALSURFACE::SetShape(v19, a1, (struct _SURFOBJ *)v13);
      *((_DWORD *)v19 + 63) |= 8u;
      if ( (*(_DWORD *)(v13 + 92) & 0x800) != 0 )
      {
        v39 = *(_DWORD *)(v13 + 640);
        *((_DWORD *)v14 + 39) = *(_DWORD *)(v13 + 636);
        *((_DWORD *)v14 + 40) = v39;
        *((_DWORD *)v14 + 41) |= 0x20u;
      }
      else
      {
        *((_DWORD *)v14 + 39) = 0;
        *((_DWORD *)v14 + 40) = 0;
        *((_DWORD *)v14 + 41) &= ~0x20u;
      }
    }
    else
    {
      *((_DWORD *)v19 + 63) &= 0xFFFFFFF6;
      v20 = a1;
    }
    v21 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
    v22 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
    if ( v13 )
    {
      *((_DWORD *)v19 + 63) |= 1u;
      v23 = v22 + *((_DWORD *)v14 + 15);
      v24 = v21 + *((_DWORD *)v14 + 14);
    }
    else
    {
      v23 = *((_DWORD *)v14 + 15);
      v24 = *((_DWORD *)v14 + 14);
    }
    *((_DWORD *)v14 + 16) = v24;
    *((_DWORD *)v14 + 17) = v23;
    v25 = *((_DWORD *)v19 + 63);
    if ( (v25 & 1) != 0 && (*((_DWORD *)v14 + 41) & 0x10) == 0 && (v25 & 8) != 0 )
    {
      SFMLOGICALSURFACE::StartSfmStateTracking(v19, v20, gpSfmState, v17);
      SFMLOGICALSURFACE::GetRedirectionInfo(v19, (enum _HLSURF_REDIRECTIONSTYLE *)&v42, &v41, &v40, 0LL, 0LL);
      v27 = *((_DWORD *)v19 + 63);
      v28 = *((_QWORD *)v14 + 13);
      *((_QWORD *)v14 + 13) = 0LL;
      v29 = *((_DWORD *)v14 + 29) >= 1;
      v32 = (void *)UserReferenceDwmApiPort(v27 & 1, v27 & 0xC, v30, v31);
      v10 = a3;
      v12 = (int)DwmAsyncUpdateSprite(v32, (__int64)v14 + 72, a4, v42, v41, v40, v29, v28) >= 0;
      *((_DWORD *)v45 + 63) &= ~8u;
    }
    if ( *((int *)v14 + 29) >= 1 )
      CheckAndProcessWindowResizeComplete(v14, 0, 0LL);
    SFMLOGICALSURFACEREF_vDestructorWrap(v49);
    v8 = a1;
    v11 = (HWND)a2;
    if ( !v14 )
    {
LABEL_18:
      v7 = a7;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v44);
      if ( !v43 )
        goto LABEL_19;
      goto LABEL_34;
    }
LABEL_17:
    _InterlockedDecrement((volatile signed __int32 *)v14 + 3);
    goto LABEL_18;
  }
LABEL_34:
  v12 = GdiHintSpriteShape(v8, v11, v10, 0, 0);
LABEL_19:
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  SFMLOGICALSURFACEREF_vDestructorWrap(&v46);
  return v12;
}
