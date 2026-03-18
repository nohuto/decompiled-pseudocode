/*
 * XREFs of ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00BCF4C
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00214C8 (MultiUserNtGreCleanup.c)
 *     GdiProcessCallout @ 0x1C00BCB60 (GdiProcessCallout.c)
 * Callees:
 *     HmgSetLock @ 0x1C00236D4 (HmgSetLock.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00820E8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0091F88 (--1EPALOBJ@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00A67B0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C00BD620 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00BDDB8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C00BDFD4 (HmgNextGarbageCollectible.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C00C06F4 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00C0784 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     HmgNextOwned @ 0x1C00C0810 (HmgNextOwned.c)
 *     bDeleteBrush @ 0x1C00C08E0 (bDeleteBrush.c)
 *     bDeletePalette @ 0x1C00C0ED0 (bDeletePalette.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00C10F4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00C1AA0 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C00C1E78 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C3B20 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgIsProcessCleanupRequired @ 0x1C00CF9C8 (HmgIsProcessCleanupRequired.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0A78 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0B70 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C014352C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     EngDeleteDriverObj @ 0x1C014FB50 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C014FC70 (EngLockDriverObj.c)
 */

__int64 __fastcall NtGdiCloseProcess(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // r12d
  int v5; // eax
  int v6; // eax
  unsigned int i; // ecx
  __int64 v8; // rdx
  unsigned int Owned; // ebx
  int v10; // r8d
  int v11; // eax
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int j; // ecx
  unsigned int GarbageCollectible; // ebx
  unsigned int k; // ecx
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // eax
  void (*v20)(void); // rax
  int v21; // eax
  unsigned int m; // ecx
  __int64 v23; // rdx
  int v24; // r8d
  unsigned int v25; // ebx
  int v26; // ebx
  unsigned int n; // ecx
  HDRVOBJ v28; // rsi
  char v29; // al
  int v30; // eax
  unsigned int v31; // r14d
  __int64 v33[2]; // [rsp+20h] [rbp-10h] BYREF
  HDRVOBJ hdo; // [rsp+80h] [rbp+50h] BYREF
  __int64 *v35; // [rsp+88h] [rbp+58h] BYREF

  v4 = 1;
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x12u);
    v5 = qword_1C0251860 ? qword_1C0251860() : -1073741637;
    if ( v5 >= 0 && qword_1C0251868 )
      qword_1C0251868(2LL);
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
  if ( qword_1C0251870 )
    v6 = qword_1C0251870();
  else
    v6 = -1073741637;
  if ( v6 >= 0 && qword_1C0251878 )
    qword_1C0251878(a1);
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
  DxLddmCleanupAtProcessDestroy(a1, v8, v10);
  if ( qword_1C0251880 )
    v11 = qword_1C0251880();
  else
    v11 = -1073741637;
  if ( v11 >= 0 && qword_1C0251888 )
    qword_1C0251888(a1);
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
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
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
  for ( k = 0; ; k = v17 )
  {
    v17 = HmgNextOwned(k, a1);
    if ( !v17 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 9 )
      bDeleteColorSpace((HCOLORSPACE)hdo);
  }
  if ( a2 == 2 )
  {
    MultiUserGreCleanupHmgRemoveAllLocks(0x15u);
    if ( qword_1C0251890 )
      v18 = qword_1C0251890();
    else
      v18 = -1073741637;
    if ( v18 >= 0 && qword_1C0251898 )
      qword_1C0251898(a1);
    MultiUserGreCleanupHmgRemoveAllLocks(0);
    hdo = 0LL;
    v35 = 0LL;
    v33[0] = 0LL;
    if ( qword_1C02518B0 )
      v19 = qword_1C02518B0();
    else
      v19 = -1073741637;
    if ( v19 >= 0 )
    {
      if ( qword_1C02518B8 )
        qword_1C02518B8(&hdo, &v35, v33);
      if ( *(_QWORD *)hdo )
        Win32FreePool(*(_QWORD *)hdo);
      if ( *v35 )
        Win32FreePool(*v35);
      if ( v33[0] )
        Win32FreePool(v33[0]);
    }
    v20 = (void (*)(void))qword_1C0251568;
  }
  else
  {
    if ( a2 != 1 )
      goto LABEL_83;
    MultiUserGreCleanupHmgOwnRemoveAllLocks(0);
    v21 = qword_1C02518A0 ? qword_1C02518A0() : -1073741637;
    if ( v21 < 0 )
      goto LABEL_83;
    v20 = (void (*)(void))qword_1C02518A8;
  }
  if ( v20 )
    v20();
LABEL_83:
  hdo = 0LL;
  for ( m = 0; ; m = v25 )
  {
    v25 = HmgNextOwned(m, a1);
    if ( !v25 )
      break;
    if ( (BYTE2(hdo) & 0x1F) == 8 )
    {
      v33[0] = (__int64)ghsemPalette;
      EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v35, (HPALETTE)hdo);
      if ( v35 )
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v35);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v35);
      SEMOBJ::vUnlock((SEMOBJ *)v33, v23, v24);
    }
  }
  v26 = 0;
  hdo = 0LL;
  for ( n = 0; ; n = v31 )
  {
    v31 = HmgNextOwned(n, a1);
    if ( !v31 )
      break;
    v28 = hdo;
    v29 = BYTE2(hdo) & 0x1F;
    if ( (BYTE2(hdo) & 0x1F) == 6 )
    {
      if ( qword_1C02518C0 )
        v30 = qword_1C02518C0();
      else
        v30 = -1073741637;
      if ( v30 >= 0 && qword_1C02518C8 )
        qword_1C02518C8(v28);
    }
    else if ( v29 == 8 )
    {
      v4 = bDeletePalette((HPALETTE)hdo);
      if ( !v4 && !v26 )
        v26 = 1;
    }
    else if ( v29 == 28 )
    {
      HmgSetLock((unsigned int)hdo);
      EngLockDriverObj(v28);
      EngDeleteDriverObj(v28, 1, 1);
    }
    else
    {
      v4 = 0;
      if ( !v26 )
        v26 = 1;
    }
  }
  return v4;
}
