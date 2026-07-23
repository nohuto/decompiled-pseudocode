/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1403F5DA0
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140947A80 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x14096F374 (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x140970AC0 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
