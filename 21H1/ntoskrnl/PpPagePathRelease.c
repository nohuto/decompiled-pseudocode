/*
 * XREFs of PpPagePathRelease @ 0x14089CB98
 * Callers:
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407B3214 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     PiPagePathSetState @ 0x1407B41E0 (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathRelease(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 0);
}
