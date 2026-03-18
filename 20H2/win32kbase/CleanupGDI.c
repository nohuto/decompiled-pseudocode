/*
 * XREFs of CleanupGDI @ 0x1C00201C8
 * Callers:
 *     CleanupResources @ 0x1C00BC728 (CleanupResources.c)
 * Callees:
 *     GreSetBitmapOwnerEx @ 0x1C001DA90 (GreSetBitmapOwnerEx.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0020514 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C002053C (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0020570 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     GreGetStockObject @ 0x1C00326E0 (GreGetStockObject.c)
 *     GreDeleteObject @ 0x1C0039BA0 (GreDeleteObject.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     DestroyCacheDCEntries @ 0x1C005E338 (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C005E8A8 (DelayedDestroyCacheDC.c)
 *     hbmSelectBitmap @ 0x1C009AF40 (hbmSelectBitmap.c)
 *     DestroyMonitor @ 0x1C00B4360 (DestroyMonitor.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C00BB878 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00BC1E8 (DrvCleanupAndDestroyMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 CleanupGDI()
{
  int v0; // ebx
  __int64 v1; // rdi
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  int v9; // eax

  DestroyDC((HDC *)(gpDispInfo + 56));
  DestroyDC((HDC *)(gpDispInfo + 64));
  DestroyDC((HDC *)(gpDispInfo + 72));
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  v0 = -1073741637;
  if ( gfade )
  {
    v9 = qword_1C024FB20 ? qword_1C024FB20() : -1073741637;
    if ( v9 >= 0 && qword_1C024FB28 )
      qword_1C024FB28();
  }
  DestroyDC(&qword_1C024B368);
  if ( qword_1C024CC50 )
  {
    GreGetStockObject(21LL);
    hbmSelectBitmap(qword_1C024CC58);
    GreDeleteObject(qword_1C024CC50);
    qword_1C024CC50 = 0LL;
  }
  DestroyDC(&qword_1C024CC58);
  DestroyCacheDCEntries(gptiCurrent);
  DestroyCacheDCEntries(0LL);
  DelayedDestroyCacheDC(1LL);
  v1 = gpDispInfo;
  v2 = *(_QWORD *)(gpDispInfo + 80);
  if ( v2 )
  {
    GreSetBitmapOwnerEx(v2, 2147483650LL);
    GreDeleteObject(*(HBRUSH *)(v1 + 80));
    *(_QWORD *)(v1 + 80) = 0LL;
  }
  if ( qword_1C024FB50 )
    v3 = qword_1C024FB50();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C024FB58 )
    qword_1C024FB58();
  DestroyFont(&ghbrHungApp);
  DestroyFont((HFONT *)gpsi + 618);
  DestroyFont(&ghbrWhite);
  DestroyFont(&ghbrBlack);
  v4 = 4696LL;
  v5 = 31LL;
  do
  {
    DestroyFont((HFONT *)((char *)gpsi + v4));
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
  DestroyRegion((HRGN *)(gpDispInfo + 120));
  DestroyRegion(&ghrgnInvalidSum);
  DestroyRegion(&ghrgnVisNew);
  DestroyRegion(&ghrgnSWP1);
  DestroyRegion(&ghrgnValid);
  DestroyRegion(&ghrgnValidSum);
  DestroyRegion(&ghrgnInvalid);
  DestroyRegion(&ghrgnInv0);
  DestroyRegion(&ghrgnInv1);
  DestroyRegion(&ghrgnInv2);
  DestroyRegion(&ghrgnGDC);
  DestroyRegion(&ghrgnSCR);
  DestroyRegion(&ghrgnSPB1);
  DestroyRegion(&ghrgnSPB2);
  DestroyRegion(&ghrgnSW);
  DestroyRegion(&ghrgnScrl1);
  DestroyRegion(&ghrgnScrl2);
  DestroyRegion(&ghrgnScrlVis);
  DestroyRegion(&ghrgnScrlSrc);
  DestroyRegion(&ghrgnScrlDst);
  DestroyRegion(&ghrgnScrlValid);
  DestroyAllDPIMETRICSFonts(&gSessionDpiMetrics);
  DestroyAllDPIMETRICSFonts(&g96DpiMetrics);
  if ( g_pWallpaperSettings )
  {
    if ( qword_1C024FB30 )
      v0 = qword_1C024FB30();
    if ( v0 >= 0 && qword_1C024FB38 )
      qword_1C024FB38(g_pWallpaperSettings);
    g_pWallpaperSettings = 0LL;
  }
  if ( g_hbmDesktopPattern )
  {
    GreDeleteObject(g_hbmDesktopPattern);
    g_hbmDesktopPattern = 0LL;
  }
  if ( *(_QWORD *)(gpDispInfo + 16) )
  {
    DrvCleanupAndDestroyMDEV();
    Win32FreePool(*(_QWORD *)(gpDispInfo + 16));
    *(_QWORD *)(gpDispInfo + 16) = 0LL;
    *(_QWORD *)(gpDispInfo + 40) = 0LL;
  }
  result = gpDispInfo;
  v7 = *(_QWORD **)(gpDispInfo + 104);
  if ( v7 )
  {
    do
    {
      v8 = (_QWORD *)v7[7];
      result = DestroyMonitor(v7);
      v7 = v8;
    }
    while ( v8 );
  }
  if ( gpMonitorCached )
    return DestroyMonitor(gpMonitorCached);
  return result;
}
