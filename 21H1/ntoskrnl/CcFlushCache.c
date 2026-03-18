/*
 * XREFs of CcFlushCache @ 0x140311520
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 */

void __stdcall CcFlushCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus)
{
  CcFlushCachePriv((__int64)SectionObjectPointer, (__int64 *)FileOffset, Length, 0LL, 0, (unsigned int *)IoStatus);
}
