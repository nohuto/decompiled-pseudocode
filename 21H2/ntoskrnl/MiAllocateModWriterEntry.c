/*
 * XREFs of MiAllocateModWriterEntry @ 0x14025A558
 * Callers:
 *     MiMappedPageWriter @ 0x1403B7730 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x1403CC350 (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x1407B7250 (MiCreatePagefile.c)
 * Callees:
 *     MiChargeForWriteInProgressPage @ 0x14025A5C4 (MiChargeForWriteInProgressPage.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
