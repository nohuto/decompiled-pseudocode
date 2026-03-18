/*
 * XREFs of ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800
 * Callers:
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C00186D0 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C0018E18 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     MultiUserCleanupDCs @ 0x1C0018EB4 (MultiUserCleanupDCs.c)
 *     HmgNextGarbageCollectible @ 0x1C0019034 (HmgNextGarbageCollectible.c)
 *     HmgSafeNextObjtByIndex @ 0x1C001A41C (HmgSafeNextObjtByIndex.c)
 *     HmgQueryAltLock @ 0x1C001B590 (HmgQueryAltLock.c)
 *     HmgSwapLockedHandleContents @ 0x1C001B6E0 (HmgSwapLockedHandleContents.c)
 *     GreSetBrushOwner @ 0x1C001C210 (GreSetBrushOwner.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C001EF48 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     HmgModifyHandleType @ 0x1C001F0B0 (HmgModifyHandleType.c)
 *     HmgSetLock @ 0x1C001F1FC (HmgSetLock.c)
 *     GreGetObjectOwner @ 0x1C001F270 (GreGetObjectOwner.c)
 *     HmgValidHandle @ 0x1C001FA10 (HmgValidHandle.c)
 *     bDeleteBrush @ 0x1C00371E0 (bDeleteBrush.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C0037510 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     HmgReplaceObject @ 0x1C0037A90 (HmgReplaceObject.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0038370 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0039CD0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C003A900 (NtGdiDeleteObjectApp.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003B6E0 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgSetOwner @ 0x1C003D030 (HmgSetOwner.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C003E730 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C003EA1C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0040C10 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0040E60 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0041330 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0041490 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ReleaseCacheDC @ 0x1C00418A0 (ReleaseCacheDC.c)
 *     EngUnlockSurface @ 0x1C0042240 (EngUnlockSurface.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0042480 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0042800 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0042ED0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     GreGetBounds @ 0x1C0043020 (GreGetBounds.c)
 *     HmgLock @ 0x1C00436E0 (HmgLock.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     DEC_SHARE_REF_CNT @ 0x1C00440A0 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C00442F0 (HmgPentryFromPobj.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgShareLock @ 0x1C0044DC0 (HmgShareLock.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0044FB0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     HmgLockEx @ 0x1C0045120 (HmgLockEx.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0045660 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C00460C0 (INC_SHARE_REF_CNT.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00462B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00471A0 (HmgIncrementShareReferenceCount.c)
 *     EngLockSurface @ 0x1C00473A0 (EngLockSurface.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00475D0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     HmgRemoveObject @ 0x1C004A7D0 (HmgRemoveObject.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004BA04 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgPrefetchAllObjt @ 0x1C0086E30 (HmgPrefetchAllObjt.c)
 *     HmgMarkLazyDelete @ 0x1C00906B0 (HmgMarkLazyDelete.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0090878 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     HmgLockIgnoreOwner @ 0x1C0091640 (HmgLockIgnoreOwner.c)
 *     HmgShareUnlockRemoveObject @ 0x1C0097360 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00A5058 (HmgShareLockIgnoreStockBit.c)
 *     HmgReferenceCheckLock @ 0x1C00AAB20 (HmgReferenceCheckLock.c)
 *     HmgUnlock @ 0x1C00AD474 (HmgUnlock.c)
 *     NtGdiGetEntry @ 0x1C00B4D40 (NtGdiGetEntry.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C2B54 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GdiHandleManager::DecodeIndex(GdiHandleEntryDirectory **this, unsigned int a2)
{
  if ( a2 >= 0x10000
    && (*(_DWORD *)this <= 0x10000u
     || *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)a2, 1) + 13) == HIWORD(a2)) )
  {
    return (unsigned __int16)a2;
  }
  else
  {
    return a2;
  }
}
