/*
 * XREFs of RtlFlsFree @ 0x1800746A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlFlsFree(ULONG FlsIndex)
{
  return RtlpFlsFree(*(struct _RTLP_FLS_CONTEXT **)&FlsIndex, FlsIndex);
}
