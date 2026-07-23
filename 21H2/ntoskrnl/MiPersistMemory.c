/*
 * XREFs of MiPersistMemory @ 0x140541AAC
 * Callers:
 *     MiFlushFileOnlyMdl @ 0x140541370 (MiFlushFileOnlyMdl.c)
 *     MiPersistPage @ 0x140541ADC (MiPersistPage.c)
 * Callees:
 *     KePersistMemory @ 0x140403000 (KePersistMemory.c)
 *     KeInvalidateRangeAllCaches @ 0x14051B330 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall MiPersistMemory(void *a1, __int64 a2)
{
  if ( (KeFeatureBits & 0x1000000000LL) != 0 )
    KePersistMemory((__int64)a1, a2);
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
