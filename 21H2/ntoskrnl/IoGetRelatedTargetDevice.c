/*
 * XREFs of IoGetRelatedTargetDevice @ 0x1406FCB4C
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x1406FCFD0 (FsRtlNotifyVolumeEventEx.c)
 *     NtSetVolumeInformationFile @ 0x14076D330 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x1407CA160 (PiPagePathSetState.c)
 *     NtGetDevicePowerState @ 0x1408F04D0 (NtGetDevicePowerState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x1402F7DC0 (PnpGetRelatedTargetDevice.c)
 */

__int64 __fastcall IoGetRelatedTargetDevice(struct _FILE_OBJECT *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  result = PnpGetRelatedTargetDevice(a1, &v4);
  if ( (int)result >= 0 )
  {
    if ( v4 )
      *a2 = *(_QWORD *)(v4 + 32);
  }
  return result;
}
