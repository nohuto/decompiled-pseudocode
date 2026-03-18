/*
 * XREFs of MiCreateZeroThreadContext @ 0x1403A8398
 * Callers:
 *     MiZeroNodePages @ 0x1403A7930 (MiZeroNodePages.c)
 *     MiInitializePartitionThreads @ 0x1408C4654 (MiInitializePartitionThreads.c)
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiCreateUltraThreadContext @ 0x1402E1D50 (MiCreateUltraThreadContext.c)
 *     MiInitializeColorTable @ 0x1403A842C (MiInitializeColorTable.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

PVOID __fastcall MiCreateZeroThreadContext(__int64 a1, int a2)
{
  _BYTE *Pool; // rax
  PVOID v5; // rbx

  Pool = MiAllocatePool(64, 0x130uLL, 0x20206D4Du);
  v5 = Pool;
  if ( Pool )
  {
    if ( a2 )
      Pool[80] = 1;
    MiInitializeColorTable(Pool + 248);
    if ( (unsigned int)MiCreateUltraThreadContext((__int64)v5 + 88, *((_DWORD *)v5 + 65), 15) )
    {
      *((_QWORD *)v5 + 29) = a1;
      return v5;
    }
    ExFreePoolWithTag(v5, 0);
  }
  return 0LL;
}
