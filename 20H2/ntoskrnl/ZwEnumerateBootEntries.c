/*
 * XREFs of ZwEnumerateBootEntries @ 0x1403F9D50
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094D840 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x140974280 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x140976890 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateBootEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
