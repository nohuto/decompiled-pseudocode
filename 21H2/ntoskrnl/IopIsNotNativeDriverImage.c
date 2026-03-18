/*
 * XREFs of IopIsNotNativeDriverImage @ 0x1409348AC
 * Callers:
 *     IopCheckIfNotNativeDriver @ 0x140933EEC (IopCheckIfNotNativeDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x14041BC60 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14041BCA0 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x14041C0A0 (ZwCreateSection.c)
 */

bool __fastcall IopIsNotNativeDriverImage(UNICODE_STRING *a1)
{
  bool v1; // bl
  _DWORD *v3; // r9
  __int64 v4; // rax
  HANDLE FileHandle; // [rsp+58h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-88h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK v10; // [rsp+A8h] [rbp-50h] BYREF
  _BYTE v11[48]; // [rsp+B8h] [rbp-40h] BYREF

  v1 = 0;
  FileHandle = 0LL;
  v10 = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  SectionHandle = 0LL;
  memset(v11, 0, sizeof(v11));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &v10, 5u, 0) < 0 )
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
  KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v11, v3);
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
    KiUnstackDetachProcess((__int64)v11, 0LL);
    ZwClose(SectionHandle);
    goto LABEL_4;
  }
  v4 = RtlImageNtHeader((__int64)BaseAddress);
  if ( v4 )
    v1 = *(_WORD *)(v4 + 4) != 0x8664;
  ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  KiUnstackDetachProcess((__int64)v11, 0LL);
  ZwClose(SectionHandle);
  ZwClose(FileHandle);
  return v1;
}
