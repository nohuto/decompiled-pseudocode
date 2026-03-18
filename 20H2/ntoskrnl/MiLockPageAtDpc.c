/*
 * XREFs of MiLockPageAtDpc @ 0x14054DE4C
 * Callers:
 *     MiDeleteClusterPage @ 0x1402AEC40 (MiDeleteClusterPage.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiInsertLargePageChain @ 0x1402F1AEC (MiInsertLargePageChain.c)
 *     MiInitializeMdlBatchPages @ 0x1403347C4 (MiInitializeMdlBatchPages.c)
 *     MiMakeLargePageTable @ 0x14053BF14 (MiMakeLargePageTable.c)
 *     MiRebuildLargePage @ 0x140550C08 (MiRebuildLargePage.c)
 *     MiDemotePfnListChain @ 0x14055C748 (MiDemotePfnListChain.c)
 *     MiCreateKernelHalSlabRange @ 0x140A4DD60 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
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
