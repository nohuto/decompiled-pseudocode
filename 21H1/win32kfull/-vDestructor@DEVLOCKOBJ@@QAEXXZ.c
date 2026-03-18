/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730
 * Callers:
 *     _GreRealizeDefaultPalette@8 @ 0x12656 (_GreRealizeDefaultPalette@8.c)
 *     ?vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z @ 0x213E8 (-vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z.c)
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _GreRectVisible@8 @ 0x53700 (_GreRectVisible@8.c)
 *     _GrePolyTextOutW@16 @ 0x564DC (_GrePolyTextOutW@16.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     _GreGetRandomRgn@12 @ 0x5D7A0 (_GreGetRandomRgn@12.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _NtGdiGetDCObject@8 @ 0x78A34 (_NtGdiGetDCObject@8.c)
 *     _GreExtTextOutRect@8 @ 0x78BA6 (_GreExtTextOutRect@8.c)
 *     _GreGetAppClipBox@8 @ 0x796EA (_GreGetAppClipBox@8.c)
 *     _GreGetDIBColorTable@16 @ 0x7B6B4 (_GreGetDIBColorTable@16.c)
 *     _vAccNotifyDeleteSurfaceWrap@4 @ 0x9A326 (_vAccNotifyDeleteSurfaceWrap@4.c)
 *     _GreGetBoundsRect@12 @ 0xAD1EA (_GreGetBoundsRect@12.c)
 *     ?bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z @ 0xB3164 (-bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z.c)
 *     ?GreLineTo@@YGHPAUHDC__@@HH@Z @ 0xBBB84 (-GreLineTo@@YGHPAUHDC__@@HH@Z.c)
 *     _GreRealizePalette@4 @ 0xBF88E (_GreRealizePalette@4.c)
 *     _NtGdiGetPixel@12 @ 0xBFE70 (_NtGdiGetPixel@12.c)
 *     _GreSetDIBColorTable@16 @ 0xC11D0 (_GreSetDIBColorTable@16.c)
 *     ?vProfileDriver@PDEVOBJ@@QAEXXZ @ 0xE4A94 (-vProfileDriver@PDEVOBJ@@QAEXXZ.c)
 *     _GreSpDwmSyncCaptureSurfaceBits@28 @ 0x1CE8ED (_GreSpDwmSyncCaptureSurfaceBits@28.c)
 *     _GreWindowResizeComplete@8 @ 0x1CEAC5 (_GreWindowResizeComplete@8.c)
 *     _GreDrawEscape@16 @ 0x1D89E6 (_GreDrawEscape@16.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     _GreDeleteWnd@4 @ 0x1E6F47 (_GreDeleteWnd@4.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0x1F4909 (-bDelete@COLORTRANSFORMOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QAEPAXAAVXDCOBJ@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z @ 0x1F4A5E (-hCreate@COLORTRANSFORMOBJ@@QAEPAXAAVXDCOBJ@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z.c)
 *     ?RedirAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x1FAE71 (-RedirAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?RedirBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1FAFE2 (-RedirBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@.c)
 *     ?RedirDrawEscape@@YGKPAU_SURFOBJ@@KPAU_CLIPOBJ@@PAU_RECTL@@KPAX@Z @ 0x1FB1A9 (-RedirDrawEscape@@YGKPAU_SURFOBJ@@KPAU_CLIPOBJ@@PAU_RECTL@@KPAX@Z.c)
 *     ?RedirDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTATE@@@Z @ 0x1FB2C8 (-RedirDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSS.c)
 *     ?RedirFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1FB445 (-RedirFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?RedirGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x1FB57B (-RedirGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PA.c)
 *     ?RedirLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1FB6CD (-RedirLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?RedirNineGrid@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAUNINEGRID@@PAU_BLENDOBJ@@PAX@Z @ 0x1FB819 (-RedirNineGrid@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAUNINEGRID@@PAU_BLENDOB.c)
 *     ?RedirPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_POINTFIX@@PAU_RECTL@@4K@Z @ 0x1FB996 (-RedirPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PA.c)
 *     ?RedirStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1FBB44 (-RedirStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL.c)
 *     ?RedirStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAU_BRUSHOBJ@@K@Z @ 0x1FBCEC (-RedirStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POI.c)
 *     ?RedirStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1FBEAA (-RedirStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@P.c)
 *     ?RedirStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1FBFF6 (-RedirStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POIN.c)
 *     ?RedirTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x1FC132 (-RedirTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5.c)
 *     ?RedirTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x1FC284 (-RedirTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 *     ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A (-NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     _NtGdiOffsetClipRgn@12 @ 0x1FED41 (_NtGdiOffsetClipRgn@12.c)
 *     _NtGdiPtVisible@12 @ 0x1FEEF2 (_NtGdiPtVisible@12.c)
 *     _GreCreateBitmapFromDxSurface@28 @ 0x2012E7 (_GreCreateBitmapFromDxSurface@28.c)
 *     ?GreCheckBitmapBits@@YGHPAUHDC__@@PAXPAU_DEVBITMAPINFO@@1PAE@Z @ 0x21B680 (-GreCheckBitmapBits@@YGHPAUHDC__@@PAXPAU_DEVBITMAPINFO@@1PAE@Z.c)
 *     ?GreSetICMMode@@YGHPAUHDC__@@KK@Z @ 0x21BB11 (-GreSetICMMode@@YGHPAUHDC__@@KK@Z.c)
 *     ?iSetMapMode@DC@@QAEHH@Z @ 0x21CB7F (-iSetMapMode@DC@@QAEHH@Z.c)
 *     _GreSetSystemPaletteUse@8 @ 0x21E4BA (_GreSetSystemPaletteUse@8.c)
 *     _NtGdiUpdateColors@4 @ 0x21EB48 (_NtGdiUpdateColors@4.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QAEJXZ @ 0x222762 (-ipfdDevMaxGet@XDCOBJ@@QAEJXZ.c)
 *     _GreDescribePixelFormat@16 @ 0x222832 (_GreDescribePixelFormat@16.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     _GreDereferenceObject@8 @ 0x206B0 (_GreDereferenceObject@8.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AAEXXZ @ 0x5E708 (-RestoreAttributesHelper@XDCOBJ@@AAEXXZ.c)
 *     ?vClearRendering@DC@@QAEXXZ @ 0x5FB80 (-vClearRendering@DC@@QAEXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QAE@XZ @ 0xAB032 (--0DCVISRGNSHARELOCK@@QAE@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QAEXH@Z @ 0xABB00 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QAEXH@Z.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     ?bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z @ 0x1FAAC3 (-bUnHookBmpDrv@@YGHAAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YGHAAVXDCOBJ@@@Z @ 0x1FC439 (-bUnHookRedir@@YGHAAVXDCOBJ@@@Z.c)
 */

void __thiscall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  void (__fastcall *v2)(_DWORD); // esi
  int v3; // ecx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  PKTHREAD CurrentThread; // esi
  int *ThreadWin32Thread; // eax
  int v9; // eax
  int v10; // eax
  int *v11; // ecx
  int v12; // edx
  int v13; // eax
  PKTHREAD v14; // edi
  int *v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  HSURF *v19; // eax
  int v20; // edx
  HSURF *v21; // edi
  struct SURFACE *v22; // esi
  HSURF v23; // ebx
  DEVLOCKOBJ *v24; // esi
  _DWORD *v25; // eax
  int v26; // eax
  void (__stdcall *v27)(const wchar_t *, _DWORD); // ebx
  void (__fastcall *v28)(_DWORD); // esi
  int v29; // eax
  HDC v30; // [esp-4h] [ebp-2Ch]
  struct XDCOBJ *v31; // [esp+0h] [ebp-28h]
  DC *v32[3]; // [esp+Ch] [ebp-1Ch] BYREF
  DEVLOCKOBJ *v33; // [esp+18h] [ebp-10h]
  int v34; // [esp+1Ch] [ebp-Ch]
  int v35; // [esp+20h] [ebp-8h] BYREF
  char v36; // [esp+26h] [ebp-2h] BYREF
  char v37; // [esp+27h] [ebp-1h]

  v2 = (void (__fastcall *)(_DWORD))GreReleaseSemaphoreInternal;
  v3 = *((_DWORD *)this + 5);
  v33 = this;
  if ( v3 && *((_BYTE *)this + 33) )
  {
    v4 = *((_DWORD *)this + 3);
    v5 = *(_DWORD *)(v3 + 36);
    if ( (v4 & 0x1000) == 0 )
      goto LABEL_24;
    if ( *((_BYTE *)this + 33) )
    {
      if ( (v4 & 0x400) != 0 )
      {
        bUnHookRedir(v31);
        *((_DWORD *)this + 3) &= ~0x400u;
        v4 = *((_DWORD *)this + 3);
      }
      if ( (v4 & 0x2000) != 0 )
      {
        bUnHookBmpDrv(v31);
        *((_DWORD *)this + 3) &= ~0x2000u;
      }
      DEVLOCKOBJ::vFlushSpriteUpdates(this, 1);
      v4 = *((_DWORD *)this + 3);
    }
    if ( (v4 & 0x10) != 0 )
    {
      *(_DWORD *)(*((_DWORD *)this + 5) + 24) &= ~0x4000u;
      DC::pSurface(*((DC **)this + 5), *(struct SURFACE **)(v5 + 1820));
    }
    v6 = *((_DWORD *)this + 5);
    if ( v6 && *((_BYTE *)this + 33) && (*((_DWORD *)this + 3) & 0x1000) != 0 && (*(_DWORD *)(v6 + 24) & 0x200) != 0 )
    {
      GreAcquireSemaphoreSharedInternal(_ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", _ghsemDCVisRgn);
      if ( !*((_DWORD *)this + 9) )
        DC::vClearRendering(*((DC **)this + 5));
      if ( (*(_DWORD *)(*((_DWORD *)this + 5) + 24) & 0x4000) == 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
          {
            v9 = *ThreadWin32Thread;
            if ( v9 )
              *(_DWORD *)(v9 + 180) &= ~1u;
          }
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
      v2 = (void (__fastcall *)(_DWORD))GreReleaseSemaphoreInternal;
      GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
    }
    else
    {
LABEL_24:
      v2 = (void (__fastcall *)(_DWORD))GreReleaseSemaphoreInternal;
    }
    v10 = *((_DWORD *)this + 5);
    if ( v10 )
    {
      if ( *((_BYTE *)this + 32) )
      {
        *(_DWORD *)(v10 + 28) &= ~2u;
        v10 = *((_DWORD *)this + 5);
        *((_BYTE *)this + 32) = 0;
      }
      if ( v10 )
      {
        v11 = (int *)v10;
        if ( *((_DWORD *)this + 6) && (*(_BYTE *)(v10 + 32) & 2) != 0 )
        {
          XDCOBJ::RestoreAttributesHelper((DEVLOCKOBJ *)((char *)this + 20));
          *(_DWORD *)(*((_DWORD *)this + 5) + 32) &= ~2u;
          v11 = (int *)*((_DWORD *)this + 5);
          *((_DWORD *)this + 6) = 0;
        }
        v12 = *((_DWORD *)this + 7);
        v35 = 0;
        v34 = *v11;
        HmgDecrementExclusiveReferenceCountEx(v11, v12, &v35);
        if ( v35 )
          bDeleteDCInternalEx(v34, 0);
      }
    }
    *((_DWORD *)this + 5) = 0;
  }
  v13 = *((_DWORD *)this + 3);
  if ( (v13 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 3) &= ~0x1000u;
    v14 = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
    {
      v15 = (int *)PsGetThreadWin32Thread(v14);
      if ( v15 )
      {
        v16 = *v15;
        if ( v16 )
        {
          *(_DWORD *)(v16 + 176) = 0;
          *(_DWORD *)(v16 + 172) = 0;
        }
      }
    }
  }
  else if ( (v13 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 3) &= ~0x800000u;
  }
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_DWORD *)this);
    v2(*(_DWORD *)this);
  }
  v17 = *((_DWORD *)this + 3);
  if ( (v17 & 8) != 0 )
    *((_DWORD *)this + 3) = v17 & 0xFFFFFFF7;
  if ( *((_DWORD *)this + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", *((_DWORD *)this + 1));
    v2(*((_DWORD *)this + 1));
  }
  if ( *((_DWORD *)this + 10) )
  {
    v30 = (HDC)*((_DWORD *)this + 11);
    v32[1] = 0;
    v32[2] = 0;
    XDCOBJ::vLock((XDCOBJ *)v32, v30);
    LOBYTE(v18) = 5;
    v19 = (HSURF *)HmgShareLock(*((_DWORD *)this + 9), v18);
    LOBYTE(v20) = 5;
    v21 = v19;
    v22 = (struct SURFACE *)HmgShareLock(*((_DWORD *)this + 10), v20);
    v23 = *v21;
    DC::pSurface(v32[0], v22);
    DEC_SHARE_REF_CNT(v21);
    DEC_SHARE_REF_CNT(v22);
    GreDereferenceObject(v23, 1);
    v24 = v33;
    v25 = (_DWORD *)((char *)v33 + 16);
    *((_DWORD *)v33 + 11) = 0;
    *((_DWORD *)v24 + 9) = 0;
    if ( v25 )
      *((_DWORD *)v32[0] + 6) |= *v25;
    if ( (*((_DWORD *)v32[0] + 6) & 0x200) != 0 )
    {
      v37 = 0;
      if ( !GreGetLockCount() && !GreIsSemaphoreOwnedOrSharedByCurrentThread(_ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(_ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", _ghsemGreLock);
        v37 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v36);
      v26 = HmgShareUnlockRemoveObject(*((_DWORD *)v24 + 10), 0, 0, 0, 5);
      if ( v26 )
        SURFACE::bDeleteSurface(v26, 0, 1);
      *((_DWORD *)v32[0] + 127) = 0;
      DC::vClearRendering(v32[0]);
      v27 = (void (__stdcall *)(const wchar_t *, _DWORD))EtwTraceGreLockReleaseSemaphore;
      *((_DWORD *)v24 + 10) = 0;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
      v28 = (void (__fastcall *)(_DWORD))GreReleaseSemaphoreInternal;
      GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
      if ( v37 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
        GreReleaseSemaphoreInternal(_ghsemGreLock);
      }
    }
    else
    {
      v29 = HmgShareUnlockRemoveObject(*((_DWORD *)v24 + 10), 0, 0, 0, 5);
      if ( v29 )
        SURFACE::bDeleteSurface(v29, 0, 1);
      v27 = (void (__stdcall *)(const wchar_t *, _DWORD))EtwTraceGreLockReleaseSemaphore;
      *((_DWORD *)v32[0] + 127) = 0;
      *((_DWORD *)v24 + 10) = 0;
      v28 = (void (__fastcall *)(_DWORD))GreReleaseSemaphoreInternal;
    }
    if ( v32[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v32);
    v32[0] = 0;
    v27(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    v28(_ghsemDynamicModeChange);
  }
}
