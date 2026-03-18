/*
 * XREFs of MiAllocateModWriterEntry @ 0x1402F841C
 * Callers:
 *     MiMappedPageWriter @ 0x1403B4730 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x1403C8D40 (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x1407A32B0 (MiCreatePagefile.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiChargeForWriteInProgressPage @ 0x1402F9038 (MiChargeForWriteInProgressPage.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
