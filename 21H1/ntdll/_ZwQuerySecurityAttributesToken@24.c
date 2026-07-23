/*
 * XREFs of _ZwQuerySecurityAttributesToken@24 @ 0x4B2F3F20
 * Callers:
 *     _RtlpQueryPackageIdentityAttributes@20 @ 0x4B2E4EE1 (_RtlpQueryPackageIdentityAttributes@20.c)
 *     _RtlQueryTokenHostIdAsUlong64@8 @ 0x4B369B10 (_RtlQueryTokenHostIdAsUlong64@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwQuerySecurityAttributesToken(
        HANDLE TokenHandle,
        PUNICODE_STRING Attributes,
        ULONG NumberOfAttributes,
        PVOID Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  return Wow64SystemServiceCall();
}
