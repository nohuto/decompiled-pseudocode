/*
 * XREFs of MiMapSystemImageWithLargePage @ 0x14098325C
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiHandleBootImage @ 0x140B050A8 (MiHandleBootImage.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140213FA8 (MiFreeContiguousPages.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     MiIsRetpolineEnabled @ 0x14029C6C4 (MiIsRetpolineEnabled.c)
 *     MiIsImportOptimizationEnabled @ 0x14029C6DC (MiIsImportOptimizationEnabled.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     MiMapWithLargePages @ 0x1403C7090 (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403C736C (MiGetPageTablesForLargeMap.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiPageToNode @ 0x14057F520 (MiPageToNode.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1405852C0 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x14059A6F4 (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x1405C3380 (MiRoundUpToPowerOf2SizeT.c)
 *     RtlPerformRetpolineRelocationsOnImage @ 0x1405EF20C (RtlPerformRetpolineRelocationsOnImage.c)
 *     MiReleasePrivilegedPtes @ 0x1406EBA70 (MiReleasePrivilegedPtes.c)
 *     MiReservePrivilegedPtes @ 0x140761C34 (MiReservePrivilegedPtes.c)
 *     MiChargeSystemImageCommitment @ 0x140761D88 (MiChargeSystemImageCommitment.c)
 *     MiUnmapLargeDriver @ 0x1409835EC (MiUnmapLargeDriver.c)
 *     LdrRelocateImageWithBias @ 0x1409BE864 (LdrRelocateImageWithBias.c)
 */

char *__fastcall MiMapSystemImageWithLargePage(__int64 a1, unsigned int a2, const void *a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // r15
  unsigned __int64 i; // rdx
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  int v11; // eax
  unsigned __int64 PageTablesForLargeMap; // rax
  char *v13; // rbx
  int v14; // edx
  size_t v15; // r13
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // eax
  bool IsRetpolineEnabled; // al
  int v20; // eax
  unsigned __int64 PteAddress; // rax
  unsigned int inited; // eax
  char *AnyMultiplexedVm; // [rsp+70h] [rbp-88h]
  _QWORD v24[14]; // [rsp+88h] [rbp-70h] BYREF
  ULONG_PTR v26; // [rsp+118h] [rbp+20h] BYREF

  v3 = a2;
  v26 = 0LL;
  memset(v24, 0, 56);
  if ( a1 )
  {
    v5 = MiSectionControlArea(a1);
    for ( i = v5 + 128; i; i = *(_QWORD *)(i + 16) )
    {
      if ( (*(_BYTE *)(i + 32) & 0x3E) == 0 )
        return 0LL;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v7 = v3;
  v8 = (v3 + (unsigned int)dword_140C4F404 + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
  v9 = MiRoundUpToPowerOf2SizeT(v8);
  if ( (int)MiFindContiguousPagesEx(
              (__int64)&MiSystemPartition,
              0x200uLL,
              qword_140C50840,
              v9,
              0,
              v9,
              1u,
              0x80000000,
              0x80000000,
              0x100000,
              0,
              0LL,
              (__int64 *)&v26) < 0 )
    return 0LL;
  if ( v9 > v8 )
    MiFreeContiguousPages(v8 + v26, v9 - v8);
  v11 = MiPageToNode(v26);
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v8, 12, 1LL, v11 + 1);
  v13 = (char *)PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
    goto LABEL_13;
  MiGetPteAddress(PageTablesForLargeMap);
  if ( (int)MiReservePrivilegedPtes() < 0 )
  {
    MiUnmapLargeDriver(v13, v3);
LABEL_13:
    MiFreeContiguousPages(v26, v8);
    return 0LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiMapWithLargePages((__int64)AnyMultiplexedVm, (unsigned __int64)v13, v26, v8, v14, 6, v14);
  v15 = (unsigned int)((_DWORD)v3 << 12);
  memmove(v13, a3, v15);
  memset(&v13[v15], 0, (unsigned int)(dword_140C4F404 << 12));
  if ( MiIsRetpolineEnabled() )
    memmove(&v13[v15], Base, (unsigned int)(dword_140C4F440 << 12));
  v16 = RtlImageNtHeader((__int64)v13);
  v17 = v16;
  if ( *(_DWORD *)(v16 + 132) <= 5u
    || (v18 = *(_DWORD *)(v16 + 176)) != 0
    && (v18 + *(_DWORD *)(v17 + 180) > (unsigned int)v15
     || (int)LdrRelocateImageWithBias(v13) < 0
     || (MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled())
     && (IsRetpolineEnabled = MiIsRetpolineEnabled(),
         v20 = RtlPerformRetpolineRelocationsOnImage(
                 (int)v13,
                 (int)v13,
                 v15,
                 (int)v13 + (int)v15,
                 (__int64)Base,
                 IsRetpolineEnabled),
         (int)(v20 + 0x80000000) >= 0)
     && v20 != -1073741637) )
  {
    MiReleasePrivilegedPtes();
    MiUnmapLargeDriver(v13, v7);
    return 0LL;
  }
  *(_QWORD *)(v17 + 48) = v13;
  if ( a1 )
  {
    PteAddress = MiGetPteAddress((unsigned __int64)a3);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v5, PteAddress, v7, 1, v24);
    MiChargeSystemImageCommitment(a1);
  }
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 6);
    MiLogPerfMemoryRangeEvent((__int64)v13, 0LL, inited, v8);
  }
  return v13;
}
