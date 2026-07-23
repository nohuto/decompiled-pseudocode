/*
 * XREFs of MiInsertTbFlushEntry @ 0x140340AC0
 * Callers:
 *     MiReplenishBitMap @ 0x140205D50 (MiReplenishBitMap.c)
 *     MiZeroAndFlushPtes @ 0x1402180C0 (MiZeroAndFlushPtes.c)
 *     MiReplaceRotateWithDemandZero @ 0x140219184 (MiReplaceRotateWithDemandZero.c)
 *     MiZeroPageWorkMapping @ 0x14021987C (MiZeroPageWorkMapping.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiDeleteNonPagedPoolPte @ 0x14021ADB0 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x14021B470 (MiInsertRecursiveTbFlushEntries.c)
 *     MiFlushDirtyBitsToPfn @ 0x14021E2BC (MiFlushDirtyBitsToPfn.c)
 *     MiReplacePageTablePage @ 0x140224260 (MiReplacePageTablePage.c)
 *     MiDeleteSystemPageTable @ 0x140234FA0 (MiDeleteSystemPageTable.c)
 *     MiDeletePteWsleCluster @ 0x14023F0C8 (MiDeletePteWsleCluster.c)
 *     MiMakeVaRangeNoAccess @ 0x1402470B4 (MiMakeVaRangeNoAccess.c)
 *     MiFlushHyperSpace @ 0x140251200 (MiFlushHyperSpace.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiSetPagingOfDriver @ 0x14025BABC (MiSetPagingOfDriver.c)
 *     MiOutPageSingleKernelStack @ 0x140286DB0 (MiOutPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiGetPteFromCopyList @ 0x1402E51D0 (MiGetPteFromCopyList.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiEmptyWorkingSetHelper @ 0x140311284 (MiEmptyWorkingSetHelper.c)
 *     MiTrimPte @ 0x140313650 (MiTrimPte.c)
 *     MiMakePteClean @ 0x14031A2BC (MiMakePteClean.c)
 *     MmSetAddressRangeModifiedEx @ 0x14031A390 (MmSetAddressRangeModifiedEx.c)
 *     MmMapViewInSystemCache @ 0x14031BB30 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x14031D250 (MiObtainSystemCacheView.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiWsleFlush @ 0x140332240 (MiWsleFlush.c)
 *     NtUnlockVirtualMemory @ 0x140338C80 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x14033F050 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiFlushTbAsNeeded @ 0x140340D60 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x1403446E0 (MiAgePteWorker.c)
 *     MiTerminateWsleCluster @ 0x140345A70 (MiTerminateWsleCluster.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiRevokeExecutePte @ 0x140374540 (MiRevokeExecutePte.c)
 *     MmSetPageProtection @ 0x1403797D0 (MmSetPageProtection.c)
 *     MiDeletePhysmemPte @ 0x14037E38C (MiDeletePhysmemPte.c)
 *     MiMapMemoryDumpMdl @ 0x140383BB4 (MiMapMemoryDumpMdl.c)
 *     MiClearSystemAccessBits @ 0x1403BA2AC (MiClearSystemAccessBits.c)
 *     MiMapMdlCommon @ 0x1403C8DE4 (MiMapMdlCommon.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F4448 (MiDeleteTopLevelSessionMapping.c)
 *     MiDeleteEmptyPageTable @ 0x1403F49E0 (MiDeleteEmptyPageTable.c)
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiUnmapMdlCommon @ 0x140531964 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x1405323F0 (MmProtectMdlSystemAddress.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14053690C (MiDeprioritizeVirtualAddresses.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MiTrimPteWorker @ 0x14053C428 (MiTrimPteWorker.c)
 *     MiDecommitLargePte @ 0x14053CE20 (MiDecommitLargePte.c)
 *     MiClearDriverHotPatchPtes @ 0x14053E668 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapPatchTable @ 0x14053F3DC (MiUnmapPatchTable.c)
 *     MiUnmapRetpolineStubs @ 0x140544488 (MiUnmapRetpolineStubs.c)
 *     MiLargePageFault @ 0x140548CF4 (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549C68 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x14054A8DC (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x14054AD70 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x14054C184 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 *     MiDeleteLargeUserPde @ 0x14054FB9C (MiDeleteLargeUserPde.c)
 *     MiFlushKernelCfgBitmap @ 0x140553C2C (MiFlushKernelCfgBitmap.c)
 *     MiBuildForkPte @ 0x1405584FC (MiBuildForkPte.c)
 *     MiScrubLargeMappedPage @ 0x140563CC8 (MiScrubLargeMappedPage.c)
 *     MiEliminateZeroPages @ 0x14063B370 (MiEliminateZeroPages.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1670 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x1408D1AC4 (MmDeleteShadowMapping.c)
 *     MmFreeLoaderBlock @ 0x140A4D7D0 (MmFreeLoaderBlock.c)
 *     MiMarkBootKernelStack @ 0x140A4EC44 (MiMarkBootKernelStack.c)
 *     MiTradeBootImagePage @ 0x140A50E60 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140A51050 (MiFreeBootDriverPages.c)
 *     MiInitializeTbFlush @ 0x140A56380 (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140A74CE0 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x140220720 (MiCompressTbFlushList.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
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
        qsort((void *)(a1 + 24), v15, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
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
