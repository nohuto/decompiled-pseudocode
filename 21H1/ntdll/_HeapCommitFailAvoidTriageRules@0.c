/*
 * XREFs of _HeapCommitFailAvoidTriageRules@0 @ 0x4B36D480
 * Callers:
 *     _RtlpHpHeapHandleError@12 @ 0x4B36D980 (_RtlpHpHeapHandleError@12.c)
 * Callees:
 *     _RtlpHpRaiseFatalLimitError@4 @ 0x4B36DBB0 (_RtlpHpRaiseFatalLimitError@4.c)
 */

void __stdcall __noreturn HeapCommitFailAvoidTriageRules()
{
  RtlpHpRaiseFatalLimitError(HeapCommitFailAvoidTriageRules);
}
