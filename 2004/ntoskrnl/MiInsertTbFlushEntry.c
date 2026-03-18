/*
 * XREFs of MiInsertTbFlushEntry @ 0x1402B0EF0
 * Callers:
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiZeroPage @ 0x14023C480 (MiZeroPage.c)
 *     MiTerminateWsleCluster @ 0x140241DE0 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x140244AA0 (MiAgePteWorker.c)
 *     MiTrimPte @ 0x1402469E0 (MiTrimPte.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MiMakePteClean @ 0x140262EA4 (MiMakePteClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x140262F80 (MmSetAddressRangeModifiedEx.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiReplenishBitMap @ 0x14027CB50 (MiReplenishBitMap.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x1402AF480 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiFlushTbAsNeeded @ 0x1402B2D00 (MiFlushTbAsNeeded.c)
 *     MiWsleFlush @ 0x1402B30D0 (MiWsleFlush.c)
 *     MiGetPteFromCopyList @ 0x1402B4DE0 (MiGetPteFromCopyList.c)
 *     MiObtainSystemCacheView @ 0x1402B94B0 (MiObtainSystemCacheView.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 *     MmMapViewInSystemCache @ 0x1402BCE70 (MmMapViewInSystemCache.c)
 *     MiSetPagingOfDriver @ 0x1402DFC70 (MiSetPagingOfDriver.c)
 *     MiOutPageSingleKernelStack @ 0x1402F5850 (MiOutPageSingleKernelStack.c)
 *     MiZeroPageWorkMapping @ 0x14031A67C (MiZeroPageWorkMapping.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MiEmptyWorkingSetHelper @ 0x14032D8D4 (MiEmptyWorkingSetHelper.c)
 *     MiDeleteNonPagedPoolPte @ 0x14032DE00 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x14032E450 (MiInsertRecursiveTbFlushEntries.c)
 *     MiDeleteSystemPageTable @ 0x14032E4E0 (MiDeleteSystemPageTable.c)
 *     MiReplaceRotateWithDemandZero @ 0x140334CB0 (MiReplaceRotateWithDemandZero.c)
 *     MiZeroAndFlushPtes @ 0x1403374F0 (MiZeroAndFlushPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiReplacePageTablePage @ 0x14034221C (MiReplacePageTablePage.c)
 *     MiDeletePteWsleCluster @ 0x14034E960 (MiDeletePteWsleCluster.c)
 *     MiFlushDirtyBitsToPfn @ 0x1403519CC (MiFlushDirtyBitsToPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x140356C84 (MiMakeVaRangeNoAccess.c)
 *     MiFlushHyperSpace @ 0x14035FD80 (MiFlushHyperSpace.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiRevokeExecutePte @ 0x140372910 (MiRevokeExecutePte.c)
 *     MmSetPageProtection @ 0x140377AF0 (MmSetPageProtection.c)
 *     MiDeletePhysmemPte @ 0x14037C68C (MiDeletePhysmemPte.c)
 *     MiMapMemoryDumpMdl @ 0x140381734 (MiMapMemoryDumpMdl.c)
 *     MiClearSystemAccessBits @ 0x1403B6C9C (MiClearSystemAccessBits.c)
 *     MiMapMdlCommon @ 0x1403C56B4 (MiMapMdlCommon.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403EE798 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTable @ 0x1403EED30 (MiDeleteEmptyPageTable.c)
 *     MiZeroWithSystemPtes @ 0x1403EF588 (MiZeroWithSystemPtes.c)
 *     MiUnmapMdlCommon @ 0x14052C254 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14052CCE0 (MmProtectMdlSystemAddress.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405311FC (MiDeprioritizeVirtualAddresses.c)
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 *     MiTrimPteWorker @ 0x140536D18 (MiTrimPteWorker.c)
 *     MiDecommitLargePte @ 0x140537710 (MiDecommitLargePte.c)
 *     MiClearDriverHotPatchPtes @ 0x140538F58 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x140539CCC (MiUnmapPatchTable.c)
 *     MiUnmapRetpolineStubs @ 0x14053ED78 (MiUnmapRetpolineStubs.c)
 *     MiLargePageFault @ 0x1405435E4 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x1405451CC (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x140545660 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x140546A74 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x140547E94 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x140548DC8 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x14054A4BC (MiDeleteLargeUserPde.c)
 *     MiFlushKernelCfgBitmap @ 0x14054E54C (MiFlushKernelCfgBitmap.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiScrubLargeMappedPage @ 0x14055E5E8 (MiScrubLargeMappedPage.c)
 *     MiEliminateZeroPages @ 0x1406074A0 (MiEliminateZeroPages.c)
 *     MiProtectLargeKernelHalRange @ 0x140789240 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1408CE364 (MmDeleteShadowMapping.c)
 *     MmFreeLoaderBlock @ 0x140A44F90 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A46408 (MiMarkBootKernelStack.c)
 *     MiTradeBootImagePage @ 0x140A48284 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140A48474 (MiFreeBootDriverPages.c)
 *     MiInitializeTbFlush @ 0x140A536F8 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A70A94 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140333580 (MiCompressTbFlushList.c)
 *     qsort @ 0x1403CF4C0 (qsort.c)
 */

unsigned __int64 __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned int v8; // r8d
  int v9; // r10d
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r11
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  size_t v15; // rcx
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rax

  v6 = 4096LL << (9 * (unsigned __int8)a4);
  v7 = a2;
  if ( *(_DWORD *)a1 != 1 )
  {
    v17 = *(_BYTE *)(a1 + 4);
    if ( (v17 & 8) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a1 + 4) = v17 | 8;
  }
  v8 = *(_DWORD *)(a1 + 12);
  v9 = 1;
  if ( !v8 || (*(_BYTE *)(a1 + 4) & 4) != 0 )
  {
    result = 0LL;
  }
  else
  {
    result = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24);
    if ( ((result >> 10) & 3) != a4 )
      goto LABEL_11;
    result &= 0xFFFFFFFFFFFFF000uLL;
    v11 = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24) & 0x3FFLL;
    if ( result + v6 * (v11 + 1) != v7 )
      goto LABEL_11;
    result = v11 + a3;
    if ( v11 + a3 > 0x3FF || result <= v11 )
      goto LABEL_11;
    result = 1LL;
  }
  if ( (_DWORD)result )
  {
    v16 = a1 + 8LL * (v8 - 1);
    result = *(_QWORD *)(v16 + 24);
    *(_QWORD *)(a1 + 16) += a3;
    *(_QWORD *)(v16 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
    return result;
  }
LABEL_11:
  if ( !v8 || (*(_BYTE *)(a1 + 4) & 4) != 0 )
  {
    v9 = 0;
    v12 = v6 * a3;
  }
  else
  {
    result = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24);
    if ( ((result >> 10) & 3) != a4 )
      goto LABEL_14;
    v12 = a3 * v6;
    if ( (result & 0xFFFFFFFFFFFFF000uLL) != a3 * v6 + v7 )
      goto LABEL_14;
    result &= 0x3FFu;
    if ( result + a3 <= result || result + a3 > 0x3FF )
      goto LABEL_14;
  }
  if ( v9 )
  {
    v18 = a1 + 8LL * (v8 - 1);
    v19 = *(_QWORD *)(v18 + 24);
    *(_QWORD *)(a1 + 16) += a3;
    result = v19 - v12;
    *(_QWORD *)(v18 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
    return result;
  }
LABEL_14:
  if ( v8 >= *(_DWORD *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 5) = 1;
  }
  else if ( a3 )
  {
    v13 = (unsigned __int64)(a4 & 3) << 10;
    while ( 1 )
    {
      v14 = 1024LL;
      if ( (unsigned __int64)(a3 - 1) <= 0x3FF )
        v14 = a3;
      a3 -= v14;
      result = v13 | v7 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v14 - 1) & 0x3FF;
      v7 += v14 * v6;
      *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 12))++ + 24) = result;
      v15 = *(unsigned int *)(a1 + 12);
      *(_QWORD *)(a1 + 16) += v14;
      if ( (_DWORD)v15 == *(_DWORD *)(a1 + 8) && (*(_BYTE *)(a1 + 4) & 4) == 0 )
      {
        qsort((void *)(a1 + 24), v15, 8uLL, MiTbFlushSort);
        MiCompressTbFlushList(a1);
        result = *(unsigned int *)(a1 + 12);
        if ( (_DWORD)result == *(_DWORD *)(a1 + 8) )
          break;
      }
      if ( !a3 )
        return result;
    }
    if ( a3 )
    {
      *(_BYTE *)(a1 + 5) = 1;
      *(_QWORD *)(a1 + 16) = result;
    }
  }
  return result;
}
