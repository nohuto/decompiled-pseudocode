/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026E9CC
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C0278B70 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C001F384 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C001FC7C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C001FCC4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     GreUpdateSprite @ 0x1C002032C (GreUpdateSprite.c)
 *     GreCreateSprite @ 0x1C0028EB8 (GreCreateSprite.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0029DA8 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0029DD0 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreDeleteSprite @ 0x1C004ECD8 (GreDeleteSprite.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0050C74 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0053220 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0075A3C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0159934 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // rbx
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  HSPRITE v10; // rdi
  HDC v11; // rsi
  __int64 v13; // r14
  HDEV HDEV; // r13
  struct PDEVOBJ *v15; // rdx
  int v16; // eax
  struct tagMINIWINDOWINFO *v17; // r9
  HSPRITE v18; // rax
  __int64 v19; // r8
  volatile signed __int32 *v20; // rbx
  struct SFMLOGICALSURFACE *v21; // rsi
  struct _SURFOBJ *v22; // rdx
  BOOL (__stdcall *v23)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r10
  unsigned int v24; // r14d
  __int64 DisplayDC; // rcx
  DYNAMICMODECHANGESHARELOCK *v26; // rcx
  void *v27; // [rsp+50h] [rbp-188h]
  char v28[4]; // [rsp+80h] [rbp-158h] BYREF
  _BYTE v29[4]; // [rsp+84h] [rbp-154h] BYREF
  struct tagSIZE v30; // [rsp+88h] [rbp-150h] BYREF
  __int64 v31; // [rsp+90h] [rbp-148h]
  HDC *v32; // [rsp+98h] [rbp-140h]
  unsigned int v33; // [rsp+A0h] [rbp-138h]
  HSPRITE v34; // [rsp+A8h] [rbp-130h]
  HDEV v35; // [rsp+B0h] [rbp-128h] BYREF
  _DWORD v36[2]; // [rsp+B8h] [rbp-120h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-110h] BYREF
  int v39; // [rsp+D0h] [rbp-108h]
  int v40; // [rsp+D4h] [rbp-104h]
  __int64 v41; // [rsp+D8h] [rbp-100h] BYREF
  struct DWMSPRITE *v42; // [rsp+E0h] [rbp-F8h] BYREF
  struct SFMLOGICALSURFACE *v43; // [rsp+E8h] [rbp-F0h] BYREF
  _QWORD v44[2]; // [rsp+F0h] [rbp-E8h] BYREF
  __int128 v45; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+110h] [rbp-C8h]
  _BYTE v47[80]; // [rsp+120h] [rbp-B8h] BYREF
  struct tagRECT v48; // [rsp+170h] [rbp-68h] BYREF
  _DWORD v49[2]; // [rsp+180h] [rbp-58h] BYREF
  struct tagSIZE v50; // [rsp+188h] [rbp-50h]

  v4 = a4;
  v32 = a4;
  v33 = a2;
  v6 = -1073741811;
  v39 = 0;
  v40 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v38, a1);
  v10 = 0LL;
  v11 = 0LL;
  v31 = 0LL;
  if ( !v38 )
    return (unsigned int)v6;
  v13 = *(_QWORD *)(v38 + 48);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v28, v7, v8, v9);
  v37 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  HDEV = (HDEV)UserGetHDEV();
  v35 = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v29, v15, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v47, (struct PDEVOBJ *)&v35);
  if ( HDEV && ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    v6 = -1073741801;
    if ( !g_pDwmState )
    {
      v6 = -1073741637;
LABEL_25:
      if ( v10 )
      {
        GreDeleteSprite(HDEV, 0LL, v10, 1);
        v10 = 0LL;
      }
      if ( v11 )
      {
        GreDeleteDC(v11);
        v11 = 0LL;
      }
      goto LABEL_29;
    }
    v41 = v13;
    if ( v13 )
    {
      v16 = *(_DWORD *)(v13 + 40);
      if ( (v16 & 0x400) == 0 && (v16 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v41) )
        {
          v48.left = *(_DWORD *)(v13 + 2584);
          v48.top = *(_DWORD *)(v13 + 2588);
          v48.right = v48.left + *(_DWORD *)(*(_QWORD *)(v13 + 2592) + 172LL);
          v48.bottom = v48.top + *(_DWORD *)(*(_QWORD *)(v13 + 2592) + 176LL);
          v18 = (HSPRITE)GreCreateSprite(
                           HDEV,
                           0LL,
                           &v48,
                           v17,
                           0x9900u,
                           1,
                           (int)v17,
                           (int)v17,
                           (int)v17,
                           (int)v17,
                           (unsigned __int16 *)v17);
          v10 = v18;
          v34 = v18;
          if ( v18 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v42, 0LL, v18);
            v20 = (volatile signed __int32 *)v42;
            if ( v42 )
            {
              v43 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v42 + 21);
              v21 = v43;
              vSpDwmUpdateSpriteVisibility(v42, 0LL, v19);
              v30 = *(struct tagSIZE *)(*(_QWORD *)(v13 + 2592) + 172LL);
              if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, (struct DWMSPRITE *)v20, v21, &v30, &v43) )
              {
                v22 = (struct _SURFOBJ *)*((_QWORD *)v21 + 23);
                v44[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)v44, v22);
                v49[0] = 0;
                v49[1] = 0;
                v50 = v30;
                v36[0] = 0;
                v36[1] = 0;
                v45 = 0LL;
                v46 = 0LL;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v35) )
                {
                  v23 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))RedirBitBlt;
                }
                else if ( (*(_DWORD *)(*((_QWORD *)v21 + 23) + 88LL) & 1) != 0 )
                {
                  v23 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)HDEV + 354);
                }
                else
                {
                  v23 = EngBitBlt;
                }
                v24 = v33;
                LODWORD(v45) = v33 & 0xFFFFFF;
                LODWORD(v46) = 0;
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _DWORD *, _QWORD, __int128 *, _QWORD, int))v23)(
                  *((_QWORD *)v21 + 23),
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v49,
                  v36,
                  0LL,
                  &v45,
                  0LL,
                  61680);
                LODWORD(v27) = 541065217;
                GreUpdateSprite(HDEV, 0LL, v10, 0LL, 0LL, 0LL, 0LL, 0LL, v24, 0LL, v27, &v48, 0LL, 1, 0);
                DisplayDC = GreCreateDisplayDC(HDEV, 1LL, 0LL);
                v31 = DisplayDC;
                if ( DisplayDC )
                {
                  *(_DWORD *)(*((_QWORD *)v21 + 23) + 88LL) |= 0x4000000u;
                  GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v21 + 23) + 8LL));
                  v6 = 0;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v44);
              }
              _InterlockedDecrement(v20 + 3);
              v11 = (HDC)v31;
              v10 = v34;
            }
            v4 = v32;
          }
        }
      }
    }
  }
  if ( v6 < 0 )
    goto LABEL_25;
LABEL_29:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v47);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  XDCOBJ::vUnlockFast((XDCOBJ *)&v38);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (void **)MmUserProbeAddress;
  *a3 = v10;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (HDC *)MmUserProbeAddress;
  *v4 = v11;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v29);
  SEMOBJ::vUnlock((SEMOBJ *)&v37);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v26);
  return (unsigned int)v6;
}
