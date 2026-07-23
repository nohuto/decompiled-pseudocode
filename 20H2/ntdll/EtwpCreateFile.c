/*
 * XREFs of EtwpCreateFile @ 0x180056C24
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180056508 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A974 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     ZwSetInformationFile @ 0x18009D590 (ZwSetInformationFile.c)
 *     ZwCreateFile @ 0x18009DB50 (ZwCreateFile.c)
 */

__int64 __fastcall EtwpCreateFile(PCWSTR SourceString, __int64 a2, __int64 a3, _BYTE *a4, int a5, _QWORD *a6)
{
  ULONG CreateDisposition; // r15d
  bool v9; // di
  NTSTATUS v10; // ebx
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-59h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-49h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-39h] BYREF
  _OWORD FileInformation[2]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v17; // [rsp+E0h] [rbp+17h]

  *a6 = 0LL;
  CreateDisposition = 3;
  if ( *a4 != 1 )
    CreateDisposition = 5;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v9 = 0;
  UnicodeString.Buffer = 0LL;
  if ( DestinationString.Length > 1u )
    v9 = SourceString[((unsigned __int64)DestinationString.Length >> 1) - 1] == 92;
  v10 = RtlpDosPathNameToRelativeNtPathName_U(0, DestinationString.Buffer, (int)&UnicodeString, 0LL, 0LL);
  if ( v10 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &UnicodeString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwCreateFile(
            (PHANDLE)&DestinationString,
            0xC0100080,
            &ObjectAttributes,
            &IoStatusBlock,
            0LL,
            0x80u,
            5u,
            CreateDisposition,
            0x68u,
            0LL,
            0);
    if ( v10 >= 0 )
    {
      if ( *a4 == 1 && IoStatusBlock.Information == 2 )
        *a4 = 0;
      if ( !v9 )
      {
        v17 = 0x2000LL;
        memset(FileInformation, 0, sizeof(FileInformation));
        v10 = ZwSetInformationFile(
                *(HANDLE *)&DestinationString.Length,
                &IoStatusBlock,
                FileInformation,
                0x28u,
                FileBasicInformation);
      }
      *a6 = *(_QWORD *)&DestinationString.Length;
    }
  }
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v10;
}
