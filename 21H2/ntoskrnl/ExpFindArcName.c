/*
 * XREFs of ExpFindArcName @ 0x14094FF14
 * Callers:
 *     ExpCreateOutputARC @ 0x14094F9A4 (ExpCreateOutputARC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x1403D8270 (wcscpy_s.c)
 *     wcsncat_s @ 0x1403D8300 (wcsncat_s.c)
 *     wcsncpy_s @ 0x1403D8420 (wcsncpy_s.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1403FAEA0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1403FCC20 (ZwQueryDirectoryObject.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 *     ExpTranslateSymbolicLink @ 0x140952BBC (ExpTranslateSymbolicLink.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpFindArcName(const UNICODE_STRING *a1, wchar_t **a2)
{
  BOOLEAN v2; // r12
  wchar_t *PoolWithTag; // rax
  WCHAR *v4; // rbx
  NTSTATUS v6; // edi
  UNICODE_STRING *v7; // rdi
  int DirectoryObject; // eax
  wchar_t *v9; // rax
  wchar_t *v10; // rsi
  unsigned int v11; // r13d
  int v12; // ebx
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-21h] BYREF
  unsigned int NumberOfBytes; // [rsp+100h] [rbp+77h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  NumberOfBytes = 0;
  DestinationString = 0LL;
  v2 = 0;
  String2 = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x12uLL, 0x72766E45u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  wcscpy_s(PoolWithTag, 9uLL, L"\\ArcName");
  RtlInitUnicodeString(&DestinationString, v4);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  ExFreePoolWithTag(v4, 0);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 0LL;
  RtlInitUnicodeString(&String2, L"SymbolicLink");
  while ( 1 )
  {
    DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v7);
    if ( DirectoryObject == -1073741789 )
    {
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      v7 = (UNICODE_STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x72766E45u);
      if ( !v7 )
      {
        v12 = -1073741670;
        goto LABEL_28;
      }
      DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v7);
    }
    if ( DirectoryObject < 0 )
      break;
    if ( RtlEqualUnicodeString(v7 + 1, &String2, 0) )
    {
      NumberOfBytes = v7->Length + 18;
      v9 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes + 2LL, 0x72766E45u);
      v10 = v9;
      if ( !v9 )
      {
        v12 = -1073741670;
        goto LABEL_26;
      }
      v11 = v7->Length >> 1;
      wcscpy_s(v9, ((unsigned __int64)NumberOfBytes >> 1) + 1, L"\\ArcName\\");
      wcsncat_s(v10, ((unsigned __int64)NumberOfBytes >> 1) + 1, v7->Buffer, v11);
      v10[(unsigned __int64)NumberOfBytes >> 1] = 0;
      v12 = ExpTranslateSymbolicLink(v10);
      if ( v12 < 0 )
      {
        ExFreePoolWithTag(v10, 0);
        goto LABEL_23;
      }
      v2 = RtlEqualUnicodeString(&DestinationString, a1, 1u);
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( v2 == 1 )
      {
        wcsncpy_s(v10, ((unsigned __int64)NumberOfBytes >> 1) + 1, v7->Buffer, v11);
        v10[v11] = 0;
        *a2 = v10;
        goto LABEL_23;
      }
      ExFreePoolWithTag(v10, 0);
    }
  }
  v12 = 0;
  if ( DirectoryObject != -2147483622 )
    v12 = DirectoryObject;
LABEL_23:
  if ( v12 >= 0 && !v2 )
    v12 = -1073741766;
LABEL_26:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_28:
  ZwClose(DirectoryHandle);
  return (unsigned int)v12;
}
