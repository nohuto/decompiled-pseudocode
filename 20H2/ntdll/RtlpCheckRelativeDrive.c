/*
 * XREFs of RtlpCheckRelativeDrive @ 0x18004D1E4
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18001B430 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlSetThreadErrorMode @ 0x18004D370 (RtlSetThreadErrorMode.c)
 *     RtlpResetDriveEnvironment @ 0x18004D3D4 (RtlpResetDriveEnvironment.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004DE70 (RtlQueryEnvironmentVariable_U.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenFile @ 0x18009D710 (NtOpenFile.c)
 */

NTSTATUS __fastcall RtlpCheckRelativeDrive(wchar_t a1)
{
  NTSTATUS v2; // ebx
  _UNICODE_STRING Value; // [rsp+38h] [rbp-D0h] BYREF
  ULONG OldMode[2]; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE FileHandle; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  WCHAR SourceString[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v11; // [rsp+ACh] [rbp-5Ch]
  __int64 v12; // [rsp+B8h] [rbp-50h] BYREF
  char v13; // [rsp+C0h] [rbp-48h] BYREF

  SourceString[1] = a1;
  SourceString[0] = 61;
  v11 = 58;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v12 = *(_QWORD *)L"\\??\\";
  *(_DWORD *)&Value.Length = 34078720;
  Value.Buffer = (wchar_t *)&v13;
  if ( RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &Value) < 0 )
  {
    *Value.Buffer = a1;
    Value.Buffer[1] = 58;
    Value.Buffer[2] = 92;
    Value.Buffer[3] = 0;
    Value.Length = 6;
    return RtlpResetDriveEnvironment(a1);
  }
  Value.Length += 8;
  ObjectAttributes.Length = 48;
  Value.MaximumLength = 544;
  ObjectAttributes.RootDirectory = 0LL;
  Value.Buffer = (wchar_t *)&v12;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = &Value;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RtlSetThreadErrorMode(0x10u, OldMode);
  v2 = NtOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  RtlSetThreadErrorMode(OldMode[0], 0LL);
  if ( v2 < 0 )
    return RtlpResetDriveEnvironment(a1);
  return NtClose(FileHandle);
}
