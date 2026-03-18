/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1403F5DA0
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140947A80 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x14096F374 (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x140970AC0 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
