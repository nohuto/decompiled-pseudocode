/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x1402DB060
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x1402DAF5C (RtlpHpMetadataAlloc.c)
 *     RtlHpHeapManagerStart @ 0x14039A9F8 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1406A4800 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, RtlpHpMetadataHeapCreate, a2, 0LL);
}
