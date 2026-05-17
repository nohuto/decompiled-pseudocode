/*
 * XREFs of _RtlDeCommitDebugInfo@12 @ 0x4B3369A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpDeCommitQueryDebugInfo@12 @ 0x4B3379F5 (_RtlpDeCommitQueryDebugInfo@12.c)
 */

int __stdcall RtlDeCommitDebugInfo(int a1, int a2, int a3)
{
  return RtlpDeCommitQueryDebugInfo(a3);
}
