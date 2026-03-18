/*
 * XREFs of MiLockPageAtDpc @ 0x140549E2C
 * Callers:
 *     MiDeleteClusterPage @ 0x14028DDB0 (MiDeleteClusterPage.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiInitializeMdlBatchPages @ 0x140342FCC (MiInitializeMdlBatchPages.c)
 *     MiInsertLargePageChain @ 0x140345BE8 (MiInsertLargePageChain.c)
 *     MiMakeLargePageTable @ 0x140537EF4 (MiMakeLargePageTable.c)
 *     MiRebuildLargePage @ 0x14054CBE8 (MiRebuildLargePage.c)
 *     MiDemotePfnListChain @ 0x140558728 (MiDemotePfnListChain.c)
 *     MiCreateKernelHalSlabRange @ 0x140A42270 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
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
