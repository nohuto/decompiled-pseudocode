/*
 * XREFs of HalpDmaAllocateScatterMemory @ 0x140861C78
 * Callers:
 *     HalpDmaAllocateLocalScatterPool @ 0x140861A48 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpDmaGrowScatterMapBuffers @ 0x140861E38 (HalpDmaGrowScatterMapBuffers.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdl @ 0x1403A3820 (MmAllocatePagesForMdl.c)
 */

PMDL __fastcall HalpDmaAllocateScatterMemory(PHYSICAL_ADDRESS *a1, unsigned int a2, _QWORD *a3)
{
  PHYSICAL_ADDRESS v3; // rdi
  char v4; // bp
  SIZE_T v6; // r14
  PHYSICAL_ADDRESS v7; // rbx
  PMDL PagesForMdl; // rax
  PMDL v9; // rsi
  PVOID MappedSystemVa; // rax

  v3 = a1[17];
  v4 = 0;
  v6 = (unsigned __int64)a2 << 12;
  while ( 1 )
  {
    v7.QuadPart = 0LL;
    if ( !v4 && v3.LowPart == -1 )
      v7.QuadPart = 0x1000000LL;
    PagesForMdl = MmAllocatePagesForMdl(v7, v3, 0LL, v6);
    v9 = PagesForMdl;
    if ( PagesForMdl )
      break;
    if ( v4 || !v7.QuadPart )
      return 0LL;
    v4 = 1;
  }
  if ( (PagesForMdl->MdlFlags & 5) != 0 )
    MappedSystemVa = PagesForMdl->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  *a3 = MappedSystemVa;
  return v9;
}
