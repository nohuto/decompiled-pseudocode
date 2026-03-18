/*
 * XREFs of ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0014780 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C0015580 (HmgMarkUndeletable.c)
 *     HmgLockAndModifyHandleType @ 0x1C0015840 (HmgLockAndModifyHandleType.c)
 *     GreSetSolidBrushLight @ 0x1C001E680 (GreSetSolidBrushLight.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0026DF8 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C002730C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgLockIgnoreOwner @ 0x1C0027980 (HmgLockIgnoreOwner.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0031AA0 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkDeletable @ 0x1C0032590 (HmgMarkDeletable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0044178 (HmgShareLockIgnoreStockBit.c)
 *     HmgMarkUnXferable @ 0x1C00444A0 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C0044F00 (HmgMarkXferable.c)
 *     HmgUnlock @ 0x1C004C1E4 (HmgUnlock.c)
 *     HmgReplaceObject @ 0x1C007B3E0 (HmgReplaceObject.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C007D350 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C007EFD0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C007FF40 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     HmgSetOwner @ 0x1C0081B60 (HmgSetOwner.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00822A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0087120 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0087B70 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0088170 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     GreGetBounds @ 0x1C00882C0 (GreGetBounds.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgLockEx @ 0x1C008ABB0 (HmgLockEx.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C008BB60 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ReleaseCacheDC @ 0x1C008BB80 (ReleaseCacheDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C008C520 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C008D640 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C0090550 (GreSetDCOwnerEx.c)
 *     HmgRemoveObject @ 0x1C0090840 (HmgRemoveObject.c)
 *     NtGdiDeleteObjectApp @ 0x1C0092CA0 (NtGdiDeleteObjectApp.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00958C0 (--1SURFMEM@@QEAA@XZ.c)
 *     GreSetBitmapOwnerEx @ 0x1C0099670 (GreSetBitmapOwnerEx.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0099760 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C00A724C (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C00A7400 (GreSetBrushOwner.c)
 *     HmgSwapLockedHandleContents @ 0x1C00C0290 (HmgSwapLockedHandleContents.c)
 *     bDeleteBrush @ 0x1C00C08E0 (bDeleteBrush.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0A78 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0B70 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C01430B0 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 * Callees:
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C008B200 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
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
