/*
 * XREFs of _RtlDeCommitDebugInfo@12 @ 0x4B3369A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpDeCommitQueryDebugInfo@12 @ 0x4B3379F5 (_RtlpDeCommitQueryDebugInfo@12.c)
 */

void __cdecl RtlDeCommitDebugInfo(PRTL_DEBUG_INFORMATION Buffer, PVOID p, SIZE_T Size)
{
  RtlpDeCommitQueryDebugInfo(Size);
}
