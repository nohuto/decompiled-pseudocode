/*
 * XREFs of RtlIntegerToUnicodeString @ 0x1406FF600
 * Callers:
 *     BapdpMarshallBootDataToRegistry @ 0x1403B0C98 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405BD444 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x1405BE24C (AdtpFormatPrefix.c)
 *     RtlpInitNlsFileName @ 0x1406FF458 (RtlpInitNlsFileName.c)
 *     pIoQueryDeviceDescription @ 0x140778784 (pIoQueryDeviceDescription.c)
 *     AdtpObjsInitialize @ 0x1407AAC70 (AdtpObjsInitialize.c)
 *     AdtpBuildAccessesString @ 0x14096ADD0 (AdtpBuildAccessesString.c)
 *     AdtpBuildReplacementString @ 0x14096B488 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x14096B524 (AdtpBuildUserAccountControlString.c)
 *     ObCreateSiloRootDirectory @ 0x14097CFE0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097D31C (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063D070 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x1406FF690 (RtlIntegerToChar.c)
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
