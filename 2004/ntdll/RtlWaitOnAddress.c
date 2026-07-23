/*
 * XREFs of RtlWaitOnAddress @ 0x180063350
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x18005CA18 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x1800635A4 (RtlpWaitOnAddress.c)
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
