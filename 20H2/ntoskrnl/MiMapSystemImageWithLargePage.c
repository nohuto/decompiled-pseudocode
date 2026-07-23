/*
 * XREFs of MiMapSystemImageWithLargePage @ 0x1408DCC10
 * Callers:
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     MiHandleBootImage @ 0x140A4E1C8 (MiHandleBootImage.c)
 * Callees:
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiFreeContiguousPages @ 0x140261B18 (MiFreeContiguousPages.c)
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     MiPageToNode @ 0x14032E6F4 (MiPageToNode.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiIsImportOptimizationEnabled @ 0x140357954 (MiIsImportOptimizationEnabled.c)
 *     MiIsRetpolineEnabled @ 0x140357968 (MiIsRetpolineEnabled.c)
 *     MiMapWithLargePages @ 0x1403B80EC (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B83C4 (MiGetPageTablesForLargeMap.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052FB1C (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x140542F54 (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x14055A3FC (MiRoundUpToPowerOf2SizeT.c)
 *     RtlPerformRetpolineRelocationsOnImage @ 0x14058E46C (RtlPerformRetpolineRelocationsOnImage.c)
 *     MiReservePrivilegedPtes @ 0x140757A38 (MiReservePrivilegedPtes.c)
 *     MiChargeSystemImageCommitment @ 0x140757CA4 (MiChargeSystemImageCommitment.c)
 *     MiReleasePrivilegedPtes @ 0x14076FB38 (MiReleasePrivilegedPtes.c)
 *     MiUnmapLargeDriver @ 0x1408DCF84 (MiUnmapLargeDriver.c)
 *     LdrRelocateImageWithBias @ 0x14091BBA4 (LdrRelocateImageWithBias.c)
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
  size_t v14; // r13
  PIMAGE_NT_HEADERS v15; // rax
  CHAR *v16; // r8
  NTSTATUS v17; // r9d
  PIMAGE_NT_HEADERS v18; // rsi
  unsigned int VirtualAddress; // eax
  LONGLONG v20; // rdx
  bool IsRetpolineEnabled; // al
  int v22; // eax
  unsigned __int64 PteAddress; // rax
  unsigned int inited; // eax
  NTSTATUS Conflict; // [rsp+20h] [rbp-C8h]
  NTSTATUS Invalid; // [rsp+28h] [rbp-C0h]
  char *AnyMultiplexedVm; // [rsp+60h] [rbp-88h]
  _QWORD v28[14]; // [rsp+78h] [rbp-70h] BYREF
  ULONG_PTR v30; // [rsp+108h] [rbp+20h] BYREF

  v3 = a2;
  v30 = 0LL;
  memset(v28, 0, 48);
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
  v8 = (v3 + (unsigned int)dword_140C4CACC + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
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
              (__int64 *)&v30) < 0 )
    return 0LL;
  if ( v9 > v8 )
    MiFreeContiguousPages(v8 + v30, v9 - v8);
  v11 = MiPageToNode(v30);
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v8, 12, 1, v11 + 1);
  v13 = (char *)PageTablesForLargeMap;
  if ( !PageTablesForLargeMap )
    goto LABEL_13;
  MiGetPteAddress(PageTablesForLargeMap);
  if ( (int)MiReservePrivilegedPtes() < 0 )
  {
    MiUnmapLargeDriver(v13, v3);
LABEL_13:
    MiFreeContiguousPages(v30, v8);
    return 0LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  MiMapWithLargePages((__int64)AnyMultiplexedVm, (unsigned __int64)v13, v30, v8, 1, 6, 1);
  v14 = (unsigned int)((_DWORD)v3 << 12);
  memmove(v13, a3, v14);
  memset(&v13[v14], 0, (unsigned int)(dword_140C4CACC << 12));
  if ( MiIsRetpolineEnabled() )
    memmove(&v13[v14], Base, (unsigned int)(dword_140C4CB08 << 12));
  v15 = RtlImageNtHeader(v13);
  v18 = v15;
  if ( v15->OptionalHeader.NumberOfRvaAndSizes <= 5
    || (VirtualAddress = v15->OptionalHeader.DataDirectory[5].VirtualAddress) != 0
    && ((v20 = VirtualAddress + v18->OptionalHeader.DataDirectory[5].Size, (unsigned int)v20 > (unsigned int)v14)
     || LdrRelocateImageWithBias(v13, v20, v16, v17, Conflict, Invalid) < 0
     || (MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled())
     && (IsRetpolineEnabled = MiIsRetpolineEnabled(),
         v22 = RtlPerformRetpolineRelocationsOnImage(
                 v13,
                 (__int64)v13,
                 (unsigned int)v14,
                 (__int64)&v13[v14],
                 (__int64)Base,
                 IsRetpolineEnabled),
         (int)(v22 + 0x80000000) >= 0)
     && v22 != -1073741637) )
  {
    MiReleasePrivilegedPtes();
    MiUnmapLargeDriver(v13, v7);
    return 0LL;
  }
  v18->OptionalHeader.ImageBase = (unsigned __int64)v13;
  if ( a1 )
  {
    PteAddress = MiGetPteAddress((unsigned __int64)a3);
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v5, PteAddress, v7, 1, v28);
    MiChargeSystemImageCommitment(a1);
  }
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 6);
    MiLogPerfMemoryRangeEvent((__int64)v13, 0LL, inited, v8);
  }
  return v13;
}
