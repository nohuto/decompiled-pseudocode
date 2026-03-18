/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x14033C2A0
 * Callers:
 *     MiLockPagedAddress @ 0x140245DF4 (MiLockPagedAddress.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWsleFree @ 0x1402C2AD0 (MiWsleFree.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiTrimSystemImagePages @ 0x1402D92AC (MiTrimSystemImagePages.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402DAC64 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiOutSwapWorkingSetPte @ 0x140315EE0 (MiOutSwapWorkingSetPte.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiMakeFaultPfnActive @ 0x140339240 (MiMakeFaultPfnActive.c)
 *     MiMakeCombineCandidateClean @ 0x14033A5B0 (MiMakeCombineCandidateClean.c)
 *     MiResolveProtoCombine @ 0x14033A920 (MiResolveProtoCombine.c)
 *     MiDeleteValidSystemPage @ 0x14033BEC0 (MiDeleteValidSystemPage.c)
 *     MmSetAddressRangeModifiedEx @ 0x14033D860 (MmSetAddressRangeModifiedEx.c)
 *     MiLockPageAndSetDirty @ 0x14033E534 (MiLockPageAndSetDirty.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403D820C (MmDbgMarkPfnModifiedWorker.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiLockDriverPageRange @ 0x140581D58 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1405905F0 (MiReplaceImportEntry.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x140591E04 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiCompleteSecureProcessFault @ 0x1405A6E74 (MiCompleteSecureProcessFault.c)
 *     MmUpdateUserShadowStackValue @ 0x1405A7A98 (MmUpdateUserShadowStackValue.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiScanPagefileSpace @ 0x14096F470 (MiScanPagefileSpace.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
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
