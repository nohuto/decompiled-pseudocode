/*
 * XREFs of MiPersistMemory @ 0x14054186C
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x140541130 (MiFlushFileOnlyMdl.c)
 *     MiPersistPage @ 0x14054189C (MiPersistPage.c)
 * Callees:
 *     KePersistMemory @ 0x140402E20 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x14051B0F0 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistMemory(void *a1, __int64 a2)
{
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    KePersistMemory((__int64)a1, a2);
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
