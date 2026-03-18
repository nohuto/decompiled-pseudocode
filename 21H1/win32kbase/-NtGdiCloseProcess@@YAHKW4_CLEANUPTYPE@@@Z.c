/*
 * XREFs of ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C000B02C
 * Callers:
 *     GdiProcessCallout @ 0x1C000AC40 (GdiProcessCallout.c)
 *     MultiUserNtGreCleanup @ 0x1C000C588 (MultiUserNtGreCleanup.c)
 * Callees:
 *     HmgSetLock @ 0x1C000EEC4 (HmgSetLock.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C004D010 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C005142C (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     bDeleteBrush @ 0x1C006D4D0 (bDeleteBrush.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C007B7C8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C008B0D8 (--1EPALOBJ@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00994D8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     bDeletePalette @ 0x1C009AEF0 (bDeletePalette.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C009B114 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C00A9CB8 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00A9D48 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     HmgNextOwned @ 0x1C00A9DE0 (HmgNextOwned.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00AAA2C (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00B4E88 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C30E0 (-vCleanupDCs@@YAXK@Z.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00D034C (-vGarbageCollectObjects@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C014987C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     EngDeleteDriverObj @ 0x1C0155EA0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C0155FC0 (EngLockDriverObj.c)
 */

__int64 __fastcall NtGdiCloseProcess(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // r12d
  int v5; // eax
  int v6; // eax
  unsigned int i; // ecx
  unsigned int Owned; // edi
  int v9; // eax
  unsigned int j; // ecx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  void (*v14)(void); // rax
  int v15; // eax
  unsigned int k; // ecx
  unsigned int v17; // edi
  int v18; // edi
  unsigned int m; // ecx
  HDRVOBJ v20; // rsi
  char v21; // al
  int v22; // eax
  unsigned int v23; // r15d
  _QWORD v25[2]; // [rsp+20h] [rbp-10h] BYREF
  HDRVOBJ hdo; // [rsp+80h] [rbp+50h] BYREF
  _QWORD *v27; // [rsp+88h] [rbp+58h] BYREF

  v4 = 1;
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x12u);
    v5 = qword_1C0257820 ? qword_1C0257820() : -1073741637;
    if ( v5 >= 0 && qword_1C0257828 )
      qword_1C0257828(2LL);
  }
  vCleanupDCs(a1);
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0xAu);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0xAu);
  }
  if ( qword_1C0257830 )
    v6 = qword_1C0257830();
  else
    v6 = -1073741637;
  if ( v6 >= 0 && qword_1C0257838 )
    qword_1C0257838(a1);
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x10u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0x10u);
  }
  hdo = 0LL;
  for ( i = 0; ; i = Owned )
  {
    Owned = HmgNextOwned(i, a1);
    if ( !Owned )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 0x10 )
      bDeleteBrush((HBRUSH)hdo);
  }
  DxLddmCleanupAtProcessDestroy(a1);
  if ( qword_1C0257840 )
    v9 = qword_1C0257840();
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C0257848 )
    qword_1C0257848(a1);
  if ( a2 == 2 )
  {
    vReleaseCurrentpMapProcForSurfaces(2LL);
    SURFACE::pdibDefault = 0LL;
    ppalDefault = 0LL;
    ppalMono = 0LL;
    hpalMono = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(5u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(5u);
  }
  vCleanupSurfaces(a1, a2);
  vGarbageCollectObjects();
  if ( a2 == 2 )
  {
    hrgnDefault = 0LL;
    prgnDefault = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(4u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(4u);
  }
  vCleanupRegions(a1);
  if ( a2 == 2 )
  {
    ghStockColorSpace = 0LL;
    MultiUserGreCleanupHmgRemoveAllLocks(9u);
  }
  else if ( a2 == 1 )
  {
    MultiUserGreCleanupHmgOwnRemoveAllLocks(9u);
  }
  hdo = 0LL;
  for ( j = 0; ; j = v11 )
  {
    v11 = HmgNextOwned(j, a1);
    if ( !v11 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 9 )
      bDeleteColorSpace((HCOLORSPACE)hdo);
  }
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x15u);
    if ( qword_1C0257850 )
      v12 = qword_1C0257850();
    else
      v12 = -1073741637;
    if ( v12 >= 0 && qword_1C0257858 )
      qword_1C0257858(a1);
    MultiUserGreCleanupHmgRemoveAllLocks(0);
    hdo = 0LL;
    v27 = 0LL;
    v25[0] = 0LL;
    if ( qword_1C0257870 )
      v13 = qword_1C0257870();
    else
      v13 = -1073741637;
    if ( v13 >= 0 )
    {
      if ( qword_1C0257878 )
        qword_1C0257878(&hdo, &v27, v25);
      if ( *(_QWORD *)hdo )
        Win32FreePool(*(_QWORD *)hdo);
      if ( *v27 )
        Win32FreePool(*v27);
      if ( v25[0] )
        Win32FreePool(v25[0]);
    }
    v14 = (void (*)(void))qword_1C0257528;
  }
  else
  {
    if ( a2 != 1 )
      goto LABEL_78;
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0);
    v15 = qword_1C0257860 ? qword_1C0257860() : -1073741637;
    if ( v15 < 0 )
      goto LABEL_78;
    v14 = (void (*)(void))qword_1C0257868;
  }
  if ( v14 )
    v14();
LABEL_78:
  hdo = 0LL;
  for ( k = 0; ; k = v17 )
  {
    v17 = HmgNextOwned(k, a1);
    if ( !v17 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 8 )
    {
      v25[0] = ghsemPalette;
      EngAcquireSemaphore(ghsemPalette);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v27, (HPALETTE)hdo);
      if ( v27 )
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v27);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v27);
      SEMOBJ::vUnlock((SEMOBJ *)v25);
    }
  }
  v18 = 0;
  hdo = 0LL;
  for ( m = 0; ; m = v23 )
  {
    v23 = HmgNextOwned(m, a1);
    if ( !v23 )
      break;
    v20 = hdo;
    v21 = BYTE2(hdo) & 0x1F;
    if ( (BYTE2(hdo) & 0x1F) == 6 )
    {
      if ( qword_1C0257880 )
        v22 = qword_1C0257880();
      else
        v22 = -1073741637;
      if ( v22 >= 0 && qword_1C0257888 )
        qword_1C0257888(v20);
    }
    else if ( v21 == 8 )
    {
      v4 = bDeletePalette((HPALETTE)hdo);
      if ( !v4 && !v18 )
        v18 = 1;
    }
    else if ( v21 == 28 )
    {
      HmgSetLock(hdo);
      EngLockDriverObj(v20);
      EngDeleteDriverObj(v20, 1, 1);
    }
    else
    {
      v4 = 0;
      if ( !v18 )
        v18 = 1;
    }
  }
  return v4;
}
