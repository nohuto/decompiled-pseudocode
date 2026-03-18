/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20
 * Callers:
 *     MiMappingHasIoReferences @ 0x1402155C8 (MiMappingHasIoReferences.c)
 *     MmUnmapIoSpace @ 0x140215660 (MmUnmapIoSpace.c)
 *     MiMappingHasIoTracker @ 0x140215774 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x1402157EC (MiZeroAndFlushPtes.c)
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     MiGetPhysicalAddress @ 0x14027B6A4 (MiGetPhysicalAddress.c)
 *     MiCountSystemImageCommitment @ 0x1402DBA28 (MiCountSystemImageCommitment.c)
 *     MiLockPagableImageSection @ 0x1402FD820 (MiLockPagableImageSection.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiProbeLockFrame @ 0x14031BAB0 (MiProbeLockFrame.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiDbgReleaseAddress @ 0x1403AD0A8 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1403AD16C (MiDbgWriteCheck.c)
 *     MmSetPageProtection @ 0x1403C2120 (MmSetPageProtection.c)
 *     MiPfnRangeIsZero @ 0x1403C8EF8 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403C9590 (MiDemoteValidLargePageOneLevel.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 *     MiReplaceImportEntry @ 0x1405905F0 (MiReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x140592BEC (MiAddTriageDumpPtes.c)
 *     MiUpdateForkMaps @ 0x1405BBD5C (MiUpdateForkMaps.c)
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MmChangeImageProtection @ 0x1406F5800 (MmChangeImageProtection.c)
 *     MmLockPagableDataSection @ 0x1406F5E50 (MmLockPagableDataSection.c)
 *     MiFreeDriverInitialization @ 0x14075F194 (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x14075F23C (MiFreeInitializationCode.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiDisablePagingOfDriver @ 0x140760730 (MiDisablePagingOfDriver.c)
 *     MiHandleDriverNonPagedSections @ 0x1407608BC (MiHandleDriverNonPagedSections.c)
 *     MmPageEntireDriver @ 0x140761010 (MmPageEntireDriver.c)
 *     MiImagePagable @ 0x140761128 (MiImagePagable.c)
 *     MiBackSystemImageWithPagefile @ 0x14080F6C8 (MiBackSystemImageWithPagefile.c)
 *     MiUnlockDriverCode @ 0x14081B420 (MiUnlockDriverCode.c)
 *     MiInitializeShadowPageTable @ 0x14082A974 (MiInitializeShadowPageTable.c)
 *     MiProtectSystemImage @ 0x14082B6F0 (MiProtectSystemImage.c)
 *     MiPrepareDriverPatchState @ 0x1409682E4 (MiPrepareDriverPatchState.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 *     MiReloadBootLoadedDrivers @ 0x140B04F8C (MiReloadBootLoadedDrivers.c)
 *     MiHandleBootImage @ 0x140B050A8 (MiHandleBootImage.c)
 *     MiFreeBootDriverPages @ 0x140B05620 (MiFreeBootDriverPages.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140B07074 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140B1A054 (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeDriverPtes @ 0x140B1A80C (MiInitializeDriverPtes.c)
 *     MiCheckLargePageOk @ 0x140B21BAC (MiCheckLargePageOk.c)
 *     MmDiscardDriverSection @ 0x140B2FE74 (MmDiscardDriverSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_PHYSICAL_ADDRESS(unsigned __int64 a1)
{
  unsigned int v1; // r10d
  __int64 v2; // rdx
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rax
  char v8; // r9
  __int64 v9; // [rsp+0h] [rbp-30h]
  unsigned __int64 v10; // [rsp+8h] [rbp-28h]
  unsigned __int64 v11; // [rsp+10h] [rbp-20h]
  unsigned __int64 v12; // [rsp+18h] [rbp-18h]
  __int64 v13; // [rsp+20h] [rbp-10h]

  v1 = 4;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 4LL;
  while ( 1 )
  {
    v3 = *(&v9 + v2--);
    --v1;
    v4 = *(_QWORD *)v3;
    if ( v3 >= 0xFFFFF6FB7DBED000uLL
      && v3 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
    {
      if ( (v4 & 1) == 0 )
        return 0LL;
      if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v7 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
          v8 = v4 | 0x20;
          if ( (v7 & 0x20) == 0 )
            v8 = v4;
          LOBYTE(v4) = v8;
          if ( (v7 & 0x42) != 0 )
            LOBYTE(v4) = v8 | 0x42;
        }
      }
    }
    if ( (v4 & 1) == 0 )
      return 0LL;
    if ( (v4 & 0x80u) != 0LL )
      break;
    if ( v2 == 1 )
      return 0LL;
  }
  return v1;
}
