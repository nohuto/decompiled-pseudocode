/*
 * XREFs of MiCreateZeroThreadContext @ 0x1403B0DF8
 * Callers:
 *     MiZeroNodePages @ 0x1403B0390 (MiZeroNodePages.c)
 *     MiInitializePartitionThreads @ 0x1408C7DB4 (MiInitializePartitionThreads.c)
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiCreateUltraThreadContext @ 0x14029444C (MiCreateUltraThreadContext.c)
 *     MiInitializeColorTable @ 0x1403B0E8C (MiInitializeColorTable.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
