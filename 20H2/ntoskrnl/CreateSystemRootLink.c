/*
 * XREFs of CreateSystemRootLink @ 0x140A7272C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14020AEFC (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 *     NtCreateDirectoryObject @ 0x1406C5B60 (NtCreateDirectoryObject.c)
 *     NtCreateSymbolicLinkObject @ 0x1406CDEF0 (NtCreateSymbolicLinkObject.c)
 */

__int64 __fastcall CreateSystemRootLink(_QWORD *a1)
{
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  __int64 v4; // r9
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  __int64 v9; // r9
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  HANDLE LinkHandle; // [rsp+38h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+70h] [rbp-98h] BYREF
  HANDLE DirectoryHandle; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING v19; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  wchar_t pszDest[256]; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 80LL;
  DirectoryHandle = 0LL;
  LinkHandle = 0LL;
  DestinationString = 0LL;
  v19 = 0LL;
  LinkTarget = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\ArcName");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v2 = NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( v2 < 0 )
    KeBugCheckEx(0x64u, v2, 1uLL, 0LL, 0LL);
  NtClose(DirectoryHandle);
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v3 = NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  if ( v3 < 0 )
    KeBugCheckEx(0x64u, v3, 2uLL, 0LL, 0LL);
  NtClose(DirectoryHandle);
  RtlInitUnicodeString(&v19, L"\\Device\\BootDevice");
  v4 = a1[23];
  ObjectAttributes.ObjectName = &v19;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v5 = RtlStringCbPrintfW(pszDest, 0x200uLL, L"\\ArcName\\%S", v4);
  if ( v5 < 0 )
    KeBugCheckEx(0x64u, v5, 3uLL, 0LL, 0LL);
  RtlInitUnicodeString(&LinkTarget, pszDest);
  v6 = NtCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
  if ( v6 < 0 )
    KeBugCheckEx(0x64u, v6, 4uLL, 0LL, 0LL);
  NtClose(LinkHandle);
  RtlInitUnicodeString(&v19, L"\\SystemRoot");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v19;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  BugCheckParameter4 = a1[25];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v7 = RtlStringCbPrintfW(pszDest, 0x200uLL, L"%s%S", L"\\Device\\BootDevice", BugCheckParameter4);
  if ( v7 < 0 )
    KeBugCheckEx(0x64u, v7, 5uLL, 0LL, 0LL);
  RtlInitUnicodeString(&LinkTarget, pszDest);
  LinkTarget.Length -= 2;
  v8 = NtCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
  if ( v8 < 0 )
    KeBugCheckEx(0x64u, v8, 6uLL, 0LL, 0LL);
  NtClose(LinkHandle);
  RtlInitUnicodeString(&v19, L"\\Device\\OSDataDevice");
  v9 = a1[42];
  ObjectAttributes.ObjectName = &v19;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  if ( !v9 )
    v9 = a1[23];
  v10 = RtlStringCbPrintfW(pszDest, 0x200uLL, L"\\ArcName\\%S", v9);
  if ( v10 < 0 )
    KeBugCheckEx(0x64u, v10, 7uLL, 0LL, 0LL);
  RtlInitUnicodeString(&LinkTarget, pszDest);
  v11 = NtCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
  if ( v11 < 0 )
    KeBugCheckEx(0x64u, v11, 8uLL, 0LL, 0LL);
  NtClose(LinkHandle);
  RtlInitUnicodeString(&v19, L"\\OSDataRoot");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v19;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  RtlInitUnicodeString(&LinkTarget, L"\\Device\\OSDataDevice");
  v12 = NtCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
  if ( v12 < 0 )
    KeBugCheckEx(0x64u, v12, 9uLL, 0LL, 0LL);
  NtClose(LinkHandle);
  return 0LL;
}
