/*
 * XREFs of _ZwRenameKey@8 @ 0x4B2F40A0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  return Wow64SystemServiceCall();
}
