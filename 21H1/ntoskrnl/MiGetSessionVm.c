/*
 * XREFs of MiGetSessionVm @ 0x14022B5AC
 * Callers:
 *     MiSystemFault @ 0x14022A810 (MiSystemFault.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiProbeAndLockPrepare @ 0x1402A7E50 (MiProbeAndLockPrepare.c)
 *     MiRemoveFromSystemSpace @ 0x1402AA180 (MiRemoveFromSystemSpace.c)
 *     MiReturnSystemVa @ 0x1402AA5DC (MiReturnSystemVa.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MiInsertInSystemSpace @ 0x1402BD160 (MiInsertInSystemSpace.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiLockStealSystemVm @ 0x1402E96FC (MiLockStealSystemVm.c)
 *     MmCopyMemory @ 0x1403028D0 (MmCopyMemory.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     MiInitializeColorBase @ 0x140310E1C (MiInitializeColorBase.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiSessionRemoveImage @ 0x140387778 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x140389064 (MiDeleteSessionPdes.c)
 *     MiCountSystemImageCommitment @ 0x14039B774 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14039F454 (MiSessionInsertImage.c)
 *     MiEmptyAccessLogs @ 0x14039FF10 (MiEmptyAccessLogs.c)
 *     MiExceptionForMappedVa @ 0x140527508 (MiExceptionForMappedVa.c)
 *     MmReplaceImportEntry @ 0x14052FDFC (MmReplaceImportEntry.c)
 *     MiTrimAllSystemPagableMemory @ 0x140536520 (MiTrimAllSystemPagableMemory.c)
 *     MiUnmapPatchTable @ 0x14053967C (MiUnmapPatchTable.c)
 *     MiMapRetpolineStubs @ 0x14053E51C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14053E728 (MiUnmapRetpolineStubs.c)
 *     MmPrefetchVirtualMemory @ 0x140655D68 (MmPrefetchVirtualMemory.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
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
