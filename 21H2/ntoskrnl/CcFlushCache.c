/*
 * XREFs of CcFlushCache @ 0x1402C12D0
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x14022CBA0 (CcFlushCachePriv.c)
 */

void __stdcall CcFlushCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus)
{
  CcFlushCachePriv((__int64)SectionObjectPointer, FileOffset, Length, 0LL, 0, (__int128 *)&IoStatus->0);
}
