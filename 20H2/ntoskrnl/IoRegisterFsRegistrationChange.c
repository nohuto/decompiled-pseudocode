/*
 * XREFs of IoRegisterFsRegistrationChange @ 0x140896640
 * Callers:
 *     <none>
 * Callees:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407C5980 (IoRegisterFsRegistrationChangeMountAware.c)
 */

NTSTATUS __stdcall IoRegisterFsRegistrationChange(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine)
{
  return IoRegisterFsRegistrationChangeMountAware(DriverObject, DriverNotificationRoutine, 0);
}
