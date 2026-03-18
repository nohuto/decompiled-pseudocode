/*
 * XREFs of MiInsertTbFlushEntry @ 0x14021E270
 * Callers:
 *     MiReplenishBitMap @ 0x140203840 (MiReplenishBitMap.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x14021C800 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiFlushTbAsNeeded @ 0x140220080 (MiFlushTbAsNeeded.c)
 *     MiWsleFlush @ 0x140220450 (MiWsleFlush.c)
 *     MiGetPteFromCopyList @ 0x140222160 (MiGetPteFromCopyList.c)
 *     MiObtainSystemCacheView @ 0x140226830 (MiObtainSystemCacheView.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MmMapViewInSystemCache @ 0x14022A1F0 (MmMapViewInSystemCache.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     MiTerminateWsleCluster @ 0x14029AE10 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x14029DAD0 (MiAgePteWorker.c)
 *     MiTrimPte @ 0x14029FA10 (MiTrimPte.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MiMakePteClean @ 0x1402BBED4 (MiMakePteClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiEmptyWorkingSetHelper @ 0x1402F1B34 (MiEmptyWorkingSetHelper.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402F2060 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1402F26B0 (MiInsertRecursiveTbFlushEntries.c)
 *     MiDeleteSystemPageTable @ 0x1402F2740 (MiDeleteSystemPageTable.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402F7C80 (MiReplaceRotateWithDemandZero.c)
 *     MiZeroAndFlushPtes @ 0x1402FA4C0 (MiZeroAndFlushPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     MiReplacePageTablePage @ 0x1403047BC (MiReplacePageTablePage.c)
 *     MiDeletePteWsleCluster @ 0x140310EB8 (MiDeletePteWsleCluster.c)
 *     MiFlushDirtyBitsToPfn @ 0x140313B7C (MiFlushDirtyBitsToPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x140319094 (MiMakeVaRangeNoAccess.c)
 *     MiFlushHyperSpace @ 0x140322470 (MiFlushHyperSpace.c)
 *     MiSetPagingOfDriver @ 0x140324D70 (MiSetPagingOfDriver.c)
 *     MiZeroPageWorkMapping @ 0x1403499BC (MiZeroPageWorkMapping.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiOutPageSingleKernelStack @ 0x140351830 (MiOutPageSingleKernelStack.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiRevokeExecutePte @ 0x140371B00 (MiRevokeExecutePte.c)
 *     MmSetPageProtection @ 0x140376CE0 (MmSetPageProtection.c)
 *     MiDeletePhysmemPte @ 0x14037BA88 (MiDeletePhysmemPte.c)
 *     MiMapMemoryDumpMdl @ 0x140380EF4 (MiMapMemoryDumpMdl.c)
 *     MiClearSystemAccessBits @ 0x1403B5E6C (MiClearSystemAccessBits.c)
 *     MiMapMdlCommon @ 0x1403C4744 (MiMapMdlCommon.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403ED6D8 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTable @ 0x1403ED9D0 (MiDeleteEmptyPageTable.c)
 *     MiZeroWithSystemPtes @ 0x1403EE228 (MiZeroWithSystemPtes.c)
 *     MiUnmapMdlCommon @ 0x14052BC04 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14052C690 (MmProtectMdlSystemAddress.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140530BAC (MiDeprioritizeVirtualAddresses.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MiTrimPteWorker @ 0x1405366C8 (MiTrimPteWorker.c)
 *     MiDecommitLargePte @ 0x1405370C0 (MiDecommitLargePte.c)
 *     MiClearDriverHotPatchPtes @ 0x140538908 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053967C (MiUnmapPatchTable.c)
 *     MiUnmapRetpolineStubs @ 0x14053E728 (MiUnmapRetpolineStubs.c)
 *     MiLargePageFault @ 0x140542F94 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x140544B7C (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x140545010 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x140546424 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x140547844 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x140549E6C (MiDeleteLargeUserPde.c)
 *     MiFlushKernelCfgBitmap @ 0x14054DEFC (MiFlushKernelCfgBitmap.c)
 *     MiBuildForkPte @ 0x1405527CC (MiBuildForkPte.c)
 *     MiScrubLargeMappedPage @ 0x14055DF98 (MiScrubLargeMappedPage.c)
 *     MiEliminateZeroPages @ 0x14063C5F0 (MiEliminateZeroPages.c)
 *     MiProtectLargeKernelHalRange @ 0x1407838B0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1408CD014 (MmDeleteShadowMapping.c)
 *     MmFreeLoaderBlock @ 0x140A3F76C (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A40BAC (MiMarkBootKernelStack.c)
 *     MiTradeBootImagePage @ 0x140A42A24 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140A42C14 (MiFreeBootDriverPages.c)
 *     MiInitializeTbFlush @ 0x140A4D9F8 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A6FE3C (MiProtectSharedUserPage.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x1402F66E0 (MiCompressTbFlushList.c)
 *     qsort @ 0x1403CE680 (qsort.c)
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
