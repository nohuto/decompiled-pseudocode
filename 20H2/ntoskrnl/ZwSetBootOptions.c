/*
 * XREFs of ZwSetBootOptions @ 0x1403FB290
 * Callers:
 *     BiSetBootOptions @ 0x140975424 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
