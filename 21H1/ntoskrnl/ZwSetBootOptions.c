/*
 * XREFs of ZwSetBootOptions @ 0x1403F5430
 * Callers:
 *     BiSetBootOptions @ 0x14096E2B4 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
