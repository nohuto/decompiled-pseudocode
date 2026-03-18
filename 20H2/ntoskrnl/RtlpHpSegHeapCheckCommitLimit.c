/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x1402CDB2C
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1402CD6D0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeAlloc @ 0x140308ADC (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x1402CDB5C (RtlpHpHeapCheckCommitLimit.c)
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, __int64 a2)
{
  return RtlpHpHeapCheckCommitLimit(a1, (*(_QWORD *)(a2 + 96) + *(_QWORD *)(a2 + 136)) << 12, a2, a2 + 32);
}
