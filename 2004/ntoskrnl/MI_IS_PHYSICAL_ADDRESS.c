/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x140224D10
 * Callers:
 *     MiLockPagableImageSection @ 0x1402248C0 (MiLockPagableImageSection.c)
 *     MiMappingHasIoTracker @ 0x140224C80 (MiMappingHasIoTracker.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiProbeLockFrame @ 0x14024DD50 (MiProbeLockFrame.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MiMappingHasIoReferences @ 0x140336F84 (MiMappingHasIoReferences.c)
 *     MmUnmapIoSpace @ 0x1403373E0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1403374F0 (MiZeroAndFlushPtes.c)
 *     MiGetPhysicalAddress @ 0x140361804 (MiGetPhysicalAddress.c)
 *     MmSetPageProtection @ 0x140377AF0 (MmSetPageProtection.c)
 *     MiCountSystemImageCommitment @ 0x14039BF04 (MiCountSystemImageCommitment.c)
 *     MiPfnRangeIsZero @ 0x1403B6748 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B6D88 (MiDemoteValidLargePageOneLevel.c)
 *     MmProtectMdlSystemAddress @ 0x14052CCE0 (MmProtectMdlSystemAddress.c)
 *     MmReplaceImportEntry @ 0x14053044C (MmReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x140532D9C (MiAddTriageDumpPtes.c)
 *     MiDbgReleaseAddress @ 0x140540BEC (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1405411EC (MiDbgWriteCheck.c)
 *     MiUpdateForkMaps @ 0x140556300 (MiUpdateForkMaps.c)
 *     MiImagePagable @ 0x1406A884C (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1406A88B0 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1406A8960 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406A8A60 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiHandleDriverNonPagedSections @ 0x140746E50 (MiHandleDriverNonPagedSections.c)
 *     MiFinalizeImageRetpolineState @ 0x1407471F4 (MiFinalizeImageRetpolineState.c)
 *     MiFreeDriverInitialization @ 0x140749114 (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x1407491CC (MiFreeInitializationCode.c)
 *     MiDisablePagingOfDriver @ 0x140749400 (MiDisablePagingOfDriver.c)
 *     MiUnlockDriverCode @ 0x14075ED34 (MiUnlockDriverCode.c)
 *     MiBackSystemImageWithPagefile @ 0x14076E2D8 (MiBackSystemImageWithPagefile.c)
 *     MiInitializeShadowPageTable @ 0x140788138 (MiInitializeShadowPageTable.c)
 *     MiProtectSystemImage @ 0x14078945C (MiProtectSystemImage.c)
 *     MiPrepareDriverPatchState @ 0x1408C173C (MiPrepareDriverPatchState.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C5BF8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiReloadBootLoadedDrivers @ 0x140A47E20 (MiReloadBootLoadedDrivers.c)
 *     MiHandleBootImage @ 0x140A47F38 (MiHandleBootImage.c)
 *     MiFreeBootDriverPages @ 0x140A48474 (MiFreeBootDriverPages.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140A48E4C (MiApplyImportOptimizationToBootDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A5D67C (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeDriverPtes @ 0x140A625D8 (MiInitializeDriverPtes.c)
 *     MiCheckLargePageOk @ 0x140A63438 (MiCheckLargePageOk.c)
 *     MmDiscardDriverSection @ 0x140A90300 (MmDiscardDriverSection.c)
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
