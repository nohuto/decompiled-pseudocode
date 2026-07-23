/*
 * XREFs of ExpGetGlobalLocaleSection @ 0x1406A268C
 * Callers:
 *     NtInitializeNlsFiles @ 0x1406A2550 (NtInitializeNlsFiles.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     RtlStringCchCatW @ 0x1403714B0 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1403FAEC0 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpGetGlobalLocaleSection(_QWORD *a1)
{
  PVOID v1; // rdi
  int v3; // r15d
  NTSTATUS result; // eax
  HANDLE v5; // rax
  NTSTATUS v6; // ebx
  struct _KTHREAD *CurrentThread; // r14
  PVOID v8; // rbx
  PVOID v9; // rbx
  char v10; // si
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  const wchar_t *v14; // r8
  __int64 v15; // rdx
  wchar_t *v16; // rcx
  wchar_t v17; // ax
  wchar_t *v18; // rax
  NTSTATUS v19; // eax
  HANDLE v20; // rcx
  HANDLE FileHandle; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp-80h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-78h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C0h] [rbp-48h] BYREF
  int v30; // [rsp+C4h] [rbp-44h]
  int v31; // [rsp+C8h] [rbp-40h]
  int v32; // [rsp+CCh] [rbp-3Ch]
  wchar_t pszDest[264]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = NlsLocaleSectionPointer;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  v3 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  if ( (unsigned __int64)NlsLocaleSectionPointer > 1 )
  {
    ObfReferenceObject(NlsLocaleSectionPointer);
LABEL_3:
    *a1 = v1;
    return 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"ln";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&NlsTableVersionKeyName,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v30 == 4
      && v31 == 4 )
    {
      v3 = v32;
      v14 = 0LL;
      if ( v32 == 5243136 )
        v14 = L"loc2008.nls";
      if ( v14 )
      {
        v15 = 260LL;
        v16 = pszDest;
        do
        {
          if ( v15 == -2147483386 )
            break;
          v17 = *(wchar_t *)((char *)v16 + (char *)L"\\SystemRoot\\System32\\" - (char *)pszDest);
          if ( !v17 )
            break;
          *v16++ = v17;
          --v15;
        }
        while ( v15 );
        v18 = v16 - 1;
        if ( v15 )
          v18 = v16;
        *v18 = 0;
        if ( v15 && RtlStringCchCatW(pszDest, 0x104uLL, v14) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, pszDest);
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v19 = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
          v20 = FileHandle;
          if ( v19 < 0 )
            v20 = 0LL;
          FileHandle = v20;
        }
      }
    }
    ZwClose(KeyHandle);
  }
  v5 = FileHandle;
  if ( FileHandle )
  {
LABEL_11:
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, v5);
    ZwClose(FileHandle);
    if ( v6 < 0 )
      return v6;
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    v1 = Object;
    ZwClose(SectionHandle);
    if ( v6 < 0 )
      return v6;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&NlsSectionLock, 0LL);
    v8 = NlsLocaleSectionPointer;
    if ( NlsLocaleSectionPointer == (PVOID)1 )
    {
      v9 = Object;
      NlsTableVersion = v3;
      ObfReferenceObject(Object);
      NlsLocaleSectionPointer = v9;
    }
    else if ( NlsLocaleSectionPointer )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      v1 = v8;
      ObfReferenceObject(v8);
    }
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&NlsSectionLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock(&NlsSectionLock);
    KeAbPostRelease((ULONG_PTR)&NlsSectionLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v11, v12, v13);
    goto LABEL_3;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L">@";
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    v5 = FileHandle;
    v3 = 263424;
    goto LABEL_11;
  }
  return result;
}
