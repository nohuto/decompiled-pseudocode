/*
 * XREFs of MiAllocateModWriterEntry @ 0x14027BAC8
 * Callers:
 *     MiMappedPageWriter @ 0x1403B78A0 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x1403CC4C0 (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x1407B7770 (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x14027BB34 (MiChargeForWriteInProgressPage.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void *__fastcall MiAllocateModWriterEntry(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  void *Pool; // rbx

  Pool = (void *)MiAllocatePool(64LL, 8 * a2 + 264, 1700228429LL, a4);
  if ( Pool )
  {
    if ( (unsigned int)MiChargeForWriteInProgressPage(a1, a3 != 0) )
      return Pool;
    ExFreePoolWithTag(Pool, 0);
  }
  return 0LL;
}
