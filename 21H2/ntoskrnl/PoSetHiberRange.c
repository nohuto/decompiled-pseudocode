/*
 * XREFs of PoSetHiberRange @ 0x140388060
 * Callers:
 *     HalpPciMarkHiberPhase @ 0x140387F3C (HalpPciMarkHiberPhase.c)
 *     IoGetDumpHiberRanges @ 0x140387F6C (IoGetDumpHiberRanges.c)
 *     HalpDmaMarkHiberAdapter @ 0x140388338 (HalpDmaMarkHiberAdapter.c)
 *     HalpExtEnvMarkHiberRegions @ 0x1403883E4 (HalpExtEnvMarkHiberRegions.c)
 *     HalpTimerMarkHiberPhase @ 0x1404B6984 (HalpTimerMarkHiberPhase.c)
 *     HalpIommuExtMarkHiberMemory @ 0x1404CBE20 (HalpIommuExtMarkHiberMemory.c)
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x1404DBA8C (HalpIommuDmarPageTableMarkHiberPhase.c)
 *     HvlDiscardPagesFromHibernation @ 0x1404F7C4C (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1404F7CB4 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1404F84C8 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1404F859C (HvlpMarkHypervisorPagesForHibernation.c)
 *     MiMarkKernelPageTablePte @ 0x140534A00 (MiMarkKernelPageTablePte.c)
 *     RtlMarkHiberPhase @ 0x140592CE4 (RtlMarkHiberPhase.c)
 *     PopHiberInitializeResources @ 0x140777940 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x140777BFC (MmMarkHiberRange.c)
 *     PopAllocateHiberContext @ 0x140777C44 (PopAllocateHiberContext.c)
 *     VslAllocateSecureHibernateResources @ 0x14088EB5C (VslAllocateSecureHibernateResources.c)
 *     BgkResumePrepare @ 0x1409961D8 (BgkResumePrepare.c)
 *     HalpIommuMarkHiberPhase @ 0x140996560 (HalpIommuMarkHiberPhase.c)
 *     HaliLocateHiberRanges @ 0x140996620 (HaliLocateHiberRanges.c)
 *     PopBuildMemoryImageHeader @ 0x140996724 (PopBuildMemoryImageHeader.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140996BE0 (PopBootLoaderTraceCopyPfnList.c)
 *     PopMarkComponentsBootPhase @ 0x1409991F0 (PopMarkComponentsBootPhase.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x1409A6ECC (HalpMmAllocCtxMarkHiberPhase.c)
 *     KdMarkHiberPhase @ 0x1409AEEF8 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x1409AEF88 (KeMarkHiberPhase.c)
 *     MiGatherHiberRange @ 0x1409B0220 (MiGatherHiberRange.c)
 *     MiMarkHiberNotCachedPte @ 0x1409B0300 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x1409B0520 (MiMarkNonPagedHiberPhasePte.c)
 *     MmMarkHiberPhase @ 0x1409B061C (MmMarkHiberPhase.c)
 *     PopMarkHiberPhase @ 0x1409B15C8 (PopMarkHiberPhase.c)
 *     BgpFwMarkHiberPhase @ 0x1409F70F4 (BgpFwMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402A8700 (MmGetPhysicalAddress.c)
 *     PopSetRange @ 0x140388200 (PopSetRange.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MmGetSectionRange @ 0x1408C81E8 (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x1409B08B4 (MmMarkImageForHiberPhase.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  __int16 v5; // bx
  PVOID v6; // rbp
  ULONG_PTR v7; // rax
  ULONG v8; // eax
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rsi
  __int64 v11; // r14
  ULONG_PTR v12; // r15
  PHYSICAL_ADDRESS v13; // r12
  _DWORD v14[18]; // [rsp+30h] [rbp-48h] BYREF
  PVOID BugCheckParameter3; // [rsp+80h] [rbp+8h]
  unsigned __int64 v16; // [rsp+90h] [rbp+18h] BYREF

  v16 = (unsigned __int64)Address;
  BugCheckParameter3 = MemoryMap;
  v5 = Flags;
  v6 = MemoryMap;
  v14[0] = 0;
  if ( (KiBugCheckActive & 3) != 0 )
    return;
  if ( MemoryMap )
  {
    v8 = Flags & 0x10000;
    if ( (Flags & 0x10000) != 0 )
      goto LABEL_28;
  }
  else
  {
    v6 = (PVOID)qword_140C23480;
    BugCheckParameter3 = (PVOID)qword_140C23480;
    if ( !qword_140C23480 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v7 = *(unsigned int *)(qword_140C23480 + 184);
    if ( (_DWORD)v7 != 8 )
    {
      if ( (_DWORD)v7 != 9 )
        KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v7, 0LL);
      return;
    }
    if ( (Flags & 0xFFFFBFFF) != 0x10000 || !Length && (Flags & 0x4000) != 0 )
LABEL_28:
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
    v8 = Flags & 0x10000;
  }
  if ( !Length )
  {
    if ( v8 )
    {
      MmMarkImageForHiberPhase(v16);
      return;
    }
    if ( (int)MmGetSectionRange(v16, &v16, v14) < 0 )
      KeBugCheckEx(0xA0u, 2uLL, 0xA11AAuLL, 0LL, 0LL);
    Length = v14[0];
  }
  if ( (v5 & 4) != 0 )
    v5 = v5 & 0xFFF9 | 2;
  if ( (v5 & 0x4000) != 0 )
  {
    PopSetRange((ULONG_PTR)v6, Tag);
  }
  else
  {
    v9 = v16 >> 12;
    v10 = (Length + v16 + 4095) >> 12;
    while ( v9 < v10 )
    {
      v12 = v9 + 1;
      v13.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v9 << 12)).QuadPart >> 12;
      v11 = 1LL;
      if ( v9 + 1 < v10 )
      {
        do
        {
          if ( v12 + v13.QuadPart - v9 != (unsigned __int64)MmGetPhysicalAddress((PVOID)((v9 << 12) + (v11 << 12))).QuadPart >> 12 )
            break;
          ++v11;
          ++v12;
        }
        while ( v12 < v10 );
        v6 = BugCheckParameter3;
      }
      PopSetRange((ULONG_PTR)v6, Tag);
      v9 += v11;
    }
  }
}
