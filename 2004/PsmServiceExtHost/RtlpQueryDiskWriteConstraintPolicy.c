/*
 * XREFs of RtlpQueryDiskWriteConstraintPolicy @ 0x180086688
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18003FFCC (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlpGetVolumeHandle @ 0x18004303C (RtlpGetVolumeHandle.c)
 *     NtClose_0 @ 0x18004544C (NtClose_0.c)
 *     RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x1800866F0 (RtlpQueryDiskWriteConstraintPolicyByHandle.c)
 */

__int64 __fastcall RtlpQueryDiskWriteConstraintPolicy(unsigned __int16 *a1, __int64 a2)
{
  NTSTATUS VolumeHandle; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  VolumeHandle = RtlpGetVolumeHandle(a1, &Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlpQueryDiskWriteConstraintPolicyByHandle(Handle, a2);
    if ( VolumeHandle >= 0 )
      VolumeHandle = 0;
  }
  if ( Handle )
    NtClose_0(Handle);
  return (unsigned int)VolumeHandle;
}
