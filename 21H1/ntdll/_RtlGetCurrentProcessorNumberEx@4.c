/*
 * XREFs of _RtlGetCurrentProcessorNumberEx@4 @ 0x4B2E6100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall RtlGetCurrentProcessorNumberEx(int a1)
{
  return NtWow64GetCurrentProcessorNumberEx(a1);
}
