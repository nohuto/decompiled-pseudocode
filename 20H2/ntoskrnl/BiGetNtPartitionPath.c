/*
 * XREFs of BiGetNtPartitionPath @ 0x14077E968
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14077E7F4 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D1760 (_wcsicmp.c)
 *     swprintf_s @ 0x1403D5F80 (swprintf_s.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F87D0 (ZwOpenFile.c)
 *     ZwOpenDirectoryObject @ 0x1403F8C70 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1403FA9F0 (ZwQueryDirectoryObject.c)
 *     BiIsValidDiskDevice @ 0x14077ED48 (BiIsValidDiskDevice.c)
 *     BiTranslateSymbolicLink @ 0x14077EDDC (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x14077EF58 (BiGetDriveLayoutBlock.c)
 *     BiGetPartitionVhdFilePath @ 0x1407816C4 (BiGetPartitionVhdFilePath.c)
 *     BiVerifyBootPartition @ 0x140781AC0 (BiVerifyBootPartition.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetNtPartitionPath(int a1, _QWORD *a2)
{
  wchar_t *v2; // r15
  wchar_t **v3; // r14
  int v4; // eax
  wchar_t *v5; // r13
  NTSTATUS v6; // ebx
  PVOID PoolWithTag; // rdi
  ULONG v8; // esi
  PVOID v9; // rax
  char v10; // r12
  NTSTATUS v11; // eax
  wchar_t **v12; // rbx
  bool v13; // r14
  unsigned __int64 v14; // rcx
  _DWORD *v15; // r13
  int v16; // eax
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rsi
  int v20; // eax
  bool v21; // zf
  const wchar_t *PartitionVhdFilePath; // rax
  __int64 v24; // rcx
  const wchar_t *v25; // rax
  BOOLEAN RestartScan[8]; // [rsp+20h] [rbp-E0h]
  bool v27; // [rsp+40h] [rbp-C0h]
  int v28; // [rsp+40h] [rbp-C0h]
  wchar_t **v29; // [rsp+48h] [rbp-B8h]
  ULONG Context; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v31; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t *Str1; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+68h] [rbp-98h]
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  _DWORD *v36; // [rsp+80h] [rbp-80h] BYREF
  HANDLE DirectoryHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp-70h] BYREF
  PVOID v39; // [rsp+98h] [rbp-68h]
  void *v40; // [rsp+A0h] [rbp-60h]
  _QWORD *v41; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING v43; // [rsp+C0h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  OBJECT_ATTRIBUTES v45; // [rsp+100h] [rbp+0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v47[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v48; // [rsp+160h] [rbp+60h]

  v41 = a2;
  v36 = 0LL;
  v48 = 0LL;
  FileHandle = 0LL;
  DirectoryHandle = 0LL;
  Context = 0;
  memset(v47, 0, sizeof(v47));
  P = 0LL;
  v2 = 0LL;
  v31 = 0LL;
  v3 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v34 = 0LL;
  v40 = 0LL;
  Str1 = 0LL;
  DestinationString = 0LL;
  memset(&v45, 0, sizeof(v45));
  IoStatusBlock = 0LL;
  v43 = 0LL;
  v4 = BiVerifyBootPartition(a1, (unsigned int)&v31, (unsigned int)&v36, (unsigned int)&v34, (__int64)&Str1, 0LL);
  v5 = Str1;
  v6 = v4;
  if ( v4 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4B444342u);
    if ( !PoolWithTag )
      return 3221225495LL;
    v27 = 0;
    if ( v5 && !v31 )
      v27 = v36 == 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Device");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
    if ( v6 < 0 )
      goto LABEL_80;
    v8 = 4096;
    v9 = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x4B444342u);
    v10 = 0;
    while ( 1 )
    {
      v39 = v9;
      v3 = (wchar_t **)v9;
      if ( !v9 )
      {
        v6 = -1073741801;
        goto LABEL_80;
      }
      Context = 0;
      v11 = ZwQueryDirectoryObject(DirectoryHandle, v9, v8, 0, 1u, &Context, 0LL);
      v6 = v11;
      if ( v11 != 261 )
        break;
      ExFreePoolWithTag(v3, 0x4B444342u);
      v8 += 4096;
      v9 = ExAllocatePoolWithTag(PagedPool, v8, 0x4B444342u);
    }
    if ( (int)(v11 + 0x80000000) >= 0 && v11 != -2147483622 )
      goto LABEL_39;
    if ( !*(_WORD *)v3 )
    {
LABEL_79:
      v6 = -1073741811;
LABEL_80:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
LABEL_40:
      if ( v3 )
        ExFreePoolWithTag(v3, 0x4B444342u);
      goto LABEL_42;
    }
    v12 = v3 + 1;
    v13 = v27;
    v29 = v12;
    while ( 1 )
    {
      if ( !(unsigned __int8)BiIsValidDiskDevice(*v12, v12[2]) )
        goto LABEL_14;
      swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v12, 0LL);
      if ( (int)BiGetDriveLayoutBlock((PCWSTR)PoolWithTag) < 0 )
        goto LABEL_14;
      if ( !v5 )
      {
        v14 = *(_QWORD *)(v34 + 4) - *(_QWORD *)((char *)v47 + 4);
        if ( !v14 )
        {
          v14 = *(_QWORD *)(v34 + 12) - *(_QWORD *)((char *)v47 + 12);
          if ( !v14 )
            v14 = *(unsigned int *)(v34 + 20) - (unsigned __int64)DWORD1(v47[1]);
        }
        if ( v14 )
        {
          ExFreePoolWithTag(P, 0x4B444342u);
          goto LABEL_14;
        }
      }
      v15 = P;
      v16 = *(_DWORD *)(v34 + 4);
      v33 = v16;
      if ( v36 )
        break;
      if ( v16 != 1 )
        goto LABEL_56;
LABEL_24:
      v17 = 0LL;
      if ( !v16 )
      {
        if ( v36 )
        {
          v17 = v36;
        }
        else if ( v31 )
        {
          v17 = v31;
        }
      }
      v18 = 0LL;
      v28 = 0;
      if ( *((_DWORD *)P + 1) )
      {
        do
        {
          v19 = 36 * v18;
          v20 = v15[36 * v18 + 18];
          if ( v20 )
          {
            *(_DWORD *)RestartScan = v20;
            swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v29, *(_QWORD *)RestartScan);
            if ( v13 )
            {
              PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)PoolWithTag);
              v2 = (wchar_t *)PartitionVhdFilePath;
              if ( PartitionVhdFilePath )
              {
                if ( !wcsicmp(Str1, PartitionVhdFilePath) )
                {
LABEL_32:
                  v10 = 1;
                  break;
                }
                ExFreePoolWithTag(v2, 0x4B444342u);
                v2 = 0LL;
              }
            }
            if ( v33 == 1 )
            {
              if ( !v31 )
                goto LABEL_70;
              v21 = *v31 == *(_QWORD *)&v15[v19 + 14];
            }
            else
            {
              if ( !v17 )
                goto LABEL_70;
              v24 = *v17 - *(_QWORD *)&v15[v19 + 24];
              if ( *v17 == *(_QWORD *)&v15[v19 + 24] )
                v24 = v17[1] - *(_QWORD *)&v15[v19 + 26];
              v21 = v24 == 0;
            }
            if ( v21 )
              goto LABEL_32;
          }
LABEL_70:
          v18 = (unsigned int)(v28 + 1);
          v28 = v18;
        }
        while ( (unsigned int)v18 < v15[1] );
      }
      v12 = v29;
LABEL_34:
      ExFreePoolWithTag(v15, 0x4B444342u);
      v5 = Str1;
      if ( !Str1 )
        goto LABEL_35;
      if ( v10 )
      {
        if ( v13 )
          goto LABEL_35;
        v25 = (const wchar_t *)BiGetPartitionVhdFilePath((PCWSTR)PoolWithTag);
        v2 = (wchar_t *)v25;
        if ( v25 )
        {
          if ( !wcsicmp(v5, v25) )
          {
LABEL_35:
            v3 = (wchar_t **)v39;
            if ( v10 )
            {
              if ( (int)BiTranslateSymbolicLink((PCWSTR)PoolWithTag) >= 0 )
              {
                ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
                PoolWithTag = v40;
              }
              v6 = 0;
              *v41 = PoolWithTag;
LABEL_39:
              if ( v6 >= 0 )
                goto LABEL_40;
              goto LABEL_80;
            }
            goto LABEL_79;
          }
          ExFreePoolWithTag(v2, 0x4B444342u);
          v2 = 0LL;
        }
        v10 = 0;
      }
LABEL_14:
      v12 += 4;
      v29 = v12;
      if ( !*((_WORD *)v12 - 4) )
        goto LABEL_35;
    }
    if ( v16 == 1 )
    {
      *(_DWORD *)RestartScan = *v36;
      swprintf_s((wchar_t *)PoolWithTag, 0x2CuLL, L"\\Device\\%s\\Partition%lu", *v12, *(_QWORD *)RestartScan);
      RtlInitUnicodeString(&v43, (PCWSTR)PoolWithTag);
      v45.ObjectName = &v43;
      v45.Length = 48;
      v45.RootDirectory = 0LL;
      v45.Attributes = 576;
      *(_OWORD *)&v45.SecurityDescriptor = 0LL;
      if ( ZwOpenFile(&FileHandle, 0x80000000, &v45, &IoStatusBlock, 3u, 0) >= 0 )
      {
        ZwClose(FileHandle);
        v10 = 1;
      }
      goto LABEL_34;
    }
LABEL_56:
    if ( v16 )
      goto LABEL_34;
    goto LABEL_24;
  }
LABEL_42:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return (unsigned int)v6;
}
