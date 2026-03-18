/*
 * XREFs of _EngGetFileChangeTime@8 @ 0x1DA140
 * Callers:
 *     ?UmfdEscEngGetFileChangeTime@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCC4D (-UmfdEscEngGetFileChangeTime@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __stdcall EngGetFileChangeTime(HANDLE h, LARGE_INTEGER *pChangeTime)
{
  BOOL v2; // esi
  const WCHAR *v3; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+24h] [ebp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+2Ch] [ebp-38h] BYREF
  void *FileHandle; // [esp+34h] [ebp-30h] BYREF
  LARGE_INTEGER FileInformation[5]; // [esp+38h] [ebp-2Ch] BYREF

  v2 = 0;
  memset(FileInformation, 0, sizeof(FileInformation));
  v3 = (const WCHAR *)*((_DWORD *)h + 12);
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  FileHandle = 0;
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  if ( !v3 )
  {
    pChangeTime->QuadPart = 0LL;
    return 1;
  }
  if ( (*((_BYTE *)h + 24) & 1) != 0 )
  {
    *pChangeTime = *(LARGE_INTEGER *)h;
    return 1;
  }
  RtlInitUnicodeString(&DestinationString, v3);
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwCreateFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x80u, 0, 3u, 0x10u, 0, 0) >= 0 )
  {
    if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation) >= 0 )
    {
      *pChangeTime = FileInformation[2];
      v2 = 1;
    }
    ZwClose(FileHandle);
  }
  return v2;
}
