/*
 * XREFs of MiMapSystemImageWithLargePage @ 0x1408DA530
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiHandleBootImage @ 0x140A50B14 (MiHandleBootImage.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140217D28 (MiFreeContiguousPages.c)
 *     MiPageToNode @ 0x14024E754 (MiPageToNode.c)
 *     MiIsImportOptimizationEnabled @ 0x1402A381C (MiIsImportOptimizationEnabled.c)
 *     MiIsRetpolineEnabled @ 0x1402A3834 (MiIsRetpolineEnabled.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     MiMapWithLargePages @ 0x1403B8C5C (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B8F34 (MiGetPageTablesForLargeMap.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053185C (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x140544C98 (MiInitPerfMemoryFlags.c)
 *     MiRoundUpToPowerOf2SizeT @ 0x14055C10C (MiRoundUpToPowerOf2SizeT.c)
 *     RtlPerformRetpolineRelocationsOnImage @ 0x1405900AC (RtlPerformRetpolineRelocationsOnImage.c)
 *     MiReservePrivilegedPtes @ 0x14075EC90 (MiReservePrivilegedPtes.c)
 *     MiChargeSystemImageCommitment @ 0x14075ED24 (MiChargeSystemImageCommitment.c)
 *     MiReleasePrivilegedPtes @ 0x140773C08 (MiReleasePrivilegedPtes.c)
 *     MiUnmapLargeDriver @ 0x1408DA8A4 (MiUnmapLargeDriver.c)
 *     LdrRelocateImageWithBias @ 0x1409194C4 (LdrRelocateImageWithBias.c)
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
  v8 = (v3 + (unsigned int)dword_140C4CC8C + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
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
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(v8, 12, 1LL, v11 + 1);
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
  memset(&v13[v14], 0, (unsigned int)(dword_140C4CC8C << 12));
  if ( MiIsRetpolineEnabled() )
    memmove(&v13[v14], Base, (unsigned int)(dword_140C4CCC8 << 12));
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
