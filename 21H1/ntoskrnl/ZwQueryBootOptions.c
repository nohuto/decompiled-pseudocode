/*
 * XREFs of ZwQueryBootOptions @ 0x1403F4B30
 * Callers:
 *     BiQueryBootOptions @ 0x14096E0AC (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x14096F720 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
