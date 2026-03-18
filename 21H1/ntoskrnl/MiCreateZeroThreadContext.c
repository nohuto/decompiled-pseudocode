/*
 * XREFs of MiCreateZeroThreadContext @ 0x1403AE7B8
 * Callers:
 *     MiZeroNodePages @ 0x1403ADD50 (MiZeroNodePages.c)
 *     MiInitializePartitionThreads @ 0x1408C3304 (MiInitializePartitionThreads.c)
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiCreateUltraThreadContext @ 0x140326F88 (MiCreateUltraThreadContext.c)
 *     MiInitializeColorTable @ 0x1403AE84C (MiInitializeColorTable.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
