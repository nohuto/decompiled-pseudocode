/*
 * XREFs of _RtlGetCurrentProcessorNumber@0 @ 0x4B2E73F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG RtlGetCurrentProcessorNumber(void)
{
  return NtGetCurrentProcessorNumber();
}
