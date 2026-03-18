/*
 * XREFs of EmpMapPhysicalAddress @ 0x140A4965C
 * Callers:
 *     EmpCacheBiosDate @ 0x140A4950C (EmpCacheBiosDate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1403F2830 (ZwMapViewOfSection.c)
 *     ZwOpenSection @ 0x1403F2A10 (ZwOpenSection.c)
 */

char *__fastcall EmpMapPhysicalAddress(SIZE_T a1, __int64 a2, HANDLE *a3, PVOID *a4, __int64 a5)
{
  __int64 v5; // rbx
  _DWORD *v8; // r9
  __int64 v9; // r8
  _DWORD *v10; // r9
  char *v11; // rax
  LARGE_INTEGER SectionOffset; // [rsp+50h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  SIZE_T CommitSize; // [rsp+C0h] [rbp+5Fh] BYREF
  PVOID BaseAddress; // [rsp+D8h] [rbp+77h] BYREF

  CommitSize = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v5 = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *a4 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenSection(a3, 4u, &ObjectAttributes) >= 0 )
  {
    BaseAddress = 0LL;
    CommitSize = 8LL;
    SectionOffset.QuadPart = 1044480LL;
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, a5, v8);
    if ( ZwMapViewOfSection(
           *a3,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           CommitSize,
           &SectionOffset,
           &CommitSize,
           ViewUnmap,
           0,
           4u) < 0 )
    {
      KiUnstackDetachProcess(a5, 0LL, v9, v10);
      ZwClose(*a3);
      *a3 = 0LL;
    }
    else
    {
      v11 = (char *)BaseAddress;
      *a4 = BaseAddress;
      return v11 + 4085;
    }
  }
  return (char *)v5;
}
