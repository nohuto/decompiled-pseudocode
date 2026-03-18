/*
 * XREFs of RtlInitializeRangeListPackage @ 0x140A9687C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePagedLookasideList @ 0x1406EE9A0 (ExInitializePagedLookasideList.c)
 */

void RtlInitializeRangeListPackage()
{
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&RtlpRangeListEntryLookasideList,
    0LL,
    0LL,
    0,
    0x38uLL,
    0x656C5252u,
    0x10u);
}
