/*
 * XREFs of ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040
 * Callers:
 *     HmgValidHandle @ 0x1C00140F0 (HmgValidHandle.c)
 *     HmgModifyHandleType @ 0x1C00158B0 (HmgModifyHandleType.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C001BDC0 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgSetLock @ 0x1C00236D4 (HmgSetLock.c)
 *     GreGetObjectOwner @ 0x1C0023750 (GreGetObjectOwner.c)
 *     HmgReferenceCheckLock @ 0x1C00496E0 (HmgReferenceCheckLock.c)
 *     NtGdiGetEntry @ 0x1C0054680 (NtGdiGetEntry.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C007D350 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C007E030 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C007F4C0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C007FF40 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     HmgSetOwner @ 0x1C0081B60 (HmgSetOwner.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00822A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0083920 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00844C0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0085F30 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C00865B0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0087120 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     EngUnlockSurface @ 0x1C00878E0 (EngUnlockSurface.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0087B70 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgShareLockEx @ 0x1C0087EB0 (HmgShareLockEx.c)
 *     GreGetBounds @ 0x1C00882C0 (GreGetBounds.c)
 *     HmgShareLockCheck @ 0x1C0088B80 (HmgShareLockCheck.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C0089250 (HmgDecrementExclusiveReferenceCountEx.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0089E90 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C008A150 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgLockEx @ 0x1C008ABB0 (HmgLockEx.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ReleaseCacheDC @ 0x1C008BB80 (ReleaseCacheDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C008C520 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C008D640 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C0091A00 (GreCreateDisplayDC.c)
 *     NtGdiDeleteObjectApp @ 0x1C0092CA0 (NtGdiDeleteObjectApp.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C00932A0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00958C0 (--1SURFMEM@@QEAA@XZ.c)
 *     MultiUserCleanupDCs @ 0x1C00BDE54 (MultiUserCleanupDCs.c)
 *     HmgSafeNextObjt @ 0x1C00BF210 (HmgSafeNextObjt.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00BF460 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C3B20 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall GdiHandleEntryDirectory::GetEntry(GdiHandleEntryDirectory *this, unsigned int a2, char a3)
{
  unsigned int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // r10
  __int64 v7; // r11

  v4 = *((_DWORD *)this + 514);
  if ( a2 >= v4 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0LL;
  v5 = 0LL;
  v6 = ((a2 - v4) >> 16) + 1;
  if ( a2 < v4 )
    v6 = 0LL;
  v7 = *((_QWORD *)this + v6 + 1);
  if ( (_DWORD)v6 )
    a2 += ((1 - (_DWORD)v6) << 16) - v4;
  if ( a3 && a2 < *(_DWORD *)(v7 + 20)
    || a2 < *(_DWORD *)(v7 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2 + 8) )
  {
    return (struct _ENTRY *)(*(_QWORD *)v7 + 24LL * a2);
  }
  return (struct _ENTRY *)v5;
}
