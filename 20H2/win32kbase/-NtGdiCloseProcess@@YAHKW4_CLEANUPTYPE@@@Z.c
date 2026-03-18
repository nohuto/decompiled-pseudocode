/*
 * XREFs of ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C001783C
 * Callers:
 *     GdiProcessCallout @ 0x1C0017450 (GdiProcessCallout.c)
 *     MultiUserNtGreCleanup @ 0x1C0084BB8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0011738 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C00186D0 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0018E18 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C0019034 (HmgNextGarbageCollectible.c)
 *     bDeletePalette @ 0x1C001A6A0 (bDeletePalette.c)
 *     HmgSetLock @ 0x1C001F1FC (HmgSetLock.c)
 *     bDeleteBrush @ 0x1C00371E0 (bDeleteBrush.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C003D898 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004AA4C (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C004D598 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C00924C4 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0092554 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     HmgNextOwned @ 0x1C00925E0 (HmgNextOwned.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0092708 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C0092740 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C2B54 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgIsProcessCleanupRequired @ 0x1C00CF338 (HmgIsProcessCleanupRequired.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0718 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0810 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C014108C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     EngDeleteDriverObj @ 0x1C014D5A0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C014D6C0 (EngLockDriverObj.c)
 */

__int64 __fastcall NtGdiCloseProcess(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // r12d
  int v5; // eax
  int v6; // eax
  unsigned int i; // ecx
  unsigned int Owned; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcessWin32Process; // rax
  unsigned int j; // ecx
  unsigned int GarbageCollectible; // ebx
  unsigned int k; // ecx
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // eax
  void (*v21)(void); // rax
  int v22; // eax
  unsigned int m; // ecx
  unsigned int v24; // ebx
  int v25; // ebx
  unsigned int n; // ecx
  HDRVOBJ v27; // rsi
  char v28; // al
  int v29; // eax
  unsigned int v30; // r14d
  _QWORD v32[2]; // [rsp+20h] [rbp-10h] BYREF
  HDRVOBJ hdo; // [rsp+80h] [rbp+50h] BYREF
  _QWORD *v34; // [rsp+88h] [rbp+58h] BYREF

  v4 = 1;
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x12u);
    v5 = qword_1C024F860 ? qword_1C024F860() : -1073741637;
    if ( v5 >= 0 && qword_1C024F868 )
      qword_1C024F868(2LL);
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
  if ( qword_1C024F870 )
    v6 = qword_1C024F870();
  else
    v6 = -1073741637;
  if ( v6 >= 0 && qword_1C024F878 )
    qword_1C024F878(a1);
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
  if ( qword_1C024F880 )
    v9 = qword_1C024F880();
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C024F888 )
    qword_1C024F888(a1);
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
  if ( gGarbageCollectionPendingCount )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11, v10, v12, v13);
    if ( (unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process) )
    {
      hdo = 0LL;
      for ( j = 0; ; j = GarbageCollectible )
      {
        GarbageCollectible = HmgNextGarbageCollectible(j);
        if ( !GarbageCollectible )
          break;
      }
    }
  }
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
  for ( k = 0; ; k = v18 )
  {
    v18 = HmgNextOwned(k, a1);
    if ( !v18 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 9 )
      bDeleteColorSpace((HCOLORSPACE)hdo);
  }
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x15u);
    if ( qword_1C024F890 )
      v19 = qword_1C024F890();
    else
      v19 = -1073741637;
    if ( v19 >= 0 && qword_1C024F898 )
      qword_1C024F898(a1);
    MultiUserGreCleanupHmgRemoveAllLocks(0);
    hdo = 0LL;
    v34 = 0LL;
    v32[0] = 0LL;
    if ( qword_1C024F8B0 )
      v20 = qword_1C024F8B0();
    else
      v20 = -1073741637;
    if ( v20 >= 0 )
    {
      if ( qword_1C024F8B8 )
        qword_1C024F8B8(&hdo, &v34, v32);
      if ( *(_QWORD *)hdo )
        Win32FreePool(*(_QWORD *)hdo);
      if ( *v34 )
        Win32FreePool(*v34);
      if ( v32[0] )
        Win32FreePool(v32[0]);
    }
    v21 = (void (*)(void))qword_1C024F568;
  }
  else
  {
    if ( a2 != 1 )
      goto LABEL_83;
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0);
    v22 = qword_1C024F8A0 ? qword_1C024F8A0() : -1073741637;
    if ( v22 < 0 )
      goto LABEL_83;
    v21 = (void (*)(void))qword_1C024F8A8;
  }
  if ( v21 )
    v21();
LABEL_83:
  hdo = 0LL;
  for ( m = 0; ; m = v24 )
  {
    v24 = HmgNextOwned(m, a1);
    if ( !v24 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 8 )
    {
      v32[0] = ghsemPalette;
      EngAcquireSemaphore(ghsemPalette);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v34, (HPALETTE)hdo);
      if ( v34 )
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v34);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v34);
      SEMOBJ::vUnlock((SEMOBJ *)v32);
    }
  }
  v25 = 0;
  hdo = 0LL;
  for ( n = 0; ; n = v30 )
  {
    v30 = HmgNextOwned(n, a1);
    if ( !v30 )
      break;
    v27 = hdo;
    v28 = BYTE2(hdo) & 0x1F;
    if ( (BYTE2(hdo) & 0x1F) == 6 )
    {
      if ( qword_1C024F8C0 )
        v29 = qword_1C024F8C0();
      else
        v29 = -1073741637;
      if ( v29 >= 0 && qword_1C024F8C8 )
        qword_1C024F8C8(v27);
    }
    else if ( v28 == 8 )
    {
      v4 = bDeletePalette((HPALETTE)hdo);
      if ( !v4 && !v25 )
        v25 = 1;
    }
    else if ( v28 == 28 )
    {
      HmgSetLock(hdo);
      EngLockDriverObj(v27);
      EngDeleteDriverObj(v27, 1, 1);
    }
    else
    {
      v4 = 0;
      if ( !v25 )
        v25 = 1;
    }
  }
  return v4;
}
