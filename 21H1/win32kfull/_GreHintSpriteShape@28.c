/*
 * XREFs of _GreHintSpriteShape@28 @ 0x23FC0
 * Callers:
 *     _HintSpriteShape@16 @ 0x23F60 (_HintSpriteShape@16.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x5BD44 (-vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vClearRendering@DC@@QAEXXZ @ 0x5FB80 (-vClearRendering@DC@@QAEXXZ.c)
 *     _GreHintSpriteShapeDelayDelete@24 @ 0x1CE666 (_GreHintSpriteShapeDelayDelete@24.c)
 * Callees:
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QAEXPAUHDEV__@@PAUSfmState@@H@Z @ 0x20314 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QAEXPAUHDEV__@@PAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z @ 0x20372 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QAEXPAW4_HLSURF_REDIRECTIONSTYLE@@PAK1PAPAXPAU_LUID@@@Z.c)
 *     ?DwmCombineDwmSpriteLogSurfFlags@@YG?AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@@@Z @ 0x2041A (-DwmCombineDwmSpriteLogSurfFlags@@YG-AU_DWMREDIR_SPRITEFLAGS@@U_DWMSPRITEFLAGS@@U_LOGSURF_FLAGS@.c)
 *     _DwmAsyncUpdateSprite@44 @ 0x2044E (_DwmAsyncUpdateSprite@44.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z @ 0x22222 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z @ 0x22FA6 (-SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z.c)
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     _SFMLOGICALSURFACEREF_vDestructor@4 @ 0x2443A (_SFMLOGICALSURFACEREF_vDestructor@4.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QAE@PAVSFMLOGICALSURFACE@@@Z @ 0x2461E (--0SFMLOGICALSURFACEREF@@QAE@PAVSFMLOGICALSURFACE@@@Z.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QAEXPAUHDEV__@@PAVSFMLOGICALSURFACE@@@Z @ 0x246B2 (-SetLogicalSurface@DWMSPRITE@@QAEXPAUHDEV__@@PAVSFMLOGICALSURFACE@@@Z.c)
 *     ?GdiHintSpriteShape@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@HH@Z @ 0x9F2D8 (-GdiHintSpriteShape@@YGHPAUHDEV__@@PAUHWND__@@PAUHBITMAP__@@HH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z @ 0x1CCD3C (-CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z.c)
 */

int __fastcall GreHintSpriteShape(HDEV a1, void *a2, struct PDEVOBJ *a3, _DWORD *a4, int a5, int a6, int a7)
{
  HDEV v8; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // edi
  int v14; // edx
  int v15; // ebx
  int v16; // eax
  struct SFMLOGICALSURFACE *v17; // ebx
  int HLSURFClone; // eax
  int v19; // edx
  HDEV v20; // ecx
  HDEV v21; // ecx
  int v22; // ebx
  struct _SURFOBJ *v23; // edi
  _DWORD *v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // edi
  int v32; // ebx
  void *v33; // eax
  void (__stdcall *v34)(const wchar_t *, _DWORD); // edi
  void (__thiscall *v35)(_DWORD); // esi
  int v37; // [esp-20h] [ebp-88h]
  int v38; // [esp-14h] [ebp-7Ch]
  unsigned int v39; // [esp-10h] [ebp-78h]
  unsigned int v40; // [esp-Ch] [ebp-74h]
  BOOL v41; // [esp-8h] [ebp-70h]
  int v42; // [esp-4h] [ebp-6Ch]
  int v43; // [esp+0h] [ebp-68h]
  int *v44; // [esp+4h] [ebp-64h]
  BOOL v45; // [esp+10h] [ebp-58h]
  struct _SURFOBJ *v47; // [esp+18h] [ebp-50h]
  struct SFMLOGICALSURFACE *v48; // [esp+1Ch] [ebp-4Ch]
  int v49; // [esp+28h] [ebp-40h]
  unsigned int v50; // [esp+2Ch] [ebp-3Ch] BYREF
  unsigned int v51; // [esp+30h] [ebp-38h] BYREF
  int v52; // [esp+34h] [ebp-34h] BYREF
  int v53; // [esp+38h] [ebp-30h]
  void *v54; // [esp+3Ch] [ebp-2Ch]
  _BYTE v55[4]; // [esp+40h] [ebp-28h] BYREF
  _BYTE v56[8]; // [esp+44h] [ebp-24h] BYREF
  _DWORD v57[2]; // [esp+4Ch] [ebp-1Ch] BYREF
  PVOID pvBits; // [esp+54h] [ebp-14h]
  PVOID pvScan0; // [esp+58h] [ebp-10h]
  LONG lDelta; // [esp+5Ch] [ebp-Ch]
  ULONG iUniq; // [esp+60h] [ebp-8h]

  v54 = a2;
  v45 = 0;
  v53 = 1;
  v47 = 0;
  v51 = 0;
  v50 = 0;
  v52 = 0;
  v57[0] = 0;
  v57[1] = 0;
  if ( a7 )
  {
    GreAcquireSemaphore(_ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", _ghsemGreLock, 2);
  }
  v8 = (HDEV)a3;
  if ( !a6 )
  {
    v34 = (void (__stdcall *)(const wchar_t *, _DWORD))EtwTraceGreLockReleaseSemaphore;
    goto LABEL_47;
  }
  if ( !g_pDwmState )
  {
    v34 = (void (__stdcall *)(const wchar_t *, _DWORD))EtwTraceGreLockReleaseSemaphore;
LABEL_47:
    v35 = (void (__thiscall *)(_DWORD))GreReleaseSemaphoreInternal;
    goto LABEL_48;
  }
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v55, a3, 0, 0);
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  v53 = 0;
  v9 = 0;
  v10 = DWMALTSPRITEREF::hspLookupWindow(a2);
  if ( !v10 )
  {
LABEL_40:
    if ( v9 )
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 8));
    goto LABEL_42;
  }
  LOBYTE(v11) = 15;
  v12 = HmgLock(v10, v11);
  v9 = v12;
  v49 = v12;
  if ( !v12 )
  {
LABEL_42:
    v22 = v45;
    goto LABEL_43;
  }
  v13 = *(_DWORD *)(v12 + 136);
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v56, (struct SFMLOGICALSURFACE *)v13);
  v15 = *(_DWORD *)(v13 + 112);
  v45 = 1;
  if ( !v15 )
    goto LABEL_16;
  if ( *(_DWORD *)(v15 + 140) || (*(_BYTE *)(v15 + 60) & 1) != 0 )
  {
    W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v15 + 152));
    if ( *(_DWORD *)(v15 + 192) )
    {
      *(_DWORD *)(v15 + 200) = v54;
      *(_DWORD *)(v15 + 196) = a1;
      *(_DWORD *)(v15 + 204) = a3;
      qmemcpy((void *)(v15 + 208), a4, 0x84u);
      *(_DWORD *)(v15 + 340) = a5;
      *(_DWORD *)(v15 + 344) = a6;
      v16 = *(_DWORD *)(v15 + 56);
      if ( (v16 & 0x2000000) == 0 )
      {
        *(_DWORD *)(v15 + 56) = v16 | 0x2000000;
        _InterlockedIncrement(&glDelayedHintShape);
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v15 + 152));
      SFMLOGICALSURFACEREF_vDestructor(v56);
      _InterlockedDecrement((volatile signed __int32 *)(v49 + 8));
      goto LABEL_42;
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v15 + 152));
    v15 = *(_DWORD *)(v13 + 112);
  }
  if ( !v15 )
  {
LABEL_16:
    if ( (*(_BYTE *)(v13 + 156) & 1) == 0 )
    {
      v17 = (struct SFMLOGICALSURFACE *)v13;
      v48 = (struct SFMLOGICALSURFACE *)v13;
      goto LABEL_24;
    }
  }
  HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(
                  (_DWORD *)v13,
                  (int)a1,
                  0,
                  (struct SFMLOGICALSURFACE *)(a5 & 2),
                  1,
                  v43,
                  (int)v44);
  if ( HLSURFClone )
  {
    LOBYTE(v19) = 18;
    v17 = (struct SFMLOGICALSURFACE *)HmgLock(HLSURFClone, v19);
    v48 = v17;
    v57[0] = v17;
    if ( v17 )
    {
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v9, v20, 0);
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v9, v21, v17);
      goto LABEL_24;
    }
  }
  if ( !a3 )
  {
    v17 = (struct SFMLOGICALSURFACE *)v13;
    v48 = (struct SFMLOGICALSURFACE *)v13;
    SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v13, a1, 0);
LABEL_24:
    if ( a3 )
    {
      LOBYTE(v14) = 5;
      v23 = (struct _SURFOBJ *)(HmgReferenceCheckLock(a3, v14, 0) + 16);
      v47 = v23;
      SFMLOGICALSURFACE::SetShape(v17, a1, v23);
      *((_DWORD *)v17 + 41) |= 8u;
      v24 = (_DWORD *)(v9 + 116);
      if ( ((int)v23[1].dhpdev & 0x800) == 0 )
      {
        *(_DWORD *)(v9 + 132) &= ~0x20u;
        *v24 = 0;
        *(_DWORD *)(v9 + 120) = 0;
        *(_DWORD *)(v9 + 124) = 0;
        *(_DWORD *)(v9 + 128) = 0;
LABEL_30:
        v25 = a4[2] - *a4;
        v26 = a4[3] - a4[1];
        if ( v23 )
        {
          *((_DWORD *)v17 + 41) |= 1u;
          v27 = v26 + *(_DWORD *)(v9 + 36);
          v28 = v25 + *(_DWORD *)(v9 + 32);
        }
        else
        {
          v27 = *(_DWORD *)(v9 + 36);
          v28 = *(_DWORD *)(v9 + 32);
        }
        *(_DWORD *)(v9 + 40) = v28;
        *(_DWORD *)(v9 + 44) = v27;
        v29 = *((_DWORD *)v17 + 41);
        if ( (v29 & 1) != 0 && (*(_BYTE *)(v9 + 132) & 0x10) == 0 && (v29 & 8) != 0 )
        {
          SFMLOGICALSURFACE::StartSfmStateTracking(v17, a1, gpSfmState, v28);
          SFMLOGICALSURFACE::GetRedirectionInfo(v17, (enum _HLSURF_REDIRECTIONSTYLE *)&v52, &v51, &v50, 0, 0);
          v30 = DwmCombineDwmSpriteLogSurfFlags(*(_DWORD *)(v9 + 132), *((_DWORD *)v17 + 41));
          v42 = *(_DWORD *)(v9 + 68);
          *(_DWORD *)(v9 + 68) = 0;
          v31 = *(_DWORD *)v17;
          v32 = *(_DWORD *)v9;
          v41 = *(_DWORD *)(v9 + 76) >= 1;
          v40 = v50;
          v39 = v51;
          v38 = v52;
          v37 = v30;
          v33 = (void *)UserReferenceDwmApiPort();
          v45 = DwmAsyncUpdateSprite(v33, v32, v31, v37, (_DWORD *)(v9 + 48), a4, v38, v39, v40, v41, v42) >= 0;
          *((_DWORD *)v48 + 41) &= ~8u;
        }
        if ( *(int *)(v9 + 76) >= 1 )
          CheckAndProcessWindowResizeComplete(0, v43, v44);
        SFMLOGICALSURFACEREF_vDestructor(v56);
        goto LABEL_40;
      }
      pvBits = v23[8].pvBits;
      pvScan0 = v23[8].pvScan0;
      lDelta = v23[8].lDelta;
      iUniq = v23[8].iUniq;
      *v24 = pvBits;
      *(_DWORD *)(v9 + 120) = pvScan0;
      *(_DWORD *)(v9 + 124) = lDelta;
      *(_DWORD *)(v9 + 128) = iUniq;
      v9 = v49;
      *(_DWORD *)(v49 + 132) |= 0x20u;
    }
    else
    {
      *((_DWORD *)v17 + 41) &= 0xFFFFFFF6;
    }
    v23 = v47;
    goto LABEL_30;
  }
  v22 = 0;
  SFMLOGICALSURFACEREF_vDestructor(v56);
  _InterlockedDecrement((volatile signed __int32 *)(v9 + 8));
LABEL_43:
  v34 = (void (__stdcall *)(const wchar_t *, _DWORD))EtwTraceGreLockReleaseSemaphore;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  v35 = (void (__thiscall *)(_DWORD))GreReleaseSemaphoreInternal;
  ((void (__thiscall *)(_DWORD))GreReleaseSemaphoreInternal)(_ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v55);
  if ( !v53 )
    goto LABEL_49;
  v8 = (HDEV)a3;
LABEL_48:
  v22 = GdiHintSpriteShape(v8, 0, 0, v43, (int)v44);
LABEL_49:
  if ( a7 )
  {
    v34(L"ghsemGreLock", _ghsemGreLock);
    v35(_ghsemGreLock);
  }
  SFMLOGICALSURFACEREF_vDestructor(v57);
  return v22;
}
