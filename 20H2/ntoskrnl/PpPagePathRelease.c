/*
 * XREFs of PpPagePathRelease @ 0x1408A39E8
 * Callers:
 *     MiCreatePagingFile @ 0x1407B19AC (MiCreatePagingFile.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407C4BB4 (CmpVolumeContextSendDeviceUsageNotification.c)
 * Callees:
 *     PiPagePathSetState @ 0x1407C5BDC (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathRelease(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 0);
}
