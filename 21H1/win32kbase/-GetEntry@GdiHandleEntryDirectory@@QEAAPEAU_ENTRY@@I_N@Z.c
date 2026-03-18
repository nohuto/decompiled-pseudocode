/*
 * XREFs of ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70
 * Callers:
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C00063B0 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgSetLock @ 0x1C000EEC4 (HmgSetLock.c)
 *     GreGetObjectOwner @ 0x1C000EF40 (GreGetObjectOwner.c)
 *     HmgReferenceCheckLock @ 0x1C003C670 (HmgReferenceCheckLock.c)
 *     NtGdiGetEntry @ 0x1C0046A40 (NtGdiGetEntry.c)
 *     NtGdiDeleteObjectApp @ 0x1C006C610 (NtGdiDeleteObjectApp.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C006CC10 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00779B0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0078690 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0079500 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0079A60 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     HmgSetOwner @ 0x1C007B240 (HmgSetOwner.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C007B980 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C007D000 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C007D510 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C007EF80 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C007F600 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0080080 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     EngUnlockSurface @ 0x1C0080860 (EngUnlockSurface.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0080AA0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgShareLockEx @ 0x1C0080DE0 (HmgShareLockEx.c)
 *     GreGetBounds @ 0x1C00811F0 (GreGetBounds.c)
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C0082180 (HmgDecrementExclusiveReferenceCountEx.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C0082F10 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0083120 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     HmgLockEx @ 0x1C0083AE0 (HmgLockEx.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00854A0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00865B0 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C008F8F0 (--1SURFMEM@@QEAA@XZ.c)
 *     MultiUserCleanupDCs @ 0x1C0099574 (MultiUserCleanupDCs.c)
 *     HmgSafeNextObjt @ 0x1C009A930 (HmgSafeNextObjt.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C009AB80 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     HmgValidHandle @ 0x1C00A81A0 (HmgValidHandle.c)
 *     HmgModifyHandleType @ 0x1C00AA8E0 (HmgModifyHandleType.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C30E0 (-vCleanupDCs@@YAXK@Z.c)
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
