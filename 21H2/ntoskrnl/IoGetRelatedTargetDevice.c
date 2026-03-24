/*
 * XREFs of IoGetRelatedTargetDevice @ 0x14071C4DC
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x14071C400 (FsRtlNotifyVolumeEventEx.c)
 *     NtSetVolumeInformationFile @ 0x14076D170 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x1407C9E40 (PiPagePathSetState.c)
 *     NtGetDevicePowerState @ 0x1408F0370 (NtGetDevicePowerState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x14036185C (PnpGetRelatedTargetDevice.c)
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
