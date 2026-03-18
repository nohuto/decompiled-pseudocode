/*
 * XREFs of MiAllocateModWriterEntry @ 0x1402820F4
 * Callers:
 *     MiMappedPageWriter @ 0x1403C5160 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x1403DB228 (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x14084B698 (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x140282160 (MiChargeForWriteInProgressPage.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void *__fastcall MiAllocateModWriterEntry(__int64 a1, __int64 a2, int a3)
{
  void *Pool; // rbx

  Pool = (void *)MiAllocatePool(64LL, 8 * a2 + 264, 1700228429LL);
  if ( Pool )
  {
    if ( (unsigned int)MiChargeForWriteInProgressPage(a1, a3 != 0) )
      return Pool;
    ExFreePoolWithTag(Pool, 0);
  }
  return 0LL;
}
