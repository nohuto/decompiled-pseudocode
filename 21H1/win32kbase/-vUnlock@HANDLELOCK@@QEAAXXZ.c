/*
 * XREFs of ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0
 * Callers:
 *     GreSetSolidBrushLight @ 0x1C0008350 (GreSetSolidBrushLight.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0017078 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001758C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgLockIgnoreOwner @ 0x1C0017C00 (HmgLockIgnoreOwner.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0019250 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     HmgShareUnlockRemoveObject @ 0x1C001D770 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkDeletable @ 0x1C0029BC0 (HmgMarkDeletable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0034898 (HmgShareLockIgnoreStockBit.c)
 *     HmgMarkUnXferable @ 0x1C0034FA0 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C0035800 (HmgMarkXferable.c)
 *     HmgUnlock @ 0x1C003F794 (HmgUnlock.c)
 *     NtGdiDeleteObjectApp @ 0x1C006C610 (NtGdiDeleteObjectApp.c)
 *     bDeleteBrush @ 0x1C006D4D0 (bDeleteBrush.c)
 *     HmgReplaceObject @ 0x1C00755D0 (HmgReplaceObject.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00779B0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0079A60 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     HmgSetOwner @ 0x1C007B240 (HmgSetOwner.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C007B980 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0080080 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0080AA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00810A0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     GreGetBounds @ 0x1C00811F0 (GreGetBounds.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgLockEx @ 0x1C0083AE0 (HmgLockEx.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0084A8C (--1HANDLELOCK@@QEAA@XZ.c)
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00854A0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00865B0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     HmgRemoveObject @ 0x1C00897F0 (HmgRemoveObject.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008B250 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C008C080 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C008F8F0 (--1SURFMEM@@QEAA@XZ.c)
 *     GreSetBitmapOwnerEx @ 0x1C0091070 (GreSetBitmapOwnerEx.c)
 *     HmgSwapLockedHandleContents @ 0x1C009BE90 (HmgSwapLockedHandleContents.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00A8AF8 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C00A8CA0 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00A9370 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C00A9F30 (HmgMarkUndeletable.c)
 *     HmgLockAndModifyHandleType @ 0x1C00AA870 (HmgLockAndModifyHandleType.c)
 *     HmgFree @ 0x1C00C3E20 (HmgFree.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0078 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0170 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0248 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0149400 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 * Callees:
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0084130 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall HANDLELOCK::vUnlock(HANDLELOCK *this)
{
  GdiHandleManager *v2; // rbx
  unsigned int v3; // r8d
  __int64 v4; // rax
  unsigned int v5; // r9d
  __int64 v6; // rdx
  struct OBJECT *EntryObject; // rax
  unsigned int v8; // eax
  __int64 v9; // r10
  unsigned int v10; // edx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r10

  v2 = gpHandleManager;
  v3 = GdiHandleManager::DecodeIndex(gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v4 = *((_QWORD *)v2 + 2);
  v5 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    EntryObject = 0LL;
  }
  else
  {
    v6 = ((v3 - v5) >> 16) + 1;
    if ( v3 < v5 )
      v6 = 0LL;
    if ( (_DWORD)v6 )
      v3 += ((1 - (_DWORD)v6) << 16) - v5;
    EntryObject = GdiHandleEntryTable::GetEntryObject(*(GdiHandleEntryTable **)(v4 + 8 * v6 + 8), v3);
  }
  v8 = GdiHandleManager::DecodeIndex(
         v2,
         (unsigned __int16)*(_DWORD *)EntryObject | (*(_DWORD *)EntryObject >> 8) & 0xFF0000);
  v9 = *((_QWORD *)v2 + 2);
  v10 = v8;
  v11 = *(_DWORD *)(v9 + 2056);
  if ( v8 < v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
  {
    v12 = ((v8 - v11) >> 16) + 1;
    if ( v8 < v11 )
      v12 = 0LL;
    v13 = *(_QWORD *)(v9 + 8 * v12 + 8);
    if ( (_DWORD)v12 )
      v10 = ((1 - (_DWORD)v12) << 16) - v11 + v8;
    *(_DWORD *)(*(_QWORD *)v13 + 24LL * v10 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * ((unsigned __int64)v10 >> 8)) + 16LL * (unsigned __int8)v10,
      0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
