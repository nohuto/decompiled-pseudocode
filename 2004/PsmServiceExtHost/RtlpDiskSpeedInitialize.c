/*
 * XREFs of RtlpDiskSpeedInitialize @ 0x180042F20
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x180042F8C (RtlQueryVolumeDiskSpeedPolicy.c)
 *     RtlpGetVolumeHandle @ 0x18004303C (RtlpGetVolumeHandle.c)
 *     NtClose_0 @ 0x18004544C (NtClose_0.c)
 *     RtlGetNtSystemRoot_0 @ 0x180045464 (RtlGetNtSystemRoot_0.c)
 */

_BOOL8 RtlpDiskSpeedInitialize()
{
  __int64 NtSystemRoot_0; // rax
  int VolumeHandle; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  Handle[0] = 0LL;
  NtSystemRoot_0 = RtlGetNtSystemRoot_0();
  VolumeHandle = RtlpGetVolumeHandle(NtSystemRoot_0, Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy(Handle[0], &v4);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v4;
    }
  }
  if ( Handle[0] )
    NtClose_0(Handle[0]);
  return VolumeHandle >= 0;
}
