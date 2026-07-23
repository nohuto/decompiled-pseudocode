/*
 * XREFs of _EtwpCreateFile@24 @ 0x4B2F160C
 * Callers:
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlpDosPathNameToRelativeNtPathName_U@20 @ 0x4B2D1C18 (_RtlpDosPathNameToRelativeNtPathName_U@20.c)
 *     _ZwSetInformationFile@20 @ 0x4B2F2BF0 (_ZwSetInformationFile@20.c)
 *     _NtCreateFile@44 @ 0x4B2F2ED0 (_NtCreateFile@44.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __thiscall EtwpCreateFile(PCWSTR SourceString, int a2, _BYTE *a3, int a4, HANDLE *a5)
{
  bool v6; // bl
  NTSTATUS v7; // esi
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-6Ch] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+24h] [ebp-54h] BYREF
  _UNICODE_STRING DestinationString; // [esp+2Ch] [ebp-4Ch] BYREF
  _UNICODE_STRING UnicodeString; // [esp+34h] [ebp-44h] BYREF
  HANDLE *v13; // [esp+3Ch] [ebp-3Ch]
  ULONG CreateDisposition; // [esp+40h] [ebp-38h]
  HANDLE FileHandle; // [esp+44h] [ebp-34h] BYREF
  _DWORD FileInformation[11]; // [esp+48h] [ebp-30h] BYREF

  *a5 = 0;
  v13 = a5;
  CreateDisposition = 2 * (*a3 != 1) + 3;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&UnicodeString, 0);
  v6 = 0;
  if ( DestinationString.Length > 1u )
    v6 = SourceString[(DestinationString.Length >> 1) - 1] == 92;
  v7 = RtlpDosPathNameToRelativeNtPathName_U(0, (const WCHAR *)DestinationString.Buffer, &UnicodeString, 0, 0);
  if ( v7 >= 0 )
  {
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    v7 = NtCreateFile(
           &FileHandle,
           0xC0100080,
           &ObjectAttributes,
           &IoStatusBlock,
           0,
           0x80u,
           5u,
           CreateDisposition,
           0x68u,
           0,
           0);
    if ( v7 >= 0 )
    {
      if ( *a3 == 1 && IoStatusBlock.Information == 2 )
        *a3 = 0;
      if ( !v6 )
      {
        memset(FileInformation, 0, 0x28u);
        FileInformation[8] = 0x2000;
        v7 = ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      }
      *v13 = FileHandle;
    }
  }
  RtlFreeAnsiString(&UnicodeString);
  return v7;
}
