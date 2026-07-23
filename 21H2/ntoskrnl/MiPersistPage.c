/*
 * XREFs of MiPersistPage @ 0x140541ADC
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x140541370 (MiFlushFileOnlyMdl.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541948 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x140541FB4 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x140541AAC (MiPersistMemory.c)
 */

void __fastcall MiPersistPage(__int64 a1)
{
  void *v1; // rbx
  unsigned __int8 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !byte_140C4DF28 )
  {
    v1 = (void *)MiMapPageInHyperSpaceWorker(a1, &v2, 0x80000000);
    MiPersistMemory(v1, 4096LL);
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v1, v2, 0x80000000);
  }
}
