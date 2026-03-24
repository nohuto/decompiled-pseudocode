/*
 * XREFs of MiPersistPage @ 0x14054189C
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x140541130 (MiFlushFileOnlyMdl.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541708 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x140541D74 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x14054186C (MiPersistMemory.c)
 */

void __fastcall MiPersistPage(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rdx
  unsigned __int8 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !byte_140C4DEE8 )
  {
    v1 = (void *)MiMapPageInHyperSpaceWorker(a1, &v3, 0x80000000);
    MiPersistMemory(v1, 4096LL);
    LOBYTE(v2) = v3;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v1, v2, 0x80000000);
  }
}
