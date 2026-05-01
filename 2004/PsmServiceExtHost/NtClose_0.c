/*
 * XREFs of NtClose_0 @ 0x18004544C
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x180042F20 (RtlpDiskSpeedInitialize.c)
 *     RtlpTestHookInitialize @ 0x1800438E0 (RtlpTestHookInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180086458 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x180086688 (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
