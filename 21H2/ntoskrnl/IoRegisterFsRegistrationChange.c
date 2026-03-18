/*
 * XREFs of IoRegisterFsRegistrationChange @ 0x140936460
 * Callers:
 *     <none>
 * Callees:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140859F30 (IoRegisterFsRegistrationChangeMountAware.c)
 */

NTSTATUS __stdcall IoRegisterFsRegistrationChange(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine)
{
  return IoRegisterFsRegistrationChangeMountAware(DriverObject, DriverNotificationRoutine, 0);
}
