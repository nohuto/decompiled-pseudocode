/*
 * XREFs of IopFileUtilWalkDirectoryTreeHelper @ 0x14080B4F0
 * Callers:
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14080B370 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x140B50ACC (IopFileUtilWalkDirectoryTreeTopDown.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ZwQueryDirectoryFile @ 0x14041BE00 (ZwQueryDirectoryFile.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeHelper(
        UNICODE_STRING *a1,
        int a2,
        __int64 (__fastcall *a3)(UNICODE_STRING *, UNICODE_STRING *, __int64, __int64),
        __int64 a4,
        char *FileInformation,
        int a6,
        __int64 a7)
{
  char v7; // r13
  UNICODE_STRING *v8; // rsi
  NTSTATUS Status; // ebx
  unsigned int *v11; // r15
  const WCHAR *v12; // r14
  unsigned __int64 v13; // rax
  __int16 v14; // cx
  __int64 v15; // r8
  char v16; // si
  UNICODE_STRING **v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int16 v20; // si
  UNICODE_STRING *Pool2; // rax
  UNICODE_STRING *v22; // rdi
  BOOLEAN v23; // [rsp+58h] [rbp-71h]
  HANDLE FileHandle; // [rsp+68h] [rbp-61h] BYREF
  unsigned int *v25; // [rsp+70h] [rbp-59h]
  UNICODE_STRING Source; // [rsp+78h] [rbp-51h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-31h] BYREF
  __int16 v30; // [rsp+120h] [rbp+57h]

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
  v23 = 1;
LABEL_33:
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
             v23);
  if ( Status >= 0 )
  {
    if ( Status != 259
      || (ZwWaitForSingleObject(FileHandle, 1u, 0LL), Status = IoStatusBlock.Status, IoStatusBlock.Status >= 0) )
    {
      v11 = (unsigned int *)FileInformation;
      v25 = (unsigned int *)(FileInformation + 60);
      v12 = (const WCHAR *)(FileInformation + 94);
      v13 = (unsigned __int64)*((unsigned int *)FileInformation + 15) >> 1;
      v14 = *(_WORD *)&FileInformation[2 * v13 + 94];
      *(_WORD *)&FileInformation[2 * v13 + 94] = 0;
      while ( 1 )
      {
        v30 = v14;
        RtlInitUnicodeString(&Source, v12);
        v20 = Source.Length + v8->Length + 2;
        Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, v20 + 38LL, 1967550281LL);
        v22 = Pool2;
        if ( !Pool2 )
        {
          Status = -1073741670;
          goto LABEL_29;
        }
        Pool2[1].MaximumLength = v20;
        v8 = a1;
        Pool2[1].Buffer = &Pool2[2].Length;
        Pool2[1].Length = 0;
        RtlCopyUnicodeString(Pool2 + 1, a1);
        RtlAppendUnicodeToString(v22 + 1, L"\\");
        RtlAppendUnicodeStringToString(v22 + 1, &Source);
        v15 = v11[14];
        if ( (v15 & 0x10) != 0 )
          break;
        if ( (v7 & 1) != 0 )
          Status = a3(v22 + 1, &Source, v15, a4);
        ExFreePoolWithTag(v22, 0);
LABEL_24:
        if ( Status < 0 )
          goto LABEL_29;
        *((_WORD *)v11 + ((unsigned __int64)*v25 >> 1) + 47) = v30;
        v18 = *v11;
        if ( !(_DWORD)v18 )
        {
          v23 = 0;
          goto LABEL_33;
        }
        v11 = (unsigned int *)((char *)v11 + v18);
        v25 = v11 + 15;
        v12 = (const WCHAR *)v11 + 47;
        v19 = (unsigned __int64)v11[15] >> 1;
        v14 = *((_WORD *)v11 + v19 + 47);
        *((_WORD *)v11 + v19 + 47) = 0;
      }
      if ( !wcsicmp(v12, L".") || (v16 = 0, !wcsicmp(v12, L"..")) )
        v16 = 1;
      if ( (v7 & 2) != 0 )
      {
        if ( (v7 & 4) != 0 && v16 )
          goto LABEL_19;
        Status = a3(v22 + 1, &Source, v11[14], a4);
      }
      if ( !v16 && (v7 & 8) != 0 )
      {
        v17 = *(UNICODE_STRING ***)(a7 + 8);
        if ( *v17 != (UNICODE_STRING *)a7 )
          __fastfail(3u);
        *(_QWORD *)&v22->Length = a7;
        v22->Buffer = (wchar_t *)v17;
        *v17 = v22;
        *(_QWORD *)(a7 + 8) = v22;
        goto LABEL_20;
      }
LABEL_19:
      ExFreePoolWithTag(v22, 0);
LABEL_20:
      v8 = a1;
      goto LABEL_24;
    }
  }
LABEL_29:
  ZwClose(FileHandle);
  if ( Status == -2147483642 )
    return 0;
  return (unsigned int)Status;
}
