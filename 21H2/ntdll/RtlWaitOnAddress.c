/*
 * XREFs of RtlWaitOnAddress @ 0x180064950
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x18005DF98 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x180064BA4 (RtlpWaitOnAddress.c)
 */

NTSTATUS __cdecl RtlWaitOnAddress(void *Address, PVOID CompareAddress, SIZE_T AddressSize, PLARGE_INTEGER Timeout)
{
  return RtlpWaitOnAddress(
           (_DWORD)Address,
           (_DWORD)CompareAddress,
           AddressSize,
           (_DWORD)Timeout,
           RtlpWaitOnAddressSpinCycleCount);
}
