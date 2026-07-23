/*
 * XREFs of IopInitCrashDumpDuringSysInit @ 0x140A69598
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopInitializeOfflineCrashDump @ 0x1403C58E8 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_Init @ 0x1403C59B0 (SecureDump_Init.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     __report_rangecheckfailure @ 0x1404B0ECC (__report_rangecheckfailure.c)
 *     RtlQueryRegistryValuesEx @ 0x140681B00 (RtlQueryRegistryValuesEx.c)
 *     IoInitializeCrashDump @ 0x14079F7D4 (IoInitializeCrashDump.c)
 *     MmInitializeMemoryLimits @ 0x140A3762C (MmInitializeMemoryLimits.c)
 */

__int64 __fastcall IopInitCrashDumpDuringSysInit(__int64 Context, int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  char v7; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-C8h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v10[30]; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v11; // [rsp+E6h] [rbp-22h]
  char v12; // [rsp+E8h] [rbp-20h]
  char v13; // [rsp+EDh] [rbp-1Bh]

  v2 = 0;
  v7 = 0;
  IopReportBugCheckProgress = (__int64)HalSetEnvironmentVariableEx;
  if ( !ForceDumpDisabled )
    ForceDumpDisabled = (int)SecureDump_Init(Context, a2) < 0;
  if ( (*(_DWORD *)(Context + 264) & 2) != 0 )
    IopReportBugCheckProgress = (__int64)VslReportBugCheckProgress;
  v4 = 0;
  v5 = 0LL;
  do
  {
    if ( v5 >= 0x29 )
      _report_rangecheckfailure();
    v10[v5] = 0;
    ++v4;
    ++v5;
  }
  while ( v4 < 0x29 );
  v11 = 257;
  v10[6] = 1;
  v12 = 1;
  v13 = 1;
  SpecialMemoryRanges = (__int64)MmInitializeMemoryLimits(Context, (__int64)v10);
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Flags = 4;
  QueryTable[0].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))IopInitCrashDumpRegCallback;
  QueryTable[0].DefaultType = 0;
  QueryTable[0].Name = L"ExistingPageFiles";
  QueryTable[0].EntryContext = &v7;
  RtlQueryRegistryValuesEx(2u, L"Session Manager\\Memory Management", QueryTable, (PVOID)Context, 0LL);
  if ( !v7 )
  {
    *(_OWORD *)&v8[1] = 0LL;
    v2 = IoInitializeCrashDump(0LL) == 0 ? 0xC0000001 : 0;
  }
  IopInitializeOfflineCrashDump(*(_QWORD *)(Context + 240));
  return v2;
}
