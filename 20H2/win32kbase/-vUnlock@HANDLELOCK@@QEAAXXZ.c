/*
 * XREFs of ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0
 * Callers:
 *     HmgSwapLockedHandleContents @ 0x1C001B6E0 (HmgSwapLockedHandleContents.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C001C060 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetBrushOwner @ 0x1C001C210 (GreSetBrushOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C001C8E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     GreSetBitmapOwnerEx @ 0x1C001DA90 (GreSetBitmapOwnerEx.c)
 *     HmgMarkUndeletable @ 0x1C001E480 (HmgMarkUndeletable.c)
 *     HmgLockAndModifyHandleType @ 0x1C001F040 (HmgLockAndModifyHandleType.c)
 *     bDeleteBrush @ 0x1C00371E0 (bDeleteBrush.c)
 *     HmgReplaceObject @ 0x1C0037A90 (HmgReplaceObject.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0038370 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0039CD0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C003A900 (NtGdiDeleteObjectApp.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003B6E0 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgSetOwner @ 0x1C003D030 (HmgSetOwner.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0041490 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ReleaseCacheDC @ 0x1C00418A0 (ReleaseCacheDC.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0042480 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0042ED0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     GreGetBounds @ 0x1C0043020 (GreGetBounds.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgLockEx @ 0x1C0045120 (HmgLockEx.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00460A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00462B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00475D0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 *     HmgRemoveObject @ 0x1C004A7D0 (HmgRemoveObject.c)
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C0055870 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 *     GreSetSolidBrushLight @ 0x1C0082300 (GreSetSolidBrushLight.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0090878 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     HmgLockIgnoreOwner @ 0x1C0091640 (HmgLockIgnoreOwner.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0097360 (HmgShareUnlockRemoveObject.c)
 *     HmgMarkDeletable @ 0x1C00982E0 (HmgMarkDeletable.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00A5058 (HmgShareLockIgnoreStockBit.c)
 *     HmgMarkUnXferable @ 0x1C00A5590 (HmgMarkUnXferable.c)
 *     HmgMarkXferable @ 0x1C00A6030 (HmgMarkXferable.c)
 *     HmgUnlock @ 0x1C00AD474 (HmgUnlock.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0718 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0810 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x1C0140BD0 (-HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z.c)
 * Callees:
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0045770 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
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
