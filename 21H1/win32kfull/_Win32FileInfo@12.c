/*
 * XREFs of _Win32FileInfo@12 @ 0xDEF22
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QAEHXZ @ 0x87B4A (-bCheckFntFileInfo@PFFOBJ@@QAEHXZ.c)
 *     ReadFileInfo @ 0xDEED6 (ReadFileInfo.c)
 *     vGetFontDriverLWT @ 0xDFB60 (vGetFontDriverLWT.c)
 *     ?IsWin32kRefreshed@@YG_NXZ @ 0xED308 (-IsWin32kRefreshed@@YG_NXZ.c)
 *     ?FNTCacheValidateFntFileInfo@@YG?AW4FntFileInfoValidationResult@@PAPAU_FONTFILEVIEW@@K@Z @ 0x1E85AE (-FNTCacheValidateFntFileInfo@@YG-AW4FntFileInfoValidationResult@@PAPAU_FONTFILEVIEW@@K@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __fastcall Win32FileInfo(PCWSTR SourceString, _DWORD *a2, _DWORD *a3)
{
  NTSTATUS v4; // esi
  _DWORD *v5; // ecx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-64h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-4Ch] BYREF
  _DWORD *v9; // [esp+30h] [ebp-44h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+34h] [ebp-40h] BYREF
  void *FileHandle; // [esp+3Ch] [ebp-38h] BYREF
  _DWORD FileInformation[11]; // [esp+40h] [ebp-34h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  v9 = a2;
  DestinationString.Buffer = 0;
  FileHandle = 0;
  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  if ( a2 )
  {
    *a2 = 0;
    a2[1] = 0;
  }
  if ( a3 )
  {
    *a3 = 0;
    a3[1] = 0;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v4 = IoCreateFile(
         &FileHandle,
         (ACCESS_MASK)&loc_1200A6 + 3,
         &ObjectAttributes,
         &IoStatusBlock,
         0,
         0x80u,
         1u,
         1u,
         0x10u,
         0,
         0,
         CreateFileTypeNone,
         0,
         0x301u);
  if ( v4 >= 0 )
  {
    if ( a2 )
    {
      memset(FileInformation, 0, 0x28u);
      v4 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      if ( v4 < 0 )
      {
LABEL_12:
        ZwClose(FileHandle);
        return v4 >= 0;
      }
      v5 = v9;
      *v9 = FileInformation[4];
      v5[1] = FileInformation[5];
    }
    if ( a3 )
    {
      memset(&FileInformation[4], 0, 0x18u);
      v4 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation[4], 0x18u, FileStandardInformation);
      if ( v4 >= 0 )
      {
        *a3 = FileInformation[6];
        a3[1] = FileInformation[7];
      }
    }
    goto LABEL_12;
  }
  return 0;
}
