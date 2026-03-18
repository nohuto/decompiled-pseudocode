/*
 * XREFs of IoGetRelatedTargetDevice @ 0x140637A00
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x1406374E0 (FsRtlNotifyVolumeEventEx.c)
 *     NtSetVolumeInformationFile @ 0x14075AA70 (NtSetVolumeInformationFile.c)
 *     PiPagePathSetState @ 0x1407B7350 (PiPagePathSetState.c)
 *     NtGetDevicePowerState @ 0x1408ECF60 (NtGetDevicePowerState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x140271278 (PnpGetRelatedTargetDevice.c)
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
