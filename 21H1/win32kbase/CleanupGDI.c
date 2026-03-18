/*
 * XREFs of CleanupGDI @ 0x1C00A74B8
 * Callers:
 *     CleanupResources @ 0x1C004D1BC (CleanupResources.c)
 * Callees:
 *     hbmSelectBitmap @ 0x1C002CF90 (hbmSelectBitmap.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x1C004DAB8 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C004DAFC (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C004E3B8 (DrvCleanupAndDestroyMDEV.c)
 *     DestroyMonitor @ 0x1C0057330 (DestroyMonitor.c)
 *     GreGetStockObject @ 0x1C006DD20 (GreGetStockObject.c)
 *     DestroyCacheDCEntries @ 0x1C0073548 (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C0076CDC (DelayedDestroyCacheDC.c)
 *     GreDeleteObject @ 0x1C008B120 (GreDeleteObject.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     GreSetBitmapOwnerEx @ 0x1C0091070 (GreSetBitmapOwnerEx.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00A7804 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00A7838 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 CleanupGDI()
{
  int v0; // ebx
  int v1; // edx
  int v2; // r8d
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax

  DestroyDC((HDC *)(gpDispInfo + 56));
  DestroyDC((HDC *)(gpDispInfo + 64));
  DestroyDC((HDC *)(gpDispInfo + 72));
  DestroyDC(&ghdcMem);
  DestroyDC(&ghdcMem2);
  v0 = -1073741637;
  if ( gfade )
  {
    v14 = qword_1C0257AE0 ? qword_1C0257AE0() : -1073741637;
    if ( v14 >= 0 && qword_1C0257AE8 )
      qword_1C0257AE8();
  }
  DestroyDC(&qword_1C0253308);
  if ( qword_1C0254BE0 )
  {
    GreGetStockObject(21);
    hbmSelectBitmap(qword_1C0254BE8);
    GreDeleteObject((struct HOBJ__ *)qword_1C0254BE0);
    qword_1C0254BE0 = 0LL;
  }
  DestroyDC(&qword_1C0254BE8);
  DestroyCacheDCEntries((__int64)gptiCurrent);
  DestroyCacheDCEntries(0LL);
  DelayedDestroyCacheDC(1, v1, v2);
  v3 = gpDispInfo;
  v4 = *(_QWORD *)(gpDispInfo + 80);
  if ( v4 )
  {
    GreSetBitmapOwnerEx(v4, -2147483646);
    GreDeleteObject(*(struct HOBJ__ **)(v3 + 80));
    *(_QWORD *)(v3 + 80) = 0LL;
  }
  if ( qword_1C0257B10 )
    v5 = qword_1C0257B10();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0257B18 )
    qword_1C0257B18();
  DestroyFont((HBRUSH *)&ghbrHungApp);
  DestroyFont((HBRUSH *)gpsi + 618);
  DestroyFont((HBRUSH *)&ghbrWhite);
  DestroyFont((HBRUSH *)&ghbrBlack);
  v6 = 4696LL;
  v7 = 31LL;
  do
  {
    DestroyFont((HBRUSH *)((char *)gpsi + v6));
    v6 += 8LL;
    --v7;
  }
  while ( v7 );
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
  DestroyAllDPIMETRICSFonts(gSessionDpiMetrics);
  DestroyAllDPIMETRICSFonts(g96DpiMetrics);
  if ( g_pWallpaperSettings )
  {
    if ( qword_1C0257AF0 )
      v0 = qword_1C0257AF0();
    if ( v0 >= 0 && qword_1C0257AF8 )
      qword_1C0257AF8(g_pWallpaperSettings);
    g_pWallpaperSettings = 0LL;
  }
  if ( g_hbmDesktopPattern )
  {
    GreDeleteObject((struct HOBJ__ *)g_hbmDesktopPattern);
    g_hbmDesktopPattern = 0LL;
  }
  v8 = *(_QWORD *)(gpDispInfo + 16);
  if ( v8 )
  {
    DrvCleanupAndDestroyMDEV(v8);
    Win32FreePool(*(_QWORD *)(gpDispInfo + 16), v9, v10);
    *(_QWORD *)(gpDispInfo + 16) = 0LL;
    *(_QWORD *)(gpDispInfo + 40) = 0LL;
  }
  result = gpDispInfo;
  v12 = *(_QWORD *)(gpDispInfo + 104);
  if ( v12 )
  {
    do
    {
      v13 = *(_QWORD *)(v12 + 56);
      result = DestroyMonitor((struct tagMONITOR *)v12);
      v12 = v13;
    }
    while ( v13 );
  }
  if ( gpMonitorCached )
    return DestroyMonitor(gpMonitorCached);
  return result;
}
