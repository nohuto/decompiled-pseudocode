/*
 * XREFs of PpPagePathAssign @ 0x14089CB80
 * Callers:
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1407B3214 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     PiPagePathSetState @ 0x1407B41E0 (PiPagePathSetState.c)
 */

__int64 __fastcall PpPagePathAssign(struct _FILE_OBJECT *a1)
{
  return PiPagePathSetState(a1, 1);
}
