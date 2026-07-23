/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x14031A860
 * Callers:
 *     MiTrimSystemImagePages @ 0x14023CB80 (MiTrimSystemImagePages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140257660 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiResolveTransitionFault @ 0x1402BB090 (MiResolveTransitionFault.c)
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MmSetAddressRangeModifiedEx @ 0x14031A390 (MmSetAddressRangeModifiedEx.c)
 *     MiLockPageAndSetDirty @ 0x14031A7BC (MiLockPageAndSetDirty.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiWsleFree @ 0x140332C20 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x140333B70 (MiDeleteValidSystemPage.c)
 *     MiResolveProtoCombine @ 0x14036ACE4 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x14036BAD4 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403976DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C983C (MmDbgMarkPfnModifiedWorker.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F4628 (MmUpdateUserShadowStackValue.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x14052DC44 (MiLockDriverPageRange.c)
 *     MmReplaceImportEntry @ 0x140535B5C (MmReplaceImportEntry.c)
 *     MiCompleteSecureProcessFault @ 0x1405483C4 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiScanPagefileSpace @ 0x1408D0930 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiCaptureDirtyBitToPfn(__int64 a1)
{
  unsigned __int8 v1; // dl
  __int64 result; // rax
  unsigned __int64 *v4; // rcx

  v1 = *(_BYTE *)(a1 + 34);
  result = 0LL;
  if ( (v1 & 0x10) == 0 )
  {
    v4 = (unsigned __int64 *)(a1 + 16);
    if ( (((*v4 & 0x400) == 0) & (unsigned __int8)~(v1 >> 3)) != 0 )
    {
      result = MiCapturePageFileInfoInline(v4, 1, 0);
      v1 = *(_BYTE *)(a1 + 34);
    }
    *(_BYTE *)(a1 + 34) = v1 | 0x10;
  }
  return result;
}
