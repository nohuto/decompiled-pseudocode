/*
 * XREFs of MiPersistPage @ 0x1405A02B8
 * Callers:
 *     MiMarkFileOnlyPfnBad @ 0x14059F908 (MiMarkFileOnlyPfnBad.c)
 *     MiPurgeFileOnlyPfn @ 0x1405A0774 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402BEDD0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402CC7C0 (MiMapPageInHyperSpaceWorker.c)
 *     KePersistMemory @ 0x140424FC0 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x140570E60 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistPage(__int64 a1)
{
  void *v1; // rax
  unsigned __int64 v2; // rbx
  unsigned __int8 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !byte_140C5072C )
  {
    v1 = (void *)MiMapPageInHyperSpaceWorker(a1, &v3, 0x80000000);
    v2 = (unsigned __int64)v1;
    if ( !byte_140C5072C )
    {
      if ( _bittest64(&KeFeatureBits, 0x24u) )
        KePersistMemory((__int64)v1, 4096LL);
      else
        KeInvalidateRangeAllCaches(v1, 0x1000u);
    }
    MiUnmapPageInHyperSpaceWorker(v2, v3);
  }
}
