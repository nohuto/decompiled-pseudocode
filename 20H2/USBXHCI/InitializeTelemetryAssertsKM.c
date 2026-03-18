/*
 * XREFs of InitializeTelemetryAssertsKM @ 0x1C0018410
 * Callers:
 *     DriverEntry @ 0x1C007232C (DriverEntry.c)
 * Callees:
 *     memmove @ 0x1C001BD00 (memmove.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0072E74 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKM(const void **a1)
{
  NTSTATUS RegistryValues; // esi
  PVOID PoolWithTag; // rax
  void *v4; // r14
  int Length; // r8d
  __int64 v6; // rcx
  bool v7; // zf
  PVOID v8; // rbx
  struct _STRING v10; // [rsp+38h] [rbp-49h] BYREF
  struct _STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v13[14]; // [rsp+68h] [rbp-19h] BYREF

  qword_1C0062758 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
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
    memset(v13, 0, sizeof(v13));
    v13[2] = L"ImagePath";
    LODWORD(v13[1]) = 32;
    v13[3] = &SourceString;
    LODWORD(v13[4]) = 2;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v4, v13, 0LL, 0LL);
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
          g_ModuleName = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v10.Length + 1, 0x74727341u);
          v8 = g_ModuleName;
          memset(g_ModuleName, 0, (unsigned int)v10.Length + 1);
          memmove(v8, v10.Buffer, v10.Length);
        }
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C006A040);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C006A008);
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C006A078);
        _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
      }
    }
    ExFreePoolWithTag(v4, 0x74727341u);
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)RegistryValues;
}
