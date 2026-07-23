/*
 * XREFs of _ZwQueryBootOptions@8 @ 0x4B2F3D80
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  return Wow64SystemServiceCall();
}
