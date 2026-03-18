/*
 * XREFs of MiAllocateModWriterEntry @ 0x140344134
 * Callers:
 *     MiMappedPageWriter @ 0x1403B60F0 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x1403CB980 (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x1407B25E0 (MiCreatePagefile.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiChargeForWriteInProgressPage @ 0x1403441A0 (MiChargeForWriteInProgressPage.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

PVOID __fastcall MiAllocateModWriterEntry(__int64 a1, __int64 a2, int a3)
{
  PVOID Pool; // rbx

  Pool = MiAllocatePool(64, 8 * a2 + 264, 0x65576D4Du);
  if ( Pool )
  {
    if ( (unsigned int)MiChargeForWriteInProgressPage(a1, a3 != 0) )
      return Pool;
    ExFreePoolWithTag(Pool, 0);
  }
  return 0LL;
}
