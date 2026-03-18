/*
 * XREFs of ZwEnumerateBootEntries @ 0x1403F3EF0
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409467E0 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x14096D110 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x14096F720 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateBootEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
