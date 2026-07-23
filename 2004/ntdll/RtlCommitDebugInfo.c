/*
 * XREFs of RtlCommitDebugInfo @ 0x1800D72D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __cdecl RtlCommitDebugInfo(PRTL_DEBUG_INFORMATION Buffer, SIZE_T Size)
{
  return RtlpCommitQueryDebugInfo(Buffer, Size);
}
