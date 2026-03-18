/*
 * XREFs of MiPersistPage @ 0x14053C3CC
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x14053BC60 (MiFlushFileOnlyMdl.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053C238 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14053C8A4 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x14053C39C (MiPersistMemory.c)
 */

void __fastcall MiPersistPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  unsigned __int8 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( !byte_140C4DCE8 )
  {
    v4 = (void *)MiMapPageInHyperSpaceWorker(a1, &v5, 0x80000000, a4);
    MiPersistMemory(v4, 4096LL);
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, v5, 0x80000000);
  }
}
