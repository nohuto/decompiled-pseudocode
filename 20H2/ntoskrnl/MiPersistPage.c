/*
 * XREFs of MiPersistPage @ 0x14053FD9C
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x14053F630 (MiFlushFileOnlyMdl.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053FC08 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x140540274 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiPersistMemory @ 0x14053FD6C (MiPersistMemory.c)
 */

void __fastcall MiPersistPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rbx
  unsigned __int8 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( !byte_140C4DD68 )
  {
    v4 = (void *)MiMapPageInHyperSpaceWorker(a1, &v5, 0x80000000, a4);
    MiPersistMemory(v4, 4096LL);
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, v5, 0x80000000);
  }
}
