/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x1402B0FAC
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1402B0B50 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeAlloc @ 0x14035F3BC (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x1402B0FDC (RtlpHpHeapCheckCommitLimit.c)
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, __int64 a2)
{
  return RtlpHpHeapCheckCommitLimit(a1, (*(_QWORD *)(a2 + 96) + *(_QWORD *)(a2 + 136)) << 12, a2, a2 + 32);
}
