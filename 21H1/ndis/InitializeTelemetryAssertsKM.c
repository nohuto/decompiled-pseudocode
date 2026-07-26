/*
 * XREFs of InitializeTelemetryAssertsKM @ 0x1C0038F70
 * Callers:
 *     DriverEntry @ 0x1C01438B0 (DriverEntry.c)
 * Callees:
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C010B368 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKM(const void **a1)
{
  NTSTATUS RegistryValues; // esi
  PVOID PoolWithTag; // rax
  void *v4; // r14
  int Length; // r8d
  __int64 v6; // rcx
  bool v7; // zf
  void *v8; // rbx
  _STRING v10; // [rsp+38h] [rbp-49h] BYREF
  _STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  _UNICODE_STRING SourceString; // [rsp+58h] [rbp-29h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+68h] [rbp-19h] BYREF

  qword_1C00E3DD8 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
  g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
  RegistryValues = -1073741801;
  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, 0LL);
  KeInitializeSpinLock(&g_AssertSpinLock);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)a1 + 2LL, 0x74727341u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned __int16 *)a1 + 2LL);
    memmove(v4, a1[1], *(unsigned __int16 *)a1);
    SourceString = 0LL;
    RtlInitUnicodeString(&SourceString, 0LL);
    memset(QueryTable, 0, sizeof(QueryTable));
    QueryTable[0].Name = L"ImagePath";
    QueryTable[0].Flags = 32;
    QueryTable[0].EntryContext = &SourceString;
    QueryTable[0].DefaultType = 2;
    RegistryValues = RtlQueryRegistryValuesEx(0, (PCWSTR)v4, QueryTable, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      RegistryValues = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
      RtlFreeUnicodeString(&SourceString);
      if ( RegistryValues >= 0 )
      {
        Length = DestinationString.Length;
        v6 = (unsigned int)DestinationString.Length - 1;
        if ( DestinationString.Length != 1 )
        {
          while ( DestinationString.Buffer[v6] != 92 )
          {
            v7 = (_DWORD)v6 == 1;
            v6 = (unsigned int)(v6 - 1);
            if ( v7 )
              goto LABEL_9;
          }
          Length = v6;
        }
LABEL_9:
        if ( Length != DestinationString.Length )
        {
          v10 = 0LL;
          RtlInitAnsiString(&v10, &DestinationString.Buffer[Length + 1]);
          g_ModuleName = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v10.Length + 1, 0x74727341u);
          v8 = (void *)g_ModuleName;
          memset((void *)g_ModuleName, 0, (unsigned int)v10.Length + 1);
          memmove(v8, v10.Buffer, v10.Length);
        }
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00F7040);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&unk_1C00F7008);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00F7078);
        _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
      }
    }
    ExFreePoolWithTag(v4, 0x74727341u);
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)RegistryValues;
}
