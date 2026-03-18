/*
 * XREFs of ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0
 * Callers:
 *     HmgSetLock @ 0x1C000EEC4 (HmgSetLock.c)
 *     GreGetObjectOwner @ 0x1C000EF40 (GreGetObjectOwner.c)
 *     HmgPrefetchAllObjt @ 0x1C000F030 (HmgPrefetchAllObjt.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C000FF20 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     HmgMarkLazyDelete @ 0x1C0016EB0 (HmgMarkLazyDelete.c)
 *     ?HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z @ 0x1C0017078 (-HmgLockObjectForRemoval@@YAPEAXPEAUHOBJ__@@JJHEPEAK@Z.c)
 *     HmgLockIgnoreOwner @ 0x1C0017C00 (HmgLockIgnoreOwner.c)
 *     HmgShareUnlockRemoveObject @ 0x1C001D770 (HmgShareUnlockRemoveObject.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C0034898 (HmgShareLockIgnoreStockBit.c)
 *     HmgReferenceCheckLock @ 0x1C003C670 (HmgReferenceCheckLock.c)
 *     HmgUnlock @ 0x1C003F794 (HmgUnlock.c)
 *     NtGdiGetEntry @ 0x1C0046A40 (NtGdiGetEntry.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C004D010 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C006C610 (NtGdiDeleteObjectApp.c)
 *     bDeleteBrush @ 0x1C006D4D0 (bDeleteBrush.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C006D800 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     HmgReplaceObject @ 0x1C00755D0 (HmgReplaceObject.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00779B0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0079A60 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     HmgSetOwner @ 0x1C007B240 (HmgSetOwner.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C007B980 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C007F600 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C007F8EC (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C007FC10 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0080080 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0080370 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00804F0 (HmgIncrementShareReferenceCount.c)
 *     INC_SHARE_REF_CNT @ 0x1C00806A0 (INC_SHARE_REF_CNT.c)
 *     EngUnlockSurface @ 0x1C0080860 (EngUnlockSurface.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0080AA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00810A0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     GreGetBounds @ 0x1C00811F0 (GreGetBounds.c)
 *     HmgLock @ 0x1C00818B0 (HmgLock.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0081D80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0082610 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C0082780 (HmgPentryFromPobj.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgShareLock @ 0x1C0083780 (HmgShareLock.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C0083970 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     HmgLockEx @ 0x1C0083AE0 (HmgLockEx.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0084020 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00854A0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     EngLockSurface @ 0x1C0086390 (EngLockSurface.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00865B0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     HmgRemoveObject @ 0x1C00897F0 (HmgRemoveObject.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C008B250 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008CC7C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C008F8F0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00994D8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     MultiUserCleanupDCs @ 0x1C0099574 (MultiUserCleanupDCs.c)
 *     HmgNextGarbageCollectible @ 0x1C00996F4 (HmgNextGarbageCollectible.c)
 *     HmgSafeNextObjtByIndex @ 0x1C009AADC (HmgSafeNextObjtByIndex.c)
 *     HmgQueryAltLock @ 0x1C009BD40 (HmgQueryAltLock.c)
 *     HmgSwapLockedHandleContents @ 0x1C009BE90 (HmgSwapLockedHandleContents.c)
 *     HmgValidHandle @ 0x1C00A81A0 (HmgValidHandle.c)
 *     GreSetBrushOwner @ 0x1C00A8CA0 (GreSetBrushOwner.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C00AA778 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     HmgModifyHandleType @ 0x1C00AA8E0 (HmgModifyHandleType.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C30E0 (-vCleanupDCs@@YAXK@Z.c)
 *     HmgFree @ 0x1C00C3E20 (HmgFree.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
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
