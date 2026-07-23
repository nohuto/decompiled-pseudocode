/*
 * XREFs of ZwQueryBootOptions @ 0x1403FA990
 * Callers:
 *     BiQueryBootOptions @ 0x14097521C (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x140976890 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
