/*
 * XREFs of _RtlpDiskSpeedInitialize@12 @ 0x4B389B30
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetNtSystemRoot@0 @ 0x4B2C0180 (_RtlGetNtSystemRoot@0.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _RtlQueryVolumeDiskSpeedPolicy@8 @ 0x4B389AA1 (_RtlQueryVolumeDiskSpeedPolicy@8.c)
 *     _RtlpGetVolumeHandle@8 @ 0x4B389B86 (_RtlpGetVolumeHandle@8.c)
 */

BOOL __stdcall RtlpDiskSpeedInitialize(int a1, int a2, int a3)
{
  int NtSystemRoot; // eax
  int VolumeHandle; // esi
  int v6; // [esp+4h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+8h] [ebp-4h] BYREF

  Handle = 0;
  NtSystemRoot = RtlGetNtSystemRoot();
  VolumeHandle = RtlpGetVolumeHandle(NtSystemRoot, &Handle);
  if ( VolumeHandle >= 0 )
  {
    VolumeHandle = RtlQueryVolumeDiskSpeedPolicy((int)Handle, &v6);
    if ( VolumeHandle >= 0 )
    {
      VolumeHandle = 0;
      RtlpDiskSpeedPolicy = v6;
    }
  }
  if ( Handle )
    NtClose(Handle);
  return VolumeHandle >= 0;
}
