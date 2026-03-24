/*
 * XREFs of MiMapSystemImageWithLargePage @ 0x1408DA3D0
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BAFC (MmLoadSystemImageEx.c)
 *     MiHandleBootImage @ 0x140A4FB14 (MiHandleBootImage.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140296068 (MiFreeContiguousPages.c)
 *     MiPageToNode @ 0x1402D03D4 (MiPageToNode.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiFindContiguousPages @ 0x1403016E0 (MiFindContiguousPages.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     MiSectionControlArea @ 0x140315260 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14031C950 (RtlImageNtHeader.c)
 *     MiIsImportOptimizationEnabled @ 0x14035E8EC (MiIsImportOptimizationEnabled.c)
 *     MiIsRetpolineEnabled @ 0x14035E904 (MiIsRetpolineEnabled.c)
 *     MiMapWithLargePages @ 0x1403B8AEC (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B8DC4 (MiGetPageTablesForLargeMap.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053161C (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x140544A58 (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x14055BECC (MiRoundUpToPowerOf2SizeT.c)
 *     RtlPerformRetpolineRelocationsOnImage @ 0x14058FE7C (RtlPerformRetpolineRelocationsOnImage.c)
 *     MiReservePrivilegedPtes @ 0x14075EAD0 (MiReservePrivilegedPtes.c)
 *     MiChargeSystemImageCommitment @ 0x14075EB64 (MiChargeSystemImageCommitment.c)
 *     MiReleasePrivilegedPtes @ 0x140773A48 (MiReleasePrivilegedPtes.c)
 *     MiUnmapLargeDriver @ 0x1408DA744 (MiUnmapLargeDriver.c)
 *     LdrRelocateImageWithBias @ 0x140919364 (LdrRelocateImageWithBias.c)
 */

char *__fastcall MiMapSystemImageWithLargePage(__int64 a1, unsigned int a2, const void *a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // r15
  unsigned __int64 i; // rdx
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  int v12; // eax
  unsigned __int64 PageTablesForLargeMap; // rax
  __int64 v14; // r8
  char *v15; // rbx
  size_t v16; // r13
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // eax
  bool IsRetpolineEnabled; // al
  int v21; // eax
  unsigned __int64 PteAddress; // rax
  unsigned int inited; // eax
  char *AnyMultiplexedVm; // [rsp+60h] [rbp-88h]
  _QWORD v25[14]; // [rsp+78h] [rbp-70h] BYREF
  ULONG_PTR v27; // [rsp+108h] [rbp+20h] BYREF

  v3 = a2;
  v27 = 0LL;
  memset(v25, 0, 48);
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
  v8 = (v3 + (unsigned int)dword_140C4CC4C + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
  v9 = MiRoundUpToPowerOf2SizeT(v8);
  if ( (int)MiFindContiguousPages(
              (__int64)&MiSystemPartition,
              0x200uLL,
              0xFFFFFFFFFuLL,
              v9,
              v9,
              1u,
              0x80000000,
              0x80000000,
              0x100000,
              0LL,
              (__int64 *)&v27) < 0 )
    return 0LL;
  if ( v9 > v8 )
    MiFreeContiguousPages(v8 + v27, v9 - v8, v10);
  v12 = MiPageToNode(v27);
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v8, 12, 1LL, v12 + 1);
  v15 = (char *)PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
    goto LABEL_13;
  MiGetPteAddress(PageTablesForLargeMap);
  if ( (int)MiReservePrivilegedPtes() < 0 )
  {
    MiUnmapLargeDriver(v15, v3);
LABEL_13:
    MiFreeContiguousPages(v27, v8, v14);
    return 0LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiMapWithLargePages((__int64)AnyMultiplexedVm, (unsigned __int64)v15, v27, v8, 1, 6, 1);
  v16 = (unsigned int)((_DWORD)v3 << 12);
  memmove(v15, a3, v16);
  memset(&v15[v16], 0, (unsigned int)(dword_140C4CC4C << 12));
  if ( MiIsRetpolineEnabled() )
    memmove(&v15[v16], Base, (unsigned int)(dword_140C4CC88 << 12));
  v17 = RtlImageNtHeader((__int64)v15);
  v18 = v17;
  if ( *(_DWORD *)(v17 + 132) <= 5u
    || (v19 = *(_DWORD *)(v17 + 176)) != 0
    && (v19 + *(_DWORD *)(v18 + 180) > (unsigned int)v16
     || (int)LdrRelocateImageWithBias(v15) < 0
     || (MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled())
     && (IsRetpolineEnabled = MiIsRetpolineEnabled(),
         v21 = RtlPerformRetpolineRelocationsOnImage(
                 (int)v15,
                 (int)v15,
                 v16,
                 (int)v15 + (int)v16,
                 (__int64)Base,
                 IsRetpolineEnabled),
         (int)(v21 + 0x80000000) >= 0)
     && v21 != -1073741637) )
  {
    MiReleasePrivilegedPtes();
    MiUnmapLargeDriver(v15, v7);
    return 0LL;
  }
  *(_QWORD *)(v18 + 48) = v15;
  if ( a1 )
  {
    PteAddress = MiGetPteAddress((unsigned __int64)a3);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v5, PteAddress, v7, 1, v25);
    MiChargeSystemImageCommitment(a1);
  }
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 6);
    MiLogPerfMemoryRangeEvent((__int64)v15, 0LL, inited, v8);
  }
  return v15;
}
