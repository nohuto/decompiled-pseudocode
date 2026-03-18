/*
 * XREFs of _EngQueryFileTimeStamp@4 @ 0x1DA288
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

LARGE_INTEGER __stdcall EngQueryFileTimeStamp(LPWSTR pwsz)
{
  NTSTATUS v1; // esi
  void *FileHandle; // [esp+Ch] [ebp-6Ch] BYREF
  LARGE_INTEGER v4; // [esp+10h] [ebp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+18h] [ebp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+20h] [ebp-58h] BYREF
  _DWORD v7[2]; // [esp+28h] [ebp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+30h] [ebp-48h] BYREF
  _DWORD FileInformation[11]; // [esp+48h] [ebp-30h] BYREF

  memset(FileInformation, 0, 0x28u);
  FileHandle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  v4.QuadPart = 0LL;
  RtlInitUnicodeString(&DestinationString, pwsz);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x10u) >= 0 )
  {
    v1 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
    ZwClose(FileHandle);
    if ( !v1 )
    {
      v7[0] = FileInformation[4];
      v7[1] = FileInformation[5];
      GreSystemTimeToLocalTime(v7, &v4);
    }
  }
  return v4;
}
