/*
 * XREFs of ZwEnumerateBootEntries @ 0x1403F5180
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140947A80 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x14096E4B0 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x140970AC0 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
