/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1406D2250
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403B3608 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C10BC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405C1EC4 (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x1406D20A8 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x140786D84 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x1407B8BB0 (AdtpObjsInitialize.c)
 *     AdtpBuildAccessesString @ 0x140970BA0 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x140971258 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x1409712F4 (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x140982DB0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409830EC (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405DFB00 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x1406D22E0 (RtlIntegerToChar.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  CHAR Stringa[40]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  result = RtlIntegerToChar(Value, Base, 33, Stringa);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = Stringa;
    v5 = -1LL;
    do
      ++v5;
    while ( Stringa[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
