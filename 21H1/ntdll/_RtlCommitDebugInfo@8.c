/*
 * XREFs of _RtlCommitDebugInfo@8 @ 0x4B3367F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8 (_RtlpCommitQueryDebugInfo@8.c)
 */

PVOID __cdecl RtlCommitDebugInfo(PRTL_DEBUG_INFORMATION Buffer, SIZE_T Size)
{
  return (PVOID)RtlpCommitQueryDebugInfo(Buffer, Size);
}
