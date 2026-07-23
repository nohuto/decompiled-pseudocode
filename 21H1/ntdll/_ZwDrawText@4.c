/*
 * XREFs of _ZwDrawText@4 @ 0x4B2F3740
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwDrawText(PUNICODE_STRING Text)
{
  return Wow64SystemServiceCall();
}
