/*
 * XREFs of _RtlCommitDebugInfo@8 @ 0x4B3367F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8 (_RtlpCommitQueryDebugInfo@8.c)
 */

int __stdcall RtlCommitDebugInfo(int a1, int a2)
{
  return RtlpCommitQueryDebugInfo(a1, a2);
}
