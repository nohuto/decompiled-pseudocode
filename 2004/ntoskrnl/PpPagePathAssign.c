/*
 * XREFs of PpPagePathAssign @ 0x14089DEA0
 * Callers:
 *     MiCreatePagingFile @ 0x1407A267C (MiCreatePagingFile.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407B6384 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     PiPagePathSetState @ 0x1407B7350 (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathAssign(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 1);
}
