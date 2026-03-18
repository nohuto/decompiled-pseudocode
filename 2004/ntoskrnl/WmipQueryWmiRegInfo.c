/*
 * XREFs of WmipQueryWmiRegInfo @ 0x1407C2190
 * Callers:
 *     IoWMISystemControl @ 0x14070D574 (IoWMISystemControl.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402770E0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063D070 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall WmipQueryWmiRegInfo(__int64 a1, __int64 a2, UNICODE_STRING *a3, _QWORD *a4)
{
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *a4 = &WmipRegistryPath;
  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, "SMBiosData");
  return RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
}
