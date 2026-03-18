/*
 * XREFs of EtwpAllocateTraceBuffer @ 0x1402FF6F0
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x1402FF564 (EtwpAllocateFreeBuffers.c)
 *     EtwpPreserveLogger @ 0x1409452CC (EtwpPreserveLogger.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdlEx @ 0x140313330 (MmAllocatePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x140317C94 (MiFreePagesFromMdl.c)
 *     qsort @ 0x1403CF4C0 (qsort.c)
 *     EtwpAllocatePartitionMemory @ 0x1405AB0A8 (EtwpAllocatePartitionMemory.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall EtwpAllocateTraceBuffer(__int64 a1, unsigned int a2)
{
  SIZE_T v3; // r15
  _QWORD *v4; // rcx
  PVOID v6; // r12
  PMDL PagesForMdl; // rbp

  v3 = a2;
  v4 = (_QWORD *)(a1 + 1336);
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
      if ( !*(_QWORD *)(a1 + 1344) )
      {
        *(_QWORD *)(a1 + 1344) = PagesForMdl;
        PagesForMdl = 0LL;
      }
    }
    else
    {
      MiFreePagesFromMdl((ULONG_PTR)PagesForMdl);
    }
    if ( PagesForMdl )
      ExFreePoolWithTag(PagesForMdl, 0);
  }
  return v6;
}
