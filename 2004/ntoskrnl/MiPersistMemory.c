/*
 * XREFs of MiPersistMemory @ 0x14053C39C
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x14053BC60 (MiFlushFileOnlyMdl.c)
 *     MiPersistPage @ 0x14053C3CC (MiPersistPage.c)
 * Callees:
 *     KePersistMemory @ 0x1403FB070 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x140515C80 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistMemory(void *a1, __int64 a2)
{
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    KePersistMemory((__int64)a1, a2);
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
