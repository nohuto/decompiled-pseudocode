/*
 * XREFs of ZwSetBootOptions @ 0x1403F66C0
 * Callers:
 *     BiSetBootOptions @ 0x14096F654 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
