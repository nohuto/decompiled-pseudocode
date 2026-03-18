/*
 * XREFs of MiAllocateModWriterEntry @ 0x1403543FC
 * Callers:
 *     MiMappedPageWriter @ 0x1403B2930 (MiMappedPageWriter.c)
 *     MiAllocateMappedWriterMdls @ 0x1403C7F30 (MiAllocateMappedWriterMdls.c)
 *     MiCreatePagefile @ 0x14079F2D0 (MiCreatePagefile.c)
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiChargeForWriteInProgressPage @ 0x140355018 (MiChargeForWriteInProgressPage.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
