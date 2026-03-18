/*
 * XREFs of EtwpAllocateTraceBuffer @ 0x140360E40
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x140360A9C (EtwpAllocateFreeBuffers.c)
 *     EtwpPreserveLogger @ 0x14094B08C (EtwpPreserveLogger.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdlEx @ 0x140334170 (MmAllocatePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x14034E438 (MiFreePagesFromMdl.c)
 *     qsort @ 0x1403D2150 (qsort.c)
 *     EtwpAllocatePartitionMemory @ 0x1405AEC08 (EtwpAllocatePartitionMemory.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

PVOID __fastcall EtwpAllocateTraceBuffer(__int64 a1, unsigned int a2)
{
  SIZE_T v3; // r15
  _QWORD *v4; // rcx
  PVOID v6; // r12
  PMDL PagesForMdl; // rbp

  v3 = a2;
  v4 = (_QWORD *)(a1 + 1304);
  if ( *v4 )
    return (PVOID)EtwpAllocatePartitionMemory(v4, a2);
  if ( (*(_DWORD *)(a1 + 832) & 0x20000000) == 0 )
    return ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 316), a2, 0x42777445u);
  v6 = 0LL;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, (PHYSICAL_ADDRESS)0x200000LL, a2, MmCached, 0x65u);
  if ( PagesForMdl
    || (PagesForMdl = MmAllocatePagesForMdlEx(
                        0LL,
                        (PHYSICAL_ADDRESS)-1LL,
                        (PHYSICAL_ADDRESS)0x200000LL,
                        v3,
                        MmCached,
                        0x25u)) != 0LL )
  {
    qsort(&PagesForMdl[1], v3 >> 12, 8uLL, EtwpComparePfn);
    v6 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( v6 )
    {
      if ( !*(_QWORD *)(a1 + 1312) )
      {
        *(_QWORD *)(a1 + 1312) = PagesForMdl;
        PagesForMdl = 0LL;
      }
    }
    else
    {
      MiFreePagesFromMdl((ULONG_PTR)PagesForMdl, 0);
    }
    if ( PagesForMdl )
      ExFreePoolWithTag(PagesForMdl, 0);
  }
  return v6;
}
