/*
 * XREFs of IopLoadCrashdumpDriver @ 0x1403A47A8
 * Callers:
 *     IoGetDumpStack @ 0x1407647A4 (IoGetDumpStack.c)
 *     IopInitializeCrashDump @ 0x1407A3848 (IopInitializeCrashDump.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140224A90 (RtlImageNtHeader.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     IopGetPhysicalMemoryBlock @ 0x1403C7B94 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 */

__int64 IopLoadCrashdumpDriver()
{
  __int64 result; // rax
  PIMAGE_NT_HEADERS v1; // rax
  __int64 (__fastcall *v2)(UNICODE_STRING **, int *); // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING *v4; // [rsp+40h] [rbp-40h] BYREF
  __int64 PhysicalMemoryBlock; // [rsp+48h] [rbp-38h]
  __int64 (__fastcall *v6)(int, int, int, int, __int64, __int64); // [rsp+50h] [rbp-30h]
  __int64 (__fastcall *v7)(ULONG_PTR); // [rsp+58h] [rbp-28h]
  __int64 (__fastcall *v8)(int, int, int, int, __int64); // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+74h] [rbp-Ch]
  UNICODE_STRING *v12; // [rsp+78h] [rbp-8h]
  PVOID BaseOfImage; // [rsp+90h] [rbp+10h] BYREF
  __int64 v14; // [rsp+98h] [rbp+18h] BYREF

  v14 = 0LL;
  PhysicalMemoryBlock = 0LL;
  v11 = 0;
  BaseOfImage = 0LL;
  DestinationString = 0LL;
  if ( CrashdmpImageEntry )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Drivers\\crashdmp.sys");
  result = MmLoadSystemImageEx((unsigned int)&DestinationString, 0, 0, 34, (__int64)&v14, (__int64)&BaseOfImage);
  if ( (int)result >= 0 )
  {
    v1 = RtlImageNtHeader(BaseOfImage);
    if ( !v1 )
      return 3221225473LL;
    v2 = (__int64 (__fastcall *)(UNICODE_STRING **, int *))((char *)BaseOfImage + v1->OptionalHeader.AddressOfEntryPoint);
    v4 = &IoArcBootDeviceName;
    v12 = &PoHiberFileRoot;
    PhysicalMemoryBlock = IopGetPhysicalMemoryBlock();
    if ( !PhysicalMemoryBlock )
      return 3221225626LL;
    v6 = IopLoadCrashdmpImage;
    v7 = MmUnloadSystemImage;
    v9 = IopReportBugCheckProgress;
    v8 = HvlGetEncryptedData;
    v10 = VslVsmEnabled ? ((HvlpFlags & 2) != 0) + 1 : 0;
    CrashdmpCallTable = 1;
    dword_140C50A54 = 11;
    result = v2(&v4, &CrashdmpCallTable);
    if ( (int)result >= 0 )
    {
      CrashdmpImageEntry = v14;
      CrashdmpImageBase = BaseOfImage;
      return 0LL;
    }
  }
  return result;
}
