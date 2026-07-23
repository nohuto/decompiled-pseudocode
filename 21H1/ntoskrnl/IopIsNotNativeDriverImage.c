/*
 * XREFs of IopIsNotNativeDriverImage @ 0x14088D57C
 * Callers:
 *     IopCheckIfNotNativeDriver @ 0x14088CEB0 (IopCheckIfNotNativeDriver.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1403F2830 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1403F2870 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x1403F2990 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1403F2C70 (ZwCreateSection.c)
 */

bool __fastcall IopIsNotNativeDriverImage(UNICODE_STRING *a1)
{
  bool v1; // bl
  _DWORD *v3; // r9
  __int64 v4; // r8
  _DWORD *v5; // r9
  PIMAGE_NT_HEADERS v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // r9
  HANDLE FileHandle; // [rsp+58h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-88h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK v14; // [rsp+A8h] [rbp-50h] BYREF
  _BYTE v15[48]; // [rsp+B8h] [rbp-40h] BYREF

  v1 = 0;
  FileHandle = 0LL;
  v14 = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  SectionHandle = 0LL;
  memset(v15, 0, sizeof(v15));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &v14, 5u, 0) < 0 )
    return 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateSection(&SectionHandle, 8u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle) < 0 )
  {
LABEL_4:
    ZwClose(FileHandle);
    return 0;
  }
  BaseAddress = 0LL;
  ViewSize = 0LL;
  KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v15, v3);
  if ( ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         0LL,
         &ViewSize,
         ViewShare,
         0,
         2u) < 0 )
  {
    KiUnstackDetachProcess((__int64)v15, 0LL, v4, v5);
    ZwClose(SectionHandle);
    goto LABEL_4;
  }
  v6 = RtlImageNtHeader(BaseAddress);
  if ( v6 )
    v1 = v6->FileHeader.Machine != 0x8664;
  ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  KiUnstackDetachProcess((__int64)v15, 0LL, v7, v8);
  ZwClose(SectionHandle);
  ZwClose(FileHandle);
  return v1;
}
