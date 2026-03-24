/*
 * XREFs of MiGetSessionVm @ 0x14031219C
 * Callers:
 *     MiProbeAndLockPrepare @ 0x14020A2F0 (MiProbeAndLockPrepare.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiLockStealSystemVm @ 0x140298704 (MiLockStealSystemVm.c)
 *     MmCopyMemory @ 0x1402B48E0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x1402B4DE4 (MiTranslatePageForCopy.c)
 *     MiSetSystemCodeProtection @ 0x1402E6818 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E6EF4 (MiMakeDriverPagesPrivate.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiReturnSystemVa @ 0x1402FA5E8 (MiReturnSystemVa.c)
 *     MiInsertInSystemSpace @ 0x1402FADE0 (MiInsertInSystemSpace.c)
 *     MiInitializeColorBase @ 0x1402FD478 (MiInitializeColorBase.c)
 *     MiRemoveFromSystemSpace @ 0x140304E4C (MiRemoveFromSystemSpace.c)
 *     MiSystemFault @ 0x140311400 (MiSystemFault.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MmProtectPool @ 0x140362D68 (MmProtectPool.c)
 *     MiSessionRemoveImage @ 0x14038AFF8 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x14038CAC8 (MiDeleteSessionPdes.c)
 *     MiCountSystemImageCommitment @ 0x14039EC94 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x1403A2974 (MiSessionInsertImage.c)
 *     MiEmptyAccessLogs @ 0x1403A3430 (MiEmptyAccessLogs.c)
 *     MiExceptionForMappedVa @ 0x14052D028 (MiExceptionForMappedVa.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 *     MiTrimAllSystemPagableMemory @ 0x14053C040 (MiTrimAllSystemPagableMemory.c)
 *     MiUnmapPatchTable @ 0x14053F19C (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14054403C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140544248 (MiUnmapRetpolineStubs.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MmPrefetchVirtualMemory @ 0x1407108F8 (MmPrefetchVirtualMemory.c)
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
