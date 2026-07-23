/*
 * XREFs of _RtlWaitOnAddress@16 @ 0x4B36A8E0
 * Callers:
 *     _RtlpFcBufferManagerUpdateBuffers@16 @ 0x4B2E5386 (_RtlpFcBufferManagerUpdateBuffers@16.c)
 * Callees:
 *     _RtlpWaitOnAddress@20 @ 0x4B2DF747 (_RtlpWaitOnAddress@20.c)
 */

NTSTATUS __cdecl RtlWaitOnAddress(void *Address, PVOID CompareAddress, SIZE_T AddressSize, PLARGE_INTEGER Timeout)
{
  return RtlpWaitOnAddress(
           (volatile signed __int64 *)Address,
           (int)CompareAddress,
           AddressSize,
           (PLARGE_INTEGER)HIDWORD(AddressSize),
           RtlpWaitOnAddressSpinCycleCount);
}
