/*
 * XREFs of SmpQuerySameVolume @ 0x140013114
 * Callers:
 *     SmpGetDumpDestination @ 0x140012B78 (SmpGetDumpDestination.c)
 *     SmpSavePageFile @ 0x140013594 (SmpSavePageFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpQuerySameVolume(void *a1, struct _UNICODE_STRING *a2, bool *a3)
{
  NTSTATUS result; // eax
  int v6; // edi
  NTSTATUS v7; // ebx
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _BYTE FsInformation[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v12; // [rsp+B8h] [rbp-48h]

  result = NtQueryVolumeInformationFile(a1, &IoStatusBlock, FsInformation, 0xE0u, FileFsVolumeInformation);
  if ( result >= 0 )
  {
    v6 = v12;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.ObjectName = a2;
    result = NtOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
    if ( result == -1073741772 )
      result = NtCreateFile(
                 &FileHandle,
                 0x110000u,
                 &ObjectAttributes,
                 &IoStatusBlock,
                 0LL,
                 0x80u,
                 0,
                 2u,
                 0x1060u,
                 0LL,
                 0);
    if ( result >= 0 )
    {
      v7 = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 0xE0u, FileFsVolumeInformation);
      NtClose(FileHandle);
      if ( v7 >= 0 )
        *a3 = v6 == v12;
      return v7;
    }
  }
  return result;
}
