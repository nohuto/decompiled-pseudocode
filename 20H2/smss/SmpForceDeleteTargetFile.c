/*
 * XREFs of SmpForceDeleteTargetFile @ 0x140014564
 * Callers:
 *     SmpProcessFileRenames @ 0x140009348 (SmpProcessFileRenames.c)
 *     SmpClearTemporaryFiles @ 0x140013EE0 (SmpClearTemporaryFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 *     SmpOpenTargetFile @ 0x140014B90 (SmpOpenTargetFile.c)
 *     SmpSetTargetAttributes @ 0x140015088 (SmpSetTargetAttributes.c)
 */

__int64 __fastcall SmpForceDeleteTargetFile(struct _UNICODE_STRING *a1)
{
  int v1; // edi
  NTSTATUS v2; // ebx
  ULONG FileAttributes; // eax
  HANDLE v4; // rcx
  char FileInformation[8]; // [rsp+30h] [rbp-29h] BYREF
  HANDLE FileHandle; // [rsp+38h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+17h] BYREF
  _FILE_BASIC_INFORMATION v10; // [rsp+80h] [rbp+27h] BYREF

  FileHandle = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  memset(&v10, 0, sizeof(v10));
  v1 = 0;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = SmpOpenTargetFile(&FileHandle, 1114368LL, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    FileInformation[0] = 1;
    v2 = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
    if ( v2 < 0 && NtQueryAttributesFile(&ObjectAttributes, &v10) >= 0 )
    {
      FileAttributes = v10.FileAttributes;
      if ( (v10.FileAttributes & 1) == 0 )
        goto LABEL_9;
      v2 = SmpSetTargetAttributes(FileHandle, v10.FileAttributes & 0xFFFFFFFE);
      if ( v2 >= 0 )
      {
        v1 = 1;
        FileInformation[0] = 1;
        v2 = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
        if ( v2 >= 0 )
        {
          v1 = 0;
          v2 = 0;
        }
      }
    }
  }
  FileAttributes = v10.FileAttributes;
LABEL_9:
  v4 = FileHandle;
  if ( FileHandle )
  {
    if ( v1 )
    {
      SmpSetTargetAttributes(FileHandle, FileAttributes);
      v4 = FileHandle;
    }
    NtClose(v4);
  }
  return (unsigned int)v2;
}
