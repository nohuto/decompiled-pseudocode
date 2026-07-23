/*
 * XREFs of IopFileUtilWalkDirectoryTreeHelper @ 0x14077CA10
 * Callers:
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14077C878 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x140A92440 (IopFileUtilWalkDirectoryTreeTopDown.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwWaitForSingleObject @ 0x1403FA600 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 *     ZwQueryDirectoryFile @ 0x1403FAC20 (ZwQueryDirectoryFile.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeHelper(
        UNICODE_STRING *a1,
        int a2,
        __int64 (__fastcall *a3)(UNICODE_STRING *, UNICODE_STRING *, __int64, __int64),
        __int64 a4,
        unsigned int *FileInformation,
        int a6,
        __int64 a7)
{
  char v7; // r13
  UNICODE_STRING *v8; // rsi
  NTSTATUS Status; // ebx
  unsigned int *v11; // rdi
  unsigned int *v12; // r14
  unsigned __int64 v13; // rax
  __int16 v14; // cx
  const WCHAR *i; // r15
  __int64 v16; // r8
  bool v17; // si
  UNICODE_STRING **v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int16 v21; // si
  UNICODE_STRING *PoolWithTag; // rdi
  HANDLE FileHandle; // [rsp+68h] [rbp-61h] BYREF
  unsigned int *v24; // [rsp+70h] [rbp-59h]
  UNICODE_STRING Source; // [rsp+78h] [rbp-51h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-31h] BYREF
  __int16 v29; // [rsp+120h] [rbp+57h]

  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v7 = a2;
  v8 = a1;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock = 0LL;
  Source = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, ~(a2 << 17) & 0x200000 | 0x4001);
  if ( Status < 0 )
    return (unsigned int)Status;
  v11 = FileInformation;
  Status = ZwQueryDirectoryFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             FileInformation,
             0x3FEu,
             FileBothDirectoryInformation,
             0,
             0LL,
             1u);
  if ( Status < 0 )
    goto LABEL_34;
  while ( 2 )
  {
    if ( Status == 259 )
    {
      ZwWaitForSingleObject(FileHandle, 1u, 0LL);
      Status = IoStatusBlock.Status;
      if ( IoStatusBlock.Status < 0 )
        break;
    }
    v12 = v11;
    v24 = v11 + 15;
    v13 = (unsigned __int64)v11[15] >> 1;
    v14 = *((_WORD *)v11 + v13 + 47);
    *((_WORD *)v11 + v13 + 47) = 0;
    for ( i = (const WCHAR *)v11 + 47; ; i = (const WCHAR *)v12 + 47 )
    {
      v29 = v14;
      RtlInitUnicodeString(&Source, i);
      v21 = Source.Length + v8->Length + 2;
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v21 + 38LL, 0x75466F49u);
      if ( !PoolWithTag )
        break;
      PoolWithTag[1].MaximumLength = v21;
      v8 = a1;
      PoolWithTag[1].Buffer = &PoolWithTag[2].Length;
      PoolWithTag[1].Length = 0;
      RtlCopyUnicodeString(PoolWithTag + 1, a1);
      RtlAppendUnicodeToString(PoolWithTag + 1, L"\\");
      RtlAppendUnicodeStringToString(PoolWithTag + 1, &Source);
      v16 = v12[14];
      if ( (v16 & 0x10) != 0 )
      {
        v17 = !wcsicmp(i, L".") || !wcsicmp(i, L"..");
        if ( (v7 & 2) != 0 )
        {
          if ( (v7 & 4) == 0 || !v17 )
          {
            Status = a3(PoolWithTag + 1, &Source, v12[14], a4);
            goto LABEL_16;
          }
LABEL_20:
          ExFreePoolWithTag(PoolWithTag, 0);
        }
        else
        {
LABEL_16:
          if ( v17 || (v7 & 8) == 0 )
            goto LABEL_20;
          v18 = *(UNICODE_STRING ***)(a7 + 8);
          if ( *v18 != (UNICODE_STRING *)a7 )
            __fastfail(3u);
          *(_QWORD *)&PoolWithTag->Length = a7;
          PoolWithTag->Buffer = (wchar_t *)v18;
          *v18 = PoolWithTag;
          *(_QWORD *)(a7 + 8) = PoolWithTag;
        }
        v8 = a1;
        goto LABEL_25;
      }
      if ( (v7 & 1) != 0 )
        Status = a3(PoolWithTag + 1, &Source, v16, a4);
      ExFreePoolWithTag(PoolWithTag, 0);
LABEL_25:
      if ( Status < 0 )
        goto LABEL_34;
      *((_WORD *)v12 + ((unsigned __int64)*v24 >> 1) + 47) = v29;
      v19 = *v12;
      if ( !(_DWORD)v19 )
        goto LABEL_30;
      v12 = (unsigned int *)((char *)v12 + v19);
      v24 = v12 + 15;
      v20 = (unsigned __int64)v12[15] >> 1;
      v14 = *((_WORD *)v12 + v20 + 47);
      *((_WORD *)v12 + v20 + 47) = 0;
    }
    Status = -1073741670;
LABEL_30:
    if ( Status >= 0 )
    {
      v11 = FileInformation;
      Status = ZwQueryDirectoryFile(
                 FileHandle,
                 0LL,
                 0LL,
                 0LL,
                 &IoStatusBlock,
                 FileInformation,
                 0x3FEu,
                 FileBothDirectoryInformation,
                 0,
                 0LL,
                 0);
      if ( Status >= 0 )
      {
        v8 = a1;
        continue;
      }
    }
    break;
  }
LABEL_34:
  ZwClose(FileHandle);
  if ( Status == -2147483642 )
    return 0;
  return (unsigned int)Status;
}
