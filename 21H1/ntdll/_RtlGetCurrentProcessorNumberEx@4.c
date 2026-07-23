/*
 * XREFs of _RtlGetCurrentProcessorNumberEx@4 @ 0x4B2E6100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl RtlGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  NtWow64GetCurrentProcessorNumberEx(ProcessorNumber);
}
