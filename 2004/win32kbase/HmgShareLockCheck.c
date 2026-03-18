/*
 * XREFs of HmgShareLockCheck @ 0x1C0088B80
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C00144D0 (GreCreatePatternBrushInternal.c)
 *     GreDCSelectPen @ 0x1C001E2D0 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C001E510 (GreDCSelectBrush.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C002730C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0052410 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C00903E0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     GreSetBitmapOwnerEx @ 0x1C0099670 (GreSetBitmapOwnerEx.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00A7384 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B8358 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bMigrateSurfaceForConversion @ 0x1C00BF860 (bMigrateSurfaceForConversion.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00C0784 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00C10F4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     bDfbSurfacesMigrated @ 0x1C00C1830 (bDfbSurfacesMigrated.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C00C8428 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     hbmSelectBitmapInternal @ 0x1C00CFF50 (hbmSelectBitmapInternal.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C01402E0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0146170 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0147884 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     bInitBRUSHOBJ @ 0x1C0293494 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C0295908 (bInitBMOBJ.c)
 * Callees:
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0086C54 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C0151198 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

__int64 __fastcall HmgShareLockCheck(unsigned int a1, char a2)
{
  __int16 v3; // ebx^2
  __int64 v4; // rsi
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // ebx
  GdiHandleManager *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r9
  _DWORD *v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // r10
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v24; // rdx
  unsigned __int16 *v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+38h] [rbp-30h]

  v3 = HIWORD(a1);
  v25 = 0LL;
  v26 = 0;
  v4 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v26 )
  {
    v5 = v25;
    if ( *((_BYTE *)v25 + 14) == a2 && v25[6] == v3 )
    {
      v6 = *(_DWORD *)v25 & 0xFFFFFF;
      if ( v6 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *v25,
                                      1)
               + 13) == HIWORD(v6) )
            v6 = (unsigned __int16)v6;
        }
        else
        {
          v6 = *v25;
        }
      }
      v7 = *((_QWORD *)gpHandleManager + 2);
      v8 = *(_DWORD *)(v7 + 2056);
      if ( v6 >= v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
        goto LABEL_43;
      v9 = ((v6 - v8) >> 16) + 1;
      if ( v6 < v8 )
        v9 = 0LL;
      v10 = *(_QWORD *)(v7 + 8 * v9 + 8);
      if ( (_DWORD)v9 )
        v6 += ((1 - (_DWORD)v9) << 16) - v8;
      if ( v6 >= *(_DWORD *)(v10 + 20) )
LABEL_43:
        v4 = 0LL;
      else
        v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                       + 16LL * (unsigned __int8)v6
                       + 8);
      ++*(_DWORD *)(v4 + 8);
      if ( a2 == 5 )
      {
        v24 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v4 + 680);
        if ( v24 && qword_1C02473D8 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            qword_1C02473D8,
            v24,
            1);
      }
      else if ( a2 == 16 )
      {
        TrackObjectReferenceIncrement(
          2u,
          *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v4 + 136));
      }
    }
    v11 = *v5 & 0xFFFFFF;
    if ( v11 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *(unsigned __int16 *)v5,
                                    1)
             + 13) == HIWORD(v11) )
          v11 = (unsigned __int16)v11;
      }
      else
      {
        v11 = *(unsigned __int16 *)v5;
      }
    }
    v12 = gpHandleManager;
    v13 = *((_QWORD *)gpHandleManager + 2);
    v14 = *(_DWORD *)(v13 + 2056);
    if ( v11 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
      goto LABEL_49;
    v15 = ((v11 - v14) >> 16) + 1;
    if ( v11 < v14 )
      v15 = 0LL;
    v16 = *(_QWORD *)(v13 + 8 * v15 + 8);
    if ( (_DWORD)v15 )
      v11 += ((1 - (_DWORD)v15) << 16) - v14;
    if ( v11 >= *(_DWORD *)(v16 + 20) )
LABEL_49:
      v17 = 0LL;
    else
      v17 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v11 >> 8))
                       + 16LL * (unsigned __int8)v11
                       + 8);
    v18 = (unsigned __int16)*v17 | (*v17 >> 8) & 0xFF0000;
    if ( v18 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v17,
                                    1)
             + 13) == HIWORD(v18) )
          v18 = (unsigned __int16)v18;
      }
      else
      {
        v18 = (unsigned __int16)*v17;
      }
    }
    v19 = *((_QWORD *)v12 + 2);
    v20 = *(_DWORD *)(v19 + 2056);
    if ( v18 < v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16) )
    {
      v21 = ((v18 - v20) >> 16) + 1;
      if ( v18 < v20 )
        v21 = 0LL;
      v22 = *(_QWORD *)(v19 + 8 * v21 + 8);
      if ( (_DWORD)v21 )
        v18 += ((1 - (_DWORD)v21) << 16) - v20;
      *(_DWORD *)(*(_QWORD *)v22 + 24LL * v18 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * ((unsigned __int64)v18 >> 8)) + 16LL * (unsigned __int8)v18,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  return v4;
}
