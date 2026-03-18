/*
 * XREFs of MI_IS_PHYSICAL_ADDRESS @ 0x14027DD60
 * Callers:
 *     MiLockPagableImageSection @ 0x14027D910 (MiLockPagableImageSection.c)
 *     MiMappingHasIoTracker @ 0x14027DCD0 (MiMappingHasIoTracker.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiProbeLockFrame @ 0x1402A6D80 (MiProbeLockFrame.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MiMappingHasIoReferences @ 0x1402F9F54 (MiMappingHasIoReferences.c)
 *     MmUnmapIoSpace @ 0x1402FA3B0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1402FA4C0 (MiZeroAndFlushPtes.c)
 *     MiGetPhysicalAddress @ 0x14033BB94 (MiGetPhysicalAddress.c)
 *     MmSetPageProtection @ 0x140376CE0 (MmSetPageProtection.c)
 *     MiCountSystemImageCommitment @ 0x14039B774 (MiCountSystemImageCommitment.c)
 *     MiPfnRangeIsZero @ 0x1403B5918 (MiPfnRangeIsZero.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1403B5F58 (MiDemoteValidLargePageOneLevel.c)
 *     MmProtectMdlSystemAddress @ 0x14052C690 (MmProtectMdlSystemAddress.c)
 *     MmReplaceImportEntry @ 0x14052FDFC (MmReplaceImportEntry.c)
 *     MiAddTriageDumpPtes @ 0x14053274C (MiAddTriageDumpPtes.c)
 *     MiDbgReleaseAddress @ 0x14054059C (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140540B9C (MiDbgWriteCheck.c)
 *     MiUpdateForkMaps @ 0x140555CB0 (MiUpdateForkMaps.c)
 *     MiImagePagable @ 0x1406EF36C (MiImagePagable.c)
 *     MmPageEntireDriver @ 0x1406EF3D0 (MmPageEntireDriver.c)
 *     MmLockPagableDataSection @ 0x1406EF480 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1406EF580 (MmChangeImageProtection.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiHandleDriverNonPagedSections @ 0x1407452D0 (MiHandleDriverNonPagedSections.c)
 *     MiFinalizeImageRetpolineState @ 0x140745674 (MiFinalizeImageRetpolineState.c)
 *     MiFreeDriverInitialization @ 0x140747594 (MiFreeDriverInitialization.c)
 *     MiFreeInitializationCode @ 0x14074764C (MiFreeInitializationCode.c)
 *     MiDisablePagingOfDriver @ 0x140747880 (MiDisablePagingOfDriver.c)
 *     MiUnlockDriverCode @ 0x14075C8E4 (MiUnlockDriverCode.c)
 *     MiBackSystemImageWithPagefile @ 0x14076BB38 (MiBackSystemImageWithPagefile.c)
 *     MiInitializeShadowPageTable @ 0x1407827B4 (MiInitializeShadowPageTable.c)
 *     MiProtectSystemImage @ 0x140783ACC (MiProtectSystemImage.c)
 *     MiPrepareDriverPatchState @ 0x1408C03EC (MiPrepareDriverPatchState.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C48A8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiReloadBootLoadedDrivers @ 0x140A425C0 (MiReloadBootLoadedDrivers.c)
 *     MiHandleBootImage @ 0x140A426D8 (MiHandleBootImage.c)
 *     MiFreeBootDriverPages @ 0x140A42C14 (MiFreeBootDriverPages.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140A435EC (MiApplyImportOptimizationToBootDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A5E5DC (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitializeDriverPtes @ 0x140A5F4D8 (MiInitializeDriverPtes.c)
 *     MiCheckLargePageOk @ 0x140A60248 (MiCheckLargePageOk.c)
 *     MmDiscardDriverSection @ 0x140A90D10 (MmDiscardDriverSection.c)
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
