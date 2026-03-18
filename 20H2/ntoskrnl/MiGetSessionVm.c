/*
 * XREFs of MiGetSessionVm @ 0x14029977C
 * Callers:
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x14024EF4C (MiRemoveFromSystemSpace.c)
 *     MiReturnSystemVa @ 0x14024F3A8 (MiReturnSystemVa.c)
 *     MiInitializeColorBase @ 0x14024F838 (MiInitializeColorBase.c)
 *     MiTranslatePageForCopy @ 0x140251058 (MiTranslatePageForCopy.c)
 *     MmCopyMemory @ 0x1402513F0 (MmCopyMemory.c)
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiProbeAndLockPrepare @ 0x14026B610 (MiProbeAndLockPrepare.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiSystemFault @ 0x1402989E0 (MiSystemFault.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiLockStealSystemVm @ 0x140321C88 (MiLockStealSystemVm.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiSessionRemoveImage @ 0x14038A8A8 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x14038C378 (MiDeleteSessionPdes.c)
 *     MiCountSystemImageCommitment @ 0x14039F054 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x1403A20B4 (MiSessionInsertImage.c)
 *     MiEmptyAccessLogs @ 0x1403A2B70 (MiEmptyAccessLogs.c)
 *     MiExceptionForMappedVa @ 0x14052B528 (MiExceptionForMappedVa.c)
 *     MmReplaceImportEntry @ 0x140533E1C (MmReplaceImportEntry.c)
 *     MiTrimAllSystemPagableMemory @ 0x14053A540 (MiTrimAllSystemPagableMemory.c)
 *     MiUnmapPatchTable @ 0x14053D69C (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14054253C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140542748 (MiUnmapRetpolineStubs.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MmPrefetchVirtualMemory @ 0x1406F09B8 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiGetSessionVm()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
  if ( result )
    result += 256LL;
  return result;
}
