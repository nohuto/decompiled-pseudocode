/*
 * XREFs of StorCreateScsiSymbolicLink @ 0x1C0044D9C
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C002AC04 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0019C6C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 */

__int64 __fastcall StorCreateScsiSymbolicLink(PUNICODE_STRING DeviceName, unsigned int *a2)
{
  unsigned int v2; // edi
  __int64 i; // r9
  unsigned int v6; // ebx
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-69h] BYREF
  wchar_t pszDest[64]; // [rsp+30h] [rbp-59h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  for ( i = 0LL; ; i = v2 )
  {
    RtlStringCchPrintfW(
      pszDest,
      0x40uLL,
      L"\\Device\\ScsiPort%d",
      i,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v6 = IoCreateSymbolicLink(&DestinationString, DeviceName);
    if ( !v6 )
      break;
    if ( v6 != -1073741771 )
      return v6;
    ++v2;
  }
  RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\DosDevices\\Scsi%d:", v2);
  RtlInitUnicodeString(&DestinationString, pszDest);
  IoCreateSymbolicLink(&DestinationString, DeviceName);
  ConfigurationInformation = IoGetConfigurationInformation();
  ++ConfigurationInformation->ScsiPortCount;
  if ( a2 )
    *a2 = v2;
  return v6;
}
