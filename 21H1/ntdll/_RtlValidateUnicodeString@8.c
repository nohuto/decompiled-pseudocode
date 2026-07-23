/*
 * XREFs of _RtlValidateUnicodeString@8 @ 0x4B34E040
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x4B2ECFE7 (RtlUnicodeStringValidateWorker_0.c)
 */

NTSTATUS __cdecl RtlValidateUnicodeString(ULONG Flags, PUNICODE_STRING String)
{
  int v2; // ecx

  if ( Flags )
    return -1073741811;
  else
    return RtlUnicodeStringValidateWorker_0(&String->Length, v2);
}
