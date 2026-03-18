/*
 * XREFs of EmpMapPhysicalAddress @ 0x140A4888C
 * Callers:
 *     EmpCacheBiosDate @ 0x140A4873C (EmpCacheBiosDate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1403F8670 (ZwMapViewOfSection.c)
 *     ZwOpenSection @ 0x1403F8850 (ZwOpenSection.c)
 */

char *__fastcall EmpMapPhysicalAddress(SIZE_T a1, __int64 a2, HANDLE *a3, PVOID *a4, __int64 a5)
{
  __int64 v5; // rbx
  char *v8; // rax
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
    KiStackAttachProcess(PsInitialSystemProcess, 0, a5);
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
      KiUnstackDetachProcess(a5, 0);
      ZwClose(*a3);
      *a3 = 0LL;
    }
    else
    {
      v8 = (char *)BaseAddress;
      *a4 = BaseAddress;
      return v8 + 4085;
    }
  }
  return (char *)v5;
}
