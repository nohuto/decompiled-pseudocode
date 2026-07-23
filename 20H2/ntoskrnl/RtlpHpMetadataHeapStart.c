/*
 * XREFs of RtlpHpMetadataHeapStart @ 0x140309254
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x140309150 (RtlpHpMetadataAlloc.c)
 *     RtlHpHeapManagerStart @ 0x14039DB48 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1406B4960 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpMetadataHeapStart(_RTL_RUN_ONCE *a1, void *a2)
{
  if ( a1->Value )
    return 0;
  else
    return RtlRunOnceExecuteOnce(a1 + 1, RtlpHpMetadataHeapCreate, a2, 0LL);
}
