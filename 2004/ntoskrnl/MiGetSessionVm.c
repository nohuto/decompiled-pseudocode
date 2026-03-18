/*
 * XREFs of MiGetSessionVm @ 0x1402BE22C
 * Callers:
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiProbeAndLockPrepare @ 0x14024EE20 (MiProbeAndLockPrepare.c)
 *     MiRemoveFromSystemSpace @ 0x140251150 (MiRemoveFromSystemSpace.c)
 *     MiReturnSystemVa @ 0x1402515AC (MiReturnSystemVa.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiSystemFault @ 0x1402BD490 (MiSystemFault.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MiLockStealSystemVm @ 0x140321188 (MiLockStealSystemVm.c)
 *     MmCopyMemory @ 0x14033F6D0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x14033FBD4 (MiTranslatePageForCopy.c)
 *     MiInitializeColorBase @ 0x14034E4AC (MiInitializeColorBase.c)
 *     MiSessionRemoveImage @ 0x1403886E8 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x14038A0D8 (MiDeleteSessionPdes.c)
 *     MiCountSystemImageCommitment @ 0x14039BF04 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14039FBE4 (MiSessionInsertImage.c)
 *     MiEmptyAccessLogs @ 0x1403A06A0 (MiEmptyAccessLogs.c)
 *     MiExceptionForMappedVa @ 0x140527B58 (MiExceptionForMappedVa.c)
 *     MmReplaceImportEntry @ 0x14053044C (MmReplaceImportEntry.c)
 *     MiTrimAllSystemPagableMemory @ 0x140536B70 (MiTrimAllSystemPagableMemory.c)
 *     MiUnmapPatchTable @ 0x140539CCC (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14053EB6C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14053ED78 (MiUnmapRetpolineStubs.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MmPrefetchVirtualMemory @ 0x1406D03C8 (MmPrefetchVirtualMemory.c)
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
