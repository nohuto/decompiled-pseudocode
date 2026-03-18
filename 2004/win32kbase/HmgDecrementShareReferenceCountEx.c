/*
 * XREFs of HmgDecrementShareReferenceCountEx @ 0x1C0089440
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C00144D0 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0014748 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     GreDCSelectPen @ 0x1C001E2D0 (GreDCSelectPen.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0023C58 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C003147C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     EngAssociateSurface @ 0x1C003EE20 (EngAssociateSurface.c)
 *     EngModifySurface @ 0x1C0043F20 (EngModifySurface.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x1C004A2D0 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0052410 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0079D00 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C007FA1C (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00822A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0088170 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00903E0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0091F88 (--1EPALOBJ@@QEAA@XZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0092CA0 (NtGdiDeleteObjectApp.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00958C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00A7384 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00A73C8 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00BD990 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00BDF20 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C00BE134 (bDynamicModeChange.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00BF4C0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     bMigrateSurfaceForConversion @ 0x1C00BF860 (bMigrateSurfaceForConversion.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00C0784 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     bDeleteSurface @ 0x1C00C0E40 (bDeleteSurface.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00C0E8C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     bDeletePalette @ 0x1C00C0ED0 (bDeletePalette.c)
 *     bDfbSurfacesMigrated @ 0x1C00C1830 (bDfbSurfacesMigrated.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00C1AA0 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00C5250 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00C8428 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C01402E0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0142280 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0145330 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0146170 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C0146370 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C014829C (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     bInitBMOBJ @ 0x1C0295908 (bInitBMOBJ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008A640 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008D624 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCountEx(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  GdiHandleManager *v8; // rdi
  unsigned int v9; // eax
  struct _ENTRY *v10; // rax
  struct _ENTRY *v11; // rbx
  bool v12; // zf
  char v13; // al
  unsigned int v14; // edi
  unsigned int v15; // ebx
  GdiHandleManager *v16; // rsi
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // r9
  _DWORD *v21; // rdx
  unsigned int v22; // ebx
  __int64 v23; // rdx
  unsigned int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 CurrentProcess; // rax
  __int64 v29; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _ENTRY *v31; // [rsp+20h] [rbp-48h] BYREF
  int v32; // [rsp+28h] [rbp-40h]
  int v33; // [rsp+2Ch] [rbp-3Ch]
  __int64 v34; // [rsp+70h] [rbp+8h] BYREF

  if ( a2 )
    *a2 = 0;
  v4 = (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000;
  v34 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v34);
  if ( (unsigned __int8)KeIsAttachedProcess(v5) )
  {
    CurrentProcess = PsGetCurrentProcess(v7, v6);
    PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v29);
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  v8 = gpHandleManager;
  v32 = 1;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, v4);
  v10 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v8 + 2), v9, 0);
  v31 = v10;
  v11 = v10;
  if ( !v10 )
  {
    KeLeaveCriticalRegion();
    return 0LL;
  }
  _m_prefetchw((char *)v10 + 8);
  v12 = (*((_BYTE *)v10 + 15) & 0x20) == 0;
  v33 = *((_DWORD *)v10 + 2);
  if ( !v12 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v31);
    if ( v32 )
    {
      v11 = v31;
      goto LABEL_7;
    }
    return 0LL;
  }
LABEL_7:
  if ( a2 )
    *a2 = (*((_BYTE *)v11 + 15) & 8) != 0;
  v13 = *((_BYTE *)v11 + 14);
  v14 = *(_DWORD *)(a1 + 8);
  if ( v13 == 5 )
  {
    TrackObjectReferenceDecrement(0LL, *(_QWORD *)(a1 + 680));
  }
  else if ( v13 == 16 )
  {
    TrackObjectReferenceDecrement(2LL, *(_QWORD *)(a1 + 136));
  }
  --*(_DWORD *)(a1 + 8);
  v15 = *(_DWORD *)v11 & 0xFFFFFF;
  if ( v15 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v15,
                                  1)
           + 13) == HIWORD(v15) )
        v15 = (unsigned __int16)v15;
    }
    else
    {
      v15 = (unsigned __int16)v15;
    }
  }
  v16 = gpHandleManager;
  v17 = *((_QWORD *)gpHandleManager + 2);
  v18 = *(_DWORD *)(v17 + 2056);
  if ( v15 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
    goto LABEL_40;
  v19 = ((v15 - v18) >> 16) + 1;
  if ( v15 < v18 )
    v19 = 0LL;
  v20 = *(_QWORD *)(v17 + 8 * v19 + 8);
  if ( (_DWORD)v19 )
    v15 += ((1 - (_DWORD)v19) << 16) - v18;
  if ( v15 >= *(_DWORD *)(v20 + 20) )
LABEL_40:
    v21 = 0LL;
  else
    v21 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                     + 16LL * (unsigned __int8)v15
                     + 8);
  v22 = (unsigned __int16)*v21 | (*v21 >> 8) & 0xFF0000;
  if ( v22 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v21,
                                  1)
           + 13) == HIWORD(v22) )
        v22 = (unsigned __int16)v22;
    }
    else
    {
      v22 = (unsigned __int16)*v21;
    }
  }
  v23 = *((_QWORD *)v16 + 2);
  v24 = *(_DWORD *)(v23 + 2056);
  if ( v22 < v24 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
  {
    v25 = ((v22 - v24) >> 16) + 1;
    if ( v22 < v24 )
      v25 = 0LL;
    v26 = *(_QWORD *)(v23 + 8 * v25 + 8);
    if ( (_DWORD)v25 )
      v22 += ((1 - (_DWORD)v25) << 16) - v24;
    *(_DWORD *)(*(_QWORD *)v26 + 24LL * v22 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v26 + 24) + 8 * ((unsigned __int64)v22 >> 8)) + 16LL * (unsigned __int8)v22,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return v14;
}
