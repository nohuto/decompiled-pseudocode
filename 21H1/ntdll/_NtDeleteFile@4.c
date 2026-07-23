/*
 * XREFs of _NtDeleteFile@4 @ 0x4B2F36A0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  return Wow64SystemServiceCall();
}
