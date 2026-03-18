/*
 * XREFs of MiInsertTbFlushEntry @ 0x1402CF280
 * Callers:
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140200D20 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiZeroAndFlushPtes @ 0x1402157EC (MiZeroAndFlushPtes.c)
 *     MiZeroPageWorkMapping @ 0x14022689C (MiZeroPageWorkMapping.c)
 *     MiEmptyWorkingSetHelper @ 0x140226EE0 (MiEmptyWorkingSetHelper.c)
 *     MiDeleteEmptyPageTable @ 0x140227360 (MiDeleteEmptyPageTable.c)
 *     MiDeleteNonPagedPoolPte @ 0x140228170 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402285E8 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140228BCC (MiInsertRecursiveTbFlushEntries.c)
 *     MiDeleteSystemPageTable @ 0x140228CD0 (MiDeleteSystemPageTable.c)
 *     MiDeletePteWsleCluster @ 0x1402405EC (MiDeletePteWsleCluster.c)
 *     MiMakeVaRangeNoAccess @ 0x14024D7F4 (MiMakeVaRangeNoAccess.c)
 *     MiDeletePhysmemPte @ 0x140259000 (MiDeletePhysmemPte.c)
 *     MiReplenishBitMap @ 0x1402697F0 (MiReplenishBitMap.c)
 *     MiOutPageSingleKernelStack @ 0x1402704A0 (MiOutPageSingleKernelStack.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiMakePteClean @ 0x14028ECFC (MiMakePteClean.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiWsleFlush @ 0x1402C1F50 (MiWsleFlush.c)
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 *     MiGetPteFromCopyList @ 0x1402CBF80 (MiGetPteFromCopyList.c)
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiSetPagingOfDriver @ 0x1402D8F30 (MiSetPagingOfDriver.c)
 *     MiRevokeExecutePte @ 0x1402E96B0 (MiRevokeExecutePte.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x14032E130 (MiRevertValidPte.c)
 *     MiTerminateWsleCluster @ 0x14032F750 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x140332670 (MiAgePteWorker.c)
 *     MmSetAddressRangeModifiedEx @ 0x14033D860 (MmSetAddressRangeModifiedEx.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiFlushTbAsNeeded @ 0x140352EB0 (MiFlushTbAsNeeded.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiFlushDirtyBitsToPfn @ 0x14036B408 (MiFlushDirtyBitsToPfn.c)
 *     MiReplacePageTablePage @ 0x14036CF60 (MiReplacePageTablePage.c)
 *     MiTrimPte @ 0x1403731C0 (MiTrimPte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140374BBC (MiDeprioritizeVirtualAddresses.c)
 *     MiMapMemoryDumpMdl @ 0x14038C4CC (MiMapMemoryDumpMdl.c)
 *     MmSetPageProtection @ 0x1403C2120 (MmSetPageProtection.c)
 *     MiClearSystemAccessBits @ 0x1403C9494 (MiClearSystemAccessBits.c)
 *     MiFlushHyperSpace @ 0x1403D3284 (MiFlushHyperSpace.c)
 *     MiMapMdlCommon @ 0x1403D77D4 (MiMapMdlCommon.c)
 *     MiClearPteAccessedBitRange @ 0x140419160 (MiClearPteAccessedBitRange.c)
 *     MiUnmapMdlCommon @ 0x1405853E4 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 *     MiReadyReservedView @ 0x14059219C (MiReadyReservedView.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiTrimPteWorker @ 0x1405972B4 (MiTrimPteWorker.c)
 *     MiDecommitLargePte @ 0x140597940 (MiDecommitLargePte.c)
 *     MiPersistMdl @ 0x14059FECC (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x1405A1128 (MiTransferFileExtent.c)
 *     MiUnmapRetpolineStubs @ 0x1405A2A48 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x1405A2F88 (MiClearDriverHotPatchPtes.c)
 *     MiLargePageFault @ 0x1405A7708 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x1405A94F4 (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x1405A9744 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x1405AAA4C (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x1405ABD20 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x1405AE310 (MiWritePteHighLevelIsr.c)
 *     MiDeleteLargeUserPde @ 0x1405B07F4 (MiDeleteLargeUserPde.c)
 *     MiZeroWithSystemPtes @ 0x1405B2A90 (MiZeroWithSystemPtes.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiScrubLargeMappedPage @ 0x1405C4FB8 (MiScrubLargeMappedPage.c)
 *     MiEliminateZeroPages @ 0x1406F5BB0 (MiEliminateZeroPages.c)
 *     MiProtectLargeKernelHalRange @ 0x14082B4E0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x140978B04 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x14097FA08 (MmUnmapProtectedKernelPageRange.c)
 *     MiTradeBootImagePage @ 0x140B05434 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140B05620 (MiFreeBootDriverPages.c)
 *     MiMarkBootKernelStack @ 0x140B05B1C (MiMarkBootKernelStack.c)
 *     MiInitializeTbFlush @ 0x140B09340 (MiInitializeTbFlush.c)
 *     MmFreeLoaderBlock @ 0x140B190F0 (MmFreeLoaderBlock.c)
 *     MiProtectSharedUserPage @ 0x140B31048 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x14022BAE0 (MiCompressTbFlushList.c)
 *     qsort @ 0x1403E1E70 (qsort.c)
 */

void __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned int v8; // r8d
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  size_t v16; // rcx
  char v17; // al
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax

  v6 = 4096LL << (9 * (unsigned __int8)a4);
  v7 = a2;
  if ( *(_DWORD *)a1 != 1 )
  {
    v17 = *(_BYTE *)(a1 + 4);
    if ( (v17 & 8) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a1 + 4) = v17 | 8;
  }
  v8 = *(_DWORD *)(a1 + 12);
  if ( !v8 || (*(_BYTE *)(a1 + 4) & 4) != 0 )
    goto LABEL_12;
  if ( ((*(_QWORD *)(a1 + 8LL * (v8 - 1) + 24) >> 10) & 3LL) == a4 )
  {
    v9 = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24) & 0x3FFLL;
    if ( (*(_QWORD *)(a1 + 8LL * (v8 - 1) + 24) & 0xFFFFFFFFFFFFF000uLL) + v6 * (v9 + 1) == v7
      && v9 + a3 > v9
      && v9 + a3 <= 0x3FF )
    {
      v10 = a1 + 8LL * (v8 - 1);
      v11 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)(a1 + 16) += a3;
      *(_QWORD *)(v10 + 24) = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v11 + a3)) & 0x3FF;
      return;
    }
  }
  if ( (*(_BYTE *)(a1 + 4) & 4) == 0
    && (v12 = *(_QWORD *)(a1 + 8LL * (v8 - 1) + 24), ((v12 >> 10) & 3) == a4)
    && (v12 & 0xFFFFFFFFFFFFF000uLL) == a3 * v6 + v7
    && (v19 = v12 & 0x3FF, v19 + a3 > v19)
    && v19 + a3 <= 0x3FF )
  {
    v20 = a1 + 8LL * (v8 - 1);
    v21 = *(_QWORD *)(v20 + 24);
    *(_QWORD *)(a1 + 16) += a3;
    *(_QWORD *)(v20 + 24) = (v21 - a3 * v6) ^ ((unsigned __int16)(v21 - a3 * v6) ^ (unsigned __int16)(v21 - a3 * v6 + a3)) & 0x3FF;
  }
  else
  {
LABEL_12:
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
        v15 = v13 | v7 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v14 - 1) & 0x3FF;
        v7 += v14 * v6;
        *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 12))++ + 24) = v15;
        v16 = *(unsigned int *)(a1 + 12);
        *(_QWORD *)(a1 + 16) += v14;
        if ( (_DWORD)v16 == *(_DWORD *)(a1 + 8) && (*(_BYTE *)(a1 + 4) & 4) == 0 )
        {
          qsort((void *)(a1 + 24), v16, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
          MiCompressTbFlushList(a1);
          v18 = *(unsigned int *)(a1 + 12);
          if ( (_DWORD)v18 == *(_DWORD *)(a1 + 8) )
            break;
        }
        if ( !a3 )
          return;
      }
      if ( a3 )
      {
        *(_BYTE *)(a1 + 5) = 1;
        *(_QWORD *)(a1 + 16) = v18;
      }
    }
  }
}
