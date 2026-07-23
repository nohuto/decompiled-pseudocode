/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x14035FB34
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x14035FA30 (RtlpHpMetadataAlloc.c)
 *     RtlHpHeapManagerStart @ 0x14039A268 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x140711660 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, RtlpHpMetadataHeapCreate, a2, 0LL);
}
