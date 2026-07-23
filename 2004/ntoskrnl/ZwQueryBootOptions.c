/*
 * XREFs of ZwQueryBootOptions @ 0x1403F5DC0
 * Callers:
 *     BiQueryBootOptions @ 0x14096F44C (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140970AC0 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
