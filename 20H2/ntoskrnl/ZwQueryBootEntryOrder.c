/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1403FA970
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094D840 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x140975144 (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x140976890 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
