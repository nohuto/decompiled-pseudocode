/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350
 * Callers:
 *     GreGetDIBColorTable @ 0x1C0017650 (GreGetDIBColorTable.c)
 *     GreRectVisible @ 0x1C001788C (GreRectVisible.c)
 *     GreExtTextOutRect @ 0x1C0017C44 (GreExtTextOutRect.c)
 *     NtGdiGetDCObject @ 0x1C0017D40 (NtGdiGetDCObject.c)
 *     GrePolyTextOutW @ 0x1C001836C (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C00188EC (GreExtTextOutWInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0018AAC (GreCreateCompatibleBitmapInternal.c)
 *     GreGetAppClipBox @ 0x1C0019498 (GreGetAppClipBox.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C002ED30 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     GreRealizePalette @ 0x1C003075C (GreRealizePalette.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00584D4 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreGetRandomRgn @ 0x1C005FC10 (GreGetRandomRgn.c)
 *     GreStretchDIBitsInternal @ 0x1C0074590 (GreStretchDIBitsInternal.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0075A3C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     NtGdiGetRandomRgn @ 0x1C0076170 (NtGdiGetRandomRgn.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00843B8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     NtGdiPatBlt @ 0x1C0084BB0 (NtGdiPatBlt.c)
 *     GreDrawStream @ 0x1C00850A0 (GreDrawStream.c)
 *     GreRealizeDefaultPalette @ 0x1C00BBEF8 (GreRealizeDefaultPalette.c)
 *     GreGetBoundsRect @ 0x1C00F61E8 (GreGetBoundsRect.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00FD250 (vAccNotifyDeleteSurfaceWrap.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C0104150 (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     NtGdiGetPixel @ 0x1C010CFB0 (NtGdiGetPixel.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C011F1A8 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     NtGdiFrameRgn @ 0x1C0131750 (NtGdiFrameRgn.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0138270 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiFillRgn @ 0x1C0139480 (NtGdiFillRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0139974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013B8A8 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C013EFF8 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1C01480A0 (NtGdiOffsetClipRgn.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0270F1C (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreWindowResizeComplete @ 0x1C0271130 (GreWindowResizeComplete.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C0276A94 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C027C2B8 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C027CD48 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C027D2F4 (GreDrawEscape.c)
 *     GreDeleteWnd @ 0x1C02882C0 (GreDeleteWnd.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C02946B4 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02948C8 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C029BF70 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029C1C0 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C029C4C0 (-RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C029C6A0 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C029C910 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C029CB20 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C029CD60 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C029CF90 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C029D200 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C029D4C0 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C029D780 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C029DA70 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C029DCC0 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C029DEE0 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C029E130 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiPtVisible @ 0x1C029FFE0 (NtGdiPtVisible.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C02A141C (GreCreateBitmapFromDxSurface.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B5E1C (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     GreSetDIBColorTable @ 0x1C02B7B40 (GreSetDIBColorTable.c)
 *     GreSetSystemPaletteUse @ 0x1C02B7DA0 (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02B84F0 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02B9E70 (NtGdiExtFloodFill.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02BC808 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C02BC938 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02BCAE0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079750 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C007A780 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007BFD0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     GreDereferenceObject @ 0x1C00AFA30 (GreDereferenceObject.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011B8C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012AF7C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C013FEDC (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029BA9C (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C029E3D4 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v24; // rcx
  __int64 CurrentThreadProcess; // rax
  HDC v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  HSURF *v30; // rdi
  struct SURFACE *v31; // rax
  HSURF v32; // rbp
  struct SURFACE *v33; // rbx
  char v34; // bl
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  _BYTE v40[4]; // [rsp+30h] [rbp-38h] BYREF
  int v41; // [rsp+34h] [rbp-34h] BYREF
  DC *v42[3]; // [rsp+38h] [rbp-30h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( v1 && *((_BYTE *)this + 49) )
  {
    v3 = *((_DWORD *)this + 6);
    v4 = *(_QWORD *)(v1 + 48);
    if ( (v3 & 0x1000) != 0 )
    {
      if ( *((_BYTE *)this + 49) )
      {
        if ( (v3 & 0x400) != 0 )
        {
          bUnHookRedir((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x400u;
          v3 = *((_DWORD *)this + 6);
        }
        if ( (v3 & 0x2000) != 0 )
        {
          bUnHookBmpDrv((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x2000u;
          v3 = *((_DWORD *)this + 6);
        }
        v5 = *((_QWORD *)this + 4);
        if ( v5 && *((_BYTE *)this + 49) && (v3 & 0x1000) != 0 )
        {
          v6 = *((_QWORD *)this + 4);
          if ( (*(_DWORD *)(v5 + 44) & 1) == 0 && *(_QWORD *)(v5 + 496) )
          {
            SURFACE::bUnMap(*(SURFACE **)(v5 + 496), this, (struct DC *)v5);
            v6 = *((_QWORD *)this + 4);
          }
          *(_DWORD *)(v6 + 44) &= ~1u;
          v7 = *((_QWORD *)this + 4);
          if ( (*(_DWORD *)(v7 + 36) & 0x4000) != 0 && *(_QWORD *)(v7 + 472) && *(_DWORD *)(v7 + 488) )
            GreUpdateSpriteDevLockEnd((DEVLOCKOBJ *)((char *)this + 32), *((_DWORD *)this + 6) & 0x400000);
        }
      }
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) &= ~0x4000u;
        DC::pSurface(*((DC **)this + 4), *(struct SURFACE **)(v4 + 2552));
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    v8 = *((_QWORD *)this + 4);
    if ( v8 )
    {
      if ( *((_BYTE *)this + 48) )
      {
        *(_DWORD *)(v8 + 40) &= ~2u;
        v8 = *((_QWORD *)this + 4);
        *((_BYTE *)this + 48) = 0;
      }
      if ( v8 )
      {
        v9 = (__int64 *)v8;
        if ( *((_DWORD *)this + 10) && (*(_DWORD *)(v8 + 44) & 2) != 0 )
        {
          XDCOBJ::RestoreAttributesHelper((DEVLOCKOBJ *)((char *)this + 32));
          *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) &= ~2u;
          v9 = (__int64 *)*((_QWORD *)this + 4);
          *((_DWORD *)this + 10) = 0;
        }
        v10 = *((unsigned int *)this + 11);
        v41 = 0;
        v11 = *v9;
        HmgDecrementExclusiveReferenceCountEx(v9, v10, &v41);
        if ( v41 )
          bDeleteDCInternalEx(v11, 0LL);
      }
    }
    *((_QWORD *)this + 4) = 0LL;
  }
  v12 = *((_DWORD *)this + 6);
  if ( (v12 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v14)
      || (CurrentProcess = PsGetCurrentProcess(v16, v15, v17),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v24),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v19 = *ThreadWin32Thread;
        if ( v19 )
        {
          *(_QWORD *)(v19 + 320) = 0LL;
          *(_QWORD *)(v19 + 312) = 0LL;
        }
      }
    }
  }
  else if ( (v12 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v20 = *((_DWORD *)this + 6);
  if ( (v20 & 8) != 0 )
    *((_DWORD *)this + 6) = v20 & 0xFFFFFFF7;
  v21 = *((_QWORD *)this + 1);
  if ( v21 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v21);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  if ( *((_QWORD *)this + 8) )
  {
    v26 = (HDC)*((_QWORD *)this + 9);
    v42[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v42, v26);
    LOBYTE(v27) = 5;
    v28 = HmgShareLock(*((_QWORD *)this + 7), v27);
    LOBYTE(v29) = 5;
    v30 = (HSURF *)v28;
    v31 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 8), v29);
    v32 = *v30;
    v33 = v31;
    DC::pSurface(v42[0], v31);
    DEC_SHARE_REF_CNT(v30);
    DEC_SHARE_REF_CNT(v33);
    GreDereferenceObject(v32);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    if ( this != (DEVLOCKOBJ *)-28LL )
      *((_DWORD *)v42[0] + 9) |= *((_DWORD *)this + 7);
    if ( (*((_DWORD *)v42[0] + 9) & 0x200) != 0 )
    {
      v34 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock, v35, v36, v37);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v34 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v40);
      v38 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 8), 0LL, 0LL, 0LL, 5);
      if ( v38 )
        SURFACE::bDeleteSurface(v38, 0LL, 1LL);
      *((_QWORD *)v42[0] + 63) = 0LL;
      DC::vClearRendering(v42[0]);
      *((_QWORD *)this + 8) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      if ( v34 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v39 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 8), 0LL, 0LL, 0LL, 5);
      if ( v39 )
        SURFACE::bDeleteSurface(v39, 0LL, 1LL);
      *((_QWORD *)v42[0] + 63) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
    }
    if ( v42[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v42);
    v42[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
}
