/*
 * XREFs of MiPersistMemory @ 0x14053FD6C
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x14053F630 (MiFlushFileOnlyMdl.c)
 *     MiPersistPage @ 0x14053FD9C (MiPersistPage.c)
 * Callees:
 *     KePersistMemory @ 0x1404009C0 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x1405195B0 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistMemory(void *a1, __int64 a2)
{
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    KePersistMemory((__int64)a1, a2);
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
