/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026D3AC
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C0277600 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C002AB94 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     GreUpdateSprite @ 0x1C003D068 (GreUpdateSprite.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C008C834 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C008CACC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0093AA8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A111C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDeleteSprite @ 0x1C00C0E74 (GreDeleteSprite.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00C6054 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00C607C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreCreateSprite @ 0x1C00C6994 (GreCreateSprite.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0107E40 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C015D138 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // rbx
  int v6; // r15d
  HSPRITE v7; // rdi
  HDC v8; // rsi
  __int64 v10; // r14
  HDEV HDEV; // r13
  struct PDEVOBJ *v12; // rdx
  int v13; // eax
  struct tagMINIWINDOWINFO *v14; // r9
  HSPRITE v15; // rax
  __int64 v16; // r8
  volatile signed __int32 *v17; // rbx
  struct SFMLOGICALSURFACE *v18; // rsi
  struct _SURFOBJ *v19; // rdx
  BOOL (__stdcall *v20)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r10
  unsigned int v21; // r14d
  __int64 DisplayDC; // rcx
  DYNAMICMODECHANGESHARELOCK *v23; // rcx
  void *v24; // [rsp+50h] [rbp-188h]
  char v25[4]; // [rsp+80h] [rbp-158h] BYREF
  _BYTE v26[4]; // [rsp+84h] [rbp-154h] BYREF
  struct tagSIZE v27; // [rsp+88h] [rbp-150h] BYREF
  __int64 v28; // [rsp+90h] [rbp-148h]
  HDC *v29; // [rsp+98h] [rbp-140h]
  unsigned int v30; // [rsp+A0h] [rbp-138h]
  HSPRITE v31; // [rsp+A8h] [rbp-130h]
  HDEV v32; // [rsp+B0h] [rbp-128h] BYREF
  _DWORD v33[2]; // [rsp+B8h] [rbp-120h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-110h] BYREF
  int v36; // [rsp+D0h] [rbp-108h]
  int v37; // [rsp+D4h] [rbp-104h]
  __int64 v38; // [rsp+D8h] [rbp-100h] BYREF
  struct DWMSPRITE *v39; // [rsp+E0h] [rbp-F8h] BYREF
  struct SFMLOGICALSURFACE *v40; // [rsp+E8h] [rbp-F0h] BYREF
  _QWORD v41[2]; // [rsp+F0h] [rbp-E8h] BYREF
  __int128 v42; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+110h] [rbp-C8h]
  _BYTE v44[80]; // [rsp+120h] [rbp-B8h] BYREF
  struct tagRECT v45; // [rsp+170h] [rbp-68h] BYREF
  _DWORD v46[2]; // [rsp+180h] [rbp-58h] BYREF
  struct tagSIZE v47; // [rsp+188h] [rbp-50h]

  v4 = a4;
  v29 = a4;
  v30 = a2;
  v6 = -1073741811;
  v36 = 0;
  v37 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v35, a1);
  v7 = 0LL;
  v8 = 0LL;
  v28 = 0LL;
  if ( !v35 )
    return (unsigned int)v6;
  v10 = *(_QWORD *)(v35 + 48);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v25);
  v34 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  HDEV = (HDEV)UserGetHDEV();
  v32 = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v26, v12, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v44, (struct PDEVOBJ *)&v32);
  if ( HDEV && ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    v6 = -1073741801;
    if ( !g_pDwmState )
    {
      v6 = -1073741637;
LABEL_25:
      if ( v7 )
      {
        GreDeleteSprite(HDEV, 0LL, v7, 1);
        v7 = 0LL;
      }
      if ( v8 )
      {
        GreDeleteDC(v8);
        v8 = 0LL;
      }
      goto LABEL_29;
    }
    v38 = v10;
    if ( v10 )
    {
      v13 = *(_DWORD *)(v10 + 40);
      if ( (v13 & 0x400) == 0 && (v13 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v38) )
        {
          v45.left = *(_DWORD *)(v10 + 2584);
          v45.top = *(_DWORD *)(v10 + 2588);
          v45.right = v45.left + *(_DWORD *)(*(_QWORD *)(v10 + 2592) + 172LL);
          v45.bottom = v45.top + *(_DWORD *)(*(_QWORD *)(v10 + 2592) + 176LL);
          v15 = (HSPRITE)GreCreateSprite(
                           HDEV,
                           0LL,
                           &v45,
                           v14,
                           0x9900u,
                           1,
                           (int)v14,
                           (int)v14,
                           (int)v14,
                           (int)v14,
                           (unsigned __int16 *)v14);
          v7 = v15;
          v31 = v15;
          if ( v15 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v39, 0LL, v15);
            v17 = (volatile signed __int32 *)v39;
            if ( v39 )
            {
              v40 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v39 + 21);
              v18 = v40;
              vSpDwmUpdateSpriteVisibility(v39, 0LL, v16);
              v27 = *(struct tagSIZE *)(*(_QWORD *)(v10 + 2592) + 172LL);
              if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, (struct DWMSPRITE *)v17, v18, &v27, &v40) )
              {
                v19 = (struct _SURFOBJ *)*((_QWORD *)v18 + 23);
                v41[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)v41, v19);
                v46[0] = 0;
                v46[1] = 0;
                v47 = v27;
                v33[0] = 0;
                v33[1] = 0;
                v42 = 0LL;
                v43 = 0LL;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v32) )
                {
                  v20 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))RedirBitBlt;
                }
                else if ( (*(_DWORD *)(*((_QWORD *)v18 + 23) + 88LL) & 1) != 0 )
                {
                  v20 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)HDEV + 354);
                }
                else
                {
                  v20 = EngBitBlt;
                }
                v21 = v30;
                LODWORD(v42) = v30 & 0xFFFFFF;
                LODWORD(v43) = 0;
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _DWORD *, _QWORD, __int128 *, _QWORD, int))v20)(
                  *((_QWORD *)v18 + 23),
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v46,
                  v33,
                  0LL,
                  &v42,
                  0LL,
                  61680);
                LODWORD(v24) = 541065217;
                GreUpdateSprite(HDEV, 0LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL, v21, 0LL, v24, &v45, 0LL, 1, 0);
                DisplayDC = GreCreateDisplayDC(HDEV, 1LL, 0LL);
                v28 = DisplayDC;
                if ( DisplayDC )
                {
                  *(_DWORD *)(*((_QWORD *)v18 + 23) + 88LL) |= 0x4000000u;
                  GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v18 + 23) + 8LL));
                  v6 = 0;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v41);
              }
              _InterlockedDecrement(v17 + 3);
              v8 = (HDC)v28;
              v7 = v31;
            }
            v4 = v29;
          }
        }
      }
    }
  }
  if ( v6 < 0 )
    goto LABEL_25;
LABEL_29:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v44);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  XDCOBJ::vUnlockFast((XDCOBJ *)&v35);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (void **)MmUserProbeAddress;
  *a3 = v7;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (HDC *)MmUserProbeAddress;
  *v4 = v8;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v26);
  SEMOBJ::vUnlock((SEMOBJ *)&v34);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v23);
  return (unsigned int)v6;
}
