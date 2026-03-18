/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x140223BF0
 * Callers:
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 *     MiWsleFree @ 0x140220E30 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x1402235A0 (MiDeleteValidSystemPage.c)
 *     MiLockPageAndSetDirty @ 0x140224410 (MiLockPageAndSetDirty.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiTrimSystemImagePages @ 0x1403251CC (MiTrimSystemImagePages.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiResolveProtoCombine @ 0x140367EE4 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x140368CD4 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394084 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C50FC (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x140527EE4 (MiLockDriverPageRange.c)
 *     MmReplaceImportEntry @ 0x14052FDFC (MmReplaceImportEntry.c)
 *     MiCompleteSecureProcessFault @ 0x140542664 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiScanPagefileSpace @ 0x1408CBE80 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiCaptureDirtyBitToPfn(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax
  _QWORD *v4; // rcx

  v1 = *(_BYTE *)(a1 + 34);
  result = 0LL;
  if ( (v1 & 0x10) == 0 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (((*v4 & 0x400LL) == 0) & (unsigned __int8)~(v1 >> 3)) != 0 )
    {
      result = MiCapturePageFileInfoInline(v4, 1LL);
      v1 = *(_BYTE *)(a1 + 34);
    }
    *(_BYTE *)(a1 + 34) = v1 | 0x10;
  }
  return result;
}
