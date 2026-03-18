/*
 * XREFs of ?DxgkpGetFileLastWriteTime@@YAJPEAGPEAT_LARGE_INTEGER@@@Z @ 0x1C025E200
 * Callers:
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C025E370 (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkpGetFileLastWriteTime(PCWSTR SourceString, union _LARGE_INTEGER *a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  void *FileHandle; // [rsp+30h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  __int128 FileInformation; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v20; // [rsp+98h] [rbp+2Fh]
  __int64 v21; // [rsp+A8h] [rbp+3Fh]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  FileHandle = (void *)-1LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  v3 = ZwOpenFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  v7 = v3;
  if ( v3 >= 0 )
  {
    v21 = 0LL;
    FileInformation = 0LL;
    v20 = 0LL;
    v9 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    v7 = v9;
    if ( v9 >= 0 )
    {
      a2->QuadPart = v20;
    }
    else
    {
      v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v13 + 24) = v7;
      *(_QWORD *)(v13 + 32) = 605LL;
      WdLogEvent5_WdWarning(v13);
    }
    ZwClose(FileHandle);
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdWarning(v8);
  }
  return (unsigned int)v7;
}
