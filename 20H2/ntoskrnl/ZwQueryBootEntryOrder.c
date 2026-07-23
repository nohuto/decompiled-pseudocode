/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1403FA970
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094D840 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x140975144 (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x140976890 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
