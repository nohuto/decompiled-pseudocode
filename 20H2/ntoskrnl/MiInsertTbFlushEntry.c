/*
 * XREFs of MiInsertTbFlushEntry @ 0x1402B8FC0
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiReplenishBitMap @ 0x14023E340 (MiReplenishBitMap.c)
 *     MiOutPageSingleKernelStack @ 0x140250980 (MiOutPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MiReplaceRotateWithDemandZero @ 0x14025E4B0 (MiReplaceRotateWithDemandZero.c)
 *     MiZeroAndFlushPtes @ 0x1402612E0 (MiZeroAndFlushPtes.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiGetPteFromCopyList @ 0x140290F30 (MiGetPteFromCopyList.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MmMapViewInSystemCache @ 0x1402983C0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x140299AE0 (MiObtainSystemCacheView.c)
 *     MiMakePteClean @ 0x14029EC0C (MiMakePteClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x14029ECE0 (MmSetAddressRangeModifiedEx.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiWsleFlush @ 0x1402AAC40 (MiWsleFlush.c)
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x1402B7550 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiFlushTbAsNeeded @ 0x1402B9260 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x1402BAF60 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x1402BCE70 (MiAgePteWorker.c)
 *     MiTerminateWsleCluster @ 0x1402BF020 (MiTerminateWsleCluster.c)
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     MiTrimPte @ 0x1402CF420 (MiTrimPte.c)
 *     MiDeleteNonPagedPoolPte @ 0x1403015D0 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140301C90 (MiInsertRecursiveTbFlushEntries.c)
 *     MiSetPagingOfDriver @ 0x14030CEC4 (MiSetPagingOfDriver.c)
 *     MiEmptyWorkingSetHelper @ 0x140310234 (MiEmptyWorkingSetHelper.c)
 *     MiReplacePageTablePage @ 0x140313100 (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTable @ 0x140314340 (MiDeleteSystemPageTable.c)
 *     MiInsertLargeTbFlushEntry @ 0x140319B24 (MiInsertLargeTbFlushEntry.c)
 *     MiDeletePteWsleCluster @ 0x14031F1DC (MiDeletePteWsleCluster.c)
 *     MiFlushDirtyBitsToPfn @ 0x140322668 (MiFlushDirtyBitsToPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x140327684 (MiMakeVaRangeNoAccess.c)
 *     MiFlushHyperSpace @ 0x140330C14 (MiFlushHyperSpace.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 *     MiZeroPageWorkMapping @ 0x140351698 (MiZeroPageWorkMapping.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiRevokeExecutePte @ 0x140374860 (MiRevokeExecutePte.c)
 *     MmSetPageProtection @ 0x140379A80 (MmSetPageProtection.c)
 *     MiDeletePhysmemPte @ 0x14037E3BC (MiDeletePhysmemPte.c)
 *     MiMapMemoryDumpMdl @ 0x140383414 (MiMapMemoryDumpMdl.c)
 *     MiClearSystemAccessBits @ 0x1403B973C (MiClearSystemAccessBits.c)
 *     MiMapMdlCommon @ 0x1403C80A4 (MiMapMdlCommon.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F2C00 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTable @ 0x1403F31A0 (MiDeleteEmptyPageTable.c)
 *     MiZeroWithSystemPtes @ 0x1403F39F8 (MiZeroWithSystemPtes.c)
 *     MiUnmapMdlCommon @ 0x14052FC24 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1405306B0 (MmProtectMdlSystemAddress.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140534BCC (MiDeprioritizeVirtualAddresses.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     MiTrimPteWorker @ 0x14053A6E8 (MiTrimPteWorker.c)
 *     MiDecommitLargePte @ 0x14053B0E0 (MiDecommitLargePte.c)
 *     MiClearDriverHotPatchPtes @ 0x14053C928 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053D69C (MiUnmapPatchTable.c)
 *     MiUnmapRetpolineStubs @ 0x140542748 (MiUnmapRetpolineStubs.c)
 *     MiLargePageFault @ 0x140546FB4 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x140548B9C (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x140549030 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x14054A444 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x14054DE8C (MiDeleteLargeUserPde.c)
 *     MiFlushKernelCfgBitmap @ 0x140551F1C (MiFlushKernelCfgBitmap.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiScrubLargeMappedPage @ 0x140561FB8 (MiScrubLargeMappedPage.c)
 *     MiEliminateZeroPages @ 0x14062A9D0 (MiEliminateZeroPages.c)
 *     MiProtectLargeKernelHalRange @ 0x140796F50 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1408D41A4 (MmDeleteShadowMapping.c)
 *     MmFreeLoaderBlock @ 0x140A4B230 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4C6A4 (MiMarkBootKernelStack.c)
 *     MiTradeBootImagePage @ 0x140A4E514 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140A4E704 (MiFreeBootDriverPages.c)
 *     MiInitializeTbFlush @ 0x140A53D78 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A76E38 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140306530 (MiCompressTbFlushList.c)
 *     qsort @ 0x1403D2150 (qsort.c)
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
