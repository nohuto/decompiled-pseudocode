/*
 * XREFs of Win32FileInfo @ 0x1C00E30A4
 * Callers:
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1C00613F4 (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ReadFileInfo @ 0x1C00E3038 (ReadFileInfo.c)
 *     vGetFontDriverLWT @ 0x1C00F5E40 (vGetFontDriverLWT.c)
 *     ?IsWin32kRefreshed@@YA_NXZ @ 0x1C021F5C4 (-IsWin32kRefreshed@@YA_NXZ.c)
 *     ?FNTCacheValidateFntFileInfo@@YA?AW4FntFileInfoValidationResult@@PEAPEAU_FONTFILEVIEW@@K@Z @ 0x1C0287F5C (-FNTCacheValidateFntFileInfo@@YA-AW4FntFileInfoValidationResult@@PEAPEAU_FONTFILEVIEW@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall Win32FileInfo(PCWSTR SourceString, _QWORD *a2, _QWORD *a3)
{
  NTSTATUS v5; // ebx
  void *FileHandle; // [rsp+70h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-21h] BYREF
  __int128 FileInformation; // [rsp+C8h] [rbp+Fh] BYREF
  __int128 v12; // [rsp+D8h] [rbp+1Fh]
  __int64 v13; // [rsp+E8h] [rbp+2Fh]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = IoCreateFile(
         &FileHandle,
         0x1200A9u,
         &ObjectAttributes,
         &IoStatusBlock,
         0LL,
         0x80u,
         1u,
         1u,
         0x10u,
         0LL,
         0,
         CreateFileTypeNone,
         0LL,
         0x301u);
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      v13 = 0LL;
      FileInformation = 0LL;
      v12 = 0LL;
      v5 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
      if ( v5 < 0 )
      {
LABEL_12:
        ZwClose(FileHandle);
        return v5 >= 0;
      }
      *a2 = v12;
    }
    if ( a3 )
    {
      *(_QWORD *)&v12 = 0LL;
      FileInformation = 0LL;
      v5 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      if ( v5 >= 0 )
        *a3 = *((_QWORD *)&FileInformation + 1);
    }
    goto LABEL_12;
  }
  return 0LL;
}
