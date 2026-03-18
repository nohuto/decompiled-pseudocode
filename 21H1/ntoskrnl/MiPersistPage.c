/*
 * XREFs of MiPersistPage @ 0x14053BD7C
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x14053B610 (MiFlushFileOnlyMdl.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053BBE8 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x14053C254 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x14053BD4C (MiPersistMemory.c)
 */

void __fastcall MiPersistPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  __int64 v5; // rdx
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  if ( !byte_140C4DE28 )
  {
    v4 = (void *)MiMapPageInHyperSpaceWorker(a1, &v6, 0x80000000, a4);
    MiPersistMemory(v4, 4096LL);
    LOBYTE(v5) = v6;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, v5, 0x80000000);
  }
}
