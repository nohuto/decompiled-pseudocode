/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x14030FB10
 * Callers:
 *     MiResolveTransitionFault @ 0x140216790 (MiResolveTransitionFault.c)
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402696C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiTrimSystemImagePages @ 0x1402BE540 (MiTrimSystemImagePages.c)
 *     MiSetSystemCodeProtection @ 0x1402E6818 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14030F640 (MmSetAddressRangeModifiedEx.c)
 *     MiLockPageAndSetDirty @ 0x14030FA6C (MiLockPageAndSetDirty.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiWsleFree @ 0x140327ED0 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x140328E20 (MiDeleteValidSystemPage.c)
 *     MmProtectPool @ 0x140362D68 (MmProtectPool.c)
 *     MiResolveProtoCombine @ 0x14036AB34 (MiResolveProtoCombine.c)
 *     MiLockPagedAddress @ 0x14036B924 (MiLockPagedAddress.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14039758C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C969C (MmDbgMarkPfnModifiedWorker.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F4628 (MmUpdateUserShadowStackValue.c)
 *     MiMakeOutswappedPageResident @ 0x14052BAC0 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x14052DA04 (MiLockDriverPageRange.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 *     MiCompleteSecureProcessFault @ 0x140548184 (MiCompleteSecureProcessFault.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiScanPagefileSpace @ 0x1408D07D0 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
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
