/*
 * XREFs of PpPagePathRelease @ 0x14089DEB8
 * Callers:
 *     MiCreatePagingFile @ 0x1407A267C (MiCreatePagingFile.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407B6384 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     PiPagePathSetState @ 0x1407B7350 (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathRelease(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 0);
}
