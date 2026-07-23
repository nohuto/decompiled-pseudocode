/*
 * XREFs of _NtDisplayString@4 @ 0x4B2F3730
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtDisplayString(PUNICODE_STRING String)
{
  return Wow64SystemServiceCall();
}
