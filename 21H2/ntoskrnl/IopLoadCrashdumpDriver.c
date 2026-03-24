/*
 * XREFs of IopLoadCrashdumpDriver @ 0x1403A7488
 * Callers:
 *     IoGetDumpStack @ 0x140777784 (IoGetDumpStack.c)
 *     IopInitializeCrashDump @ 0x1407B77E8 (IopInitializeCrashDump.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     RtlImageNtHeader @ 0x14031C950 (RtlImageNtHeader.c)
 *     IopGetPhysicalMemoryBlock @ 0x1403CB1A4 (IopGetPhysicalMemoryBlock.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     MmLoadSystemImageEx @ 0x14075BAFC (MmLoadSystemImageEx.c)
 */

__int64 IopLoadCrashdumpDriver()
{
  __int64 result; // rax
  __int64 v1; // rax
  char *v2; // rbx
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
  char *v13; // [rsp+90h] [rbp+10h] BYREF
  __int64 v14; // [rsp+98h] [rbp+18h] BYREF

  v14 = 0LL;
  PhysicalMemoryBlock = 0LL;
  v11 = 0;
  v13 = 0LL;
  DestinationString = 0LL;
  if ( CrashdmpImageEntry )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Drivers\\crashdmp.sys");
  result = MmLoadSystemImageEx((unsigned int)&DestinationString, 0, 0, 34, (__int64)&v14, (__int64)&v13);
  if ( (int)result >= 0 )
  {
    v1 = RtlImageNtHeader((__int64)v13);
    if ( !v1 )
      return 3221225473LL;
    v2 = &v13[*(unsigned int *)(v1 + 40)];
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
    dword_140C50C74 = 11;
    result = ((__int64 (__fastcall *)(UNICODE_STRING **, int *))v2)(&v4, &CrashdmpCallTable);
    if ( (int)result >= 0 )
    {
      CrashdmpImageEntry = v14;
      CrashdmpImageBase = v13;
      return 0LL;
    }
  }
  return result;
}
