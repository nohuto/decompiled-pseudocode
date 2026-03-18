/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1403F4B10
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409467E0 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x14096DFD4 (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x14096F720 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
