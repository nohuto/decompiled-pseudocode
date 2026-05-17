/*
 * XREFs of _RtlpQueryDiskWriteConstraintPolicy@8 @ 0x4B389DE4
 * Callers:
 *     _RtlQueryResourcePolicy@16 @ 0x4B2AFE50 (_RtlQueryResourcePolicy@16.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _RtlpGetVolumeHandle@8 @ 0x4B389B86 (_RtlpGetVolumeHandle@8.c)
 *     _RtlpQueryDiskWriteConstraintPolicyByHandle@8 @ 0x4B389E27 (_RtlpQueryDiskWriteConstraintPolicyByHandle@8.c)
 */

NTSTATUS __fastcall RtlpQueryDiskWriteConstraintPolicy(unsigned __int16 *a1, int a2)
{
  NTSTATUS VolumeHandle; // esi
  HANDLE Handle; // [esp+Ch] [ebp-4h] BYREF

  Handle = 0;
  VolumeHandle = RtlpGetVolumeHandle(a1, &Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlpQueryDiskWriteConstraintPolicyByHandle(Handle, a2);
    if ( VolumeHandle >= 0 )
      VolumeHandle = 0;
  }
  if ( Handle )
    NtClose(Handle);
  return VolumeHandle;
}
