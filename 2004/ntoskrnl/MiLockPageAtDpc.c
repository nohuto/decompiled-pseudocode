/*
 * XREFs of MiLockPageAtDpc @ 0x14054A47C
 * Callers:
 *     MiDeleteClusterPage @ 0x140234D60 (MiDeleteClusterPage.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiInitializeMdlBatchPages @ 0x140313C8C (MiInitializeMdlBatchPages.c)
 *     MiInsertLargePageChain @ 0x1403168A8 (MiInsertLargePageChain.c)
 *     MiMakeLargePageTable @ 0x140538544 (MiMakeLargePageTable.c)
 *     MiRebuildLargePage @ 0x14054D238 (MiRebuildLargePage.c)
 *     MiDemotePfnListChain @ 0x140558D78 (MiDemotePfnListChain.c)
 *     MiCreateKernelHalSlabRange @ 0x140A47AD0 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiLockPageAtDpc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v6, a2, a3, a4);
      result = *(_QWORD *)(a1 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
