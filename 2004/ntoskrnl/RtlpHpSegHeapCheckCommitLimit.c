/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x140257F7C
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140257B20 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeAlloc @ 0x1402DA8E8 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpHeapCheckCommitLimit @ 0x140257FAC (RtlpHpHeapCheckCommitLimit.c)
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, __int64 a2)
{
  return RtlpHpHeapCheckCommitLimit(a1, (*(_QWORD *)(a2 + 96) + *(_QWORD *)(a2 + 136)) << 12, a2, a2 + 32);
}
