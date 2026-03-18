/*
 * XREFs of BiGetNtPartitionPath @ 0x140802BE0
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140802A64 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ZwOpenDirectoryObject @ 0x14041C260 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14041E0A0 (ZwQueryDirectoryObject.c)
 *     BiIsValidDiskDevice @ 0x140802FBC (BiIsValidDiskDevice.c)
 *     BiTranslateSymbolicLink @ 0x140803050 (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x1408031CC (BiGetDriveLayoutBlock.c)
 *     BiGetPartitionVhdFilePath @ 0x140803D60 (BiGetPartitionVhdFilePath.c)
 *     BiVerifyBootPartition @ 0x140804158 (BiVerifyBootPartition.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiGetNtPartitionPath(int a1, _QWORD *a2)
{
  wchar_t *v2; // r14
  wchar_t **v3; // r15
  int v4; // eax
  wchar_t *v5; // r13
  NTSTATUS v6; // ebx
  PVOID PoolWithTag; // rdi
  bool v8; // r12
  unsigned int v9; // esi
  SIZE_T i; // rdx
  NTSTATUS DirectoryObject; // eax
  char v12; // si
  wchar_t **v13; // rbx
  unsigned __int64 v14; // rcx
  _DWORD *v15; // r13
  int v16; // eax
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r12
  ULONG v20; // eax
  bool v21; // zf
  const wchar_t *PartitionVhdFilePath; // rax
  __int64 v24; // rcx
  const wchar_t *v25; // rax
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  ULONG *OpenOptions; // [rsp+28h] [rbp-D8h]
  __int64 v28; // [rsp+30h] [rbp-D0h]
  bool v29; // [rsp+40h] [rbp-C0h]
  wchar_t **v30; // [rsp+48h] [rbp-B8h]
  ULONG v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh]
  _QWORD *v33; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t *Str1; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  _DWORD *v38; // [rsp+80h] [rbp-80h] BYREF
  HANDLE DirectoryHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp-70h] BYREF
  void *v41; // [rsp+98h] [rbp-68h]
  _QWORD *v42; // [rsp+A0h] [rbp-60h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES v44; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING v46; // [rsp+118h] [rbp+18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v48[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v49; // [rsp+158h] [rbp+58h]

  v42 = a2;
  v38 = 0LL;
  v49 = 0LL;
  v2 = 0LL;
  FileHandle = 0LL;
  v3 = 0LL;
  memset(v48, 0, sizeof(v48));
  DirectoryHandle = 0LL;
  v31 = 0;
  memset(&ObjectAttributes, 0, 44);
  P = 0LL;
  v33 = 0LL;
  DestinationString = 0LL;
  v36 = 0LL;
  memset(&v44, 0, 44);
  v41 = 0LL;
  Str1 = 0LL;
  IoStatusBlock = 0LL;
  v46 = 0LL;
  v4 = BiVerifyBootPartition(a1, (unsigned int)&v33, (unsigned int)&v38, (unsigned int)&v36, (__int64)&Str1, 0LL);
  v5 = Str1;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_42;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4B444342u);
  if ( !PoolWithTag )
    return 3221225495LL;
  v8 = 0;
  v29 = 0;
  if ( v5 && !v33 )
  {
    v8 = v38 == 0LL;
    v29 = v38 == 0LL;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v6 < 0 )
    goto LABEL_79;
  v9 = 4096;
  for ( i = 4096LL; ; i = v9 )
  {
    v3 = (wchar_t **)ExAllocatePoolWithTag(PagedPool, i, 0x4B444342u);
    if ( !v3 )
    {
      v6 = -1073741801;
      goto LABEL_79;
    }
    v28 = 0LL;
    v31 = 0;
    OpenOptions = &v31;
    DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v3);
    v6 = DirectoryObject;
    if ( DirectoryObject != 261 )
      break;
    ExFreePoolWithTag(v3, 0x4B444342u);
    v9 += 4096;
  }
  if ( (int)(DirectoryObject + 0x80000000) >= 0 && DirectoryObject != -2147483622 )
  {
LABEL_79:
    ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    goto LABEL_40;
  }
  v12 = 0;
  if ( !*(_WORD *)v3 )
    goto LABEL_78;
  v13 = v3 + 1;
  v30 = v3 + 1;
  while ( 1 )
  {
    if ( !(unsigned __int8)BiIsValidDiskDevice(*v13, v13[2]) )
      goto LABEL_14;
    swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v13, 0LL, OpenOptions, v28);
    if ( (int)BiGetDriveLayoutBlock((PCWSTR)PoolWithTag) < 0 )
      goto LABEL_14;
    if ( !v5 )
    {
      v14 = *(_QWORD *)(v36 + 4) - *(_QWORD *)((char *)v48 + 4);
      if ( !v14 )
      {
        v14 = *(_QWORD *)(v36 + 12) - *(_QWORD *)((char *)v48 + 12);
        if ( !v14 )
          v14 = *(unsigned int *)(v36 + 20) - (unsigned __int64)DWORD1(v48[1]);
      }
      if ( v14 )
      {
        ExFreePoolWithTag(P, 0x4B444342u);
        goto LABEL_14;
      }
    }
    v15 = P;
    v16 = *(_DWORD *)(v36 + 4);
    v35 = v16;
    if ( v38 )
    {
      if ( v16 == 1 )
      {
        ShareAccess[0] = *v38;
        swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v13, *(_QWORD *)ShareAccess);
        RtlInitUnicodeString(&v46, (PCWSTR)PoolWithTag);
        v44.RootDirectory = 0LL;
        v44.ObjectName = &v46;
        v44.Length = 48;
        v44.Attributes = 576;
        *(_OWORD *)&v44.SecurityDescriptor = 0LL;
        if ( ZwOpenFile(&FileHandle, 0x80000000, &v44, &IoStatusBlock, 3u, 0) >= 0 )
        {
          ZwClose(FileHandle);
          v12 = 1;
        }
        goto LABEL_35;
      }
LABEL_58:
      if ( v16 )
        goto LABEL_35;
      goto LABEL_22;
    }
    if ( v16 != 1 )
      goto LABEL_58;
LABEL_22:
    v17 = 0LL;
    if ( !v16 )
    {
      if ( v38 )
      {
        v17 = v38;
      }
      else if ( v33 )
      {
        v17 = v33;
      }
    }
    v18 = 0LL;
    v32 = 0;
    if ( !*((_DWORD *)P + 1) )
      goto LABEL_34;
    while ( 1 )
    {
      v19 = 36 * v18;
      v20 = v15[36 * v18 + 18];
      if ( !v20 )
        goto LABEL_30;
      ShareAccess[0] = v20;
      swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v30, *(_QWORD *)ShareAccess);
      if ( v29 )
      {
        PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)PoolWithTag);
        v2 = (wchar_t *)PartitionVhdFilePath;
        if ( PartitionVhdFilePath )
          break;
      }
LABEL_26:
      if ( v35 == 1 )
      {
        if ( !v33 )
          goto LABEL_30;
        v21 = *v33 == *(_QWORD *)&v15[v19 + 14];
      }
      else
      {
        if ( !v17 )
          goto LABEL_30;
        v24 = *v17 - *(_QWORD *)&v15[v19 + 24];
        if ( *v17 == *(_QWORD *)&v15[v19 + 24] )
          v24 = v17[1] - *(_QWORD *)&v15[v19 + 26];
        v21 = v24 == 0;
      }
      if ( v21 )
        goto LABEL_32;
LABEL_30:
      v18 = (unsigned int)(v32 + 1);
      v32 = v18;
      if ( (unsigned int)v18 >= v15[1] )
        goto LABEL_33;
    }
    if ( wcsicmp(Str1, PartitionVhdFilePath) )
    {
      ExFreePoolWithTag(v2, 0x4B444342u);
      v2 = 0LL;
      goto LABEL_26;
    }
LABEL_32:
    v12 = 1;
LABEL_33:
    v8 = v29;
LABEL_34:
    v13 = v30;
LABEL_35:
    ExFreePoolWithTag(v15, 0x4B444342u);
    v5 = Str1;
    if ( !Str1 )
    {
LABEL_36:
      if ( v12 )
        goto LABEL_37;
LABEL_78:
      v6 = -1073741811;
      goto LABEL_79;
    }
    if ( v12 )
    {
      v12 = 0;
      if ( v8 )
        goto LABEL_37;
      v25 = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)PoolWithTag);
      v2 = (wchar_t *)v25;
      if ( v25 )
        break;
    }
LABEL_14:
    v13 += 4;
    v30 = v13;
    if ( !*((_WORD *)v13 - 4) )
      goto LABEL_36;
  }
  if ( wcsicmp(v5, v25) )
  {
    ExFreePoolWithTag(v2, 0x4B444342u);
    v2 = 0LL;
    goto LABEL_14;
  }
LABEL_37:
  if ( (int)BiTranslateSymbolicLink((PCWSTR)PoolWithTag) >= 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    PoolWithTag = v41;
  }
  v6 = 0;
  *v42 = PoolWithTag;
LABEL_40:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
LABEL_42:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return (unsigned int)v6;
}
