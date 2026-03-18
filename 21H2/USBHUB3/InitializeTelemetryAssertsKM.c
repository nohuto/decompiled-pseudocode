/*
 * XREFs of InitializeTelemetryAssertsKM @ 0x1C003FA50
 * Callers:
 *     DriverEntry @ 0x1C008C008 (DriverEntry.c)
 * Callees:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C003F98C (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     memmove @ 0x1C0043840 (memmove.c)
 *     memset @ 0x1C0043B00 (memset.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKM(const void **a1)
{
  int RegistryValues; // ebx
  void *Pool2; // rax
  void *v5; // rdi
  __int64 v6; // rcx
  bool v7; // zf
  struct _STRING DestinationString; // [rsp+38h] [rbp-59h] BYREF
  UNICODE_STRING SourceString; // [rsp+48h] [rbp-49h] BYREF
  struct _STRING v10; // [rsp+58h] [rbp-39h] BYREF
  struct _STRING v11; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v12[14]; // [rsp+78h] [rbp-19h] BYREF

  DestinationString = 0LL;
  RegistryValues = -1073741801;
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return 0LL;
  RtlInitAnsiString(&DestinationString, 0LL);
  Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 2LL, 1953657665LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a1[1], *(unsigned __int16 *)a1);
    SourceString = 0LL;
    RtlInitUnicodeString(&SourceString, 0LL);
    memset(v12, 0, sizeof(v12));
    v12[2] = L"ImagePath";
    LODWORD(v12[1]) = 32;
    v12[3] = &SourceString;
    LODWORD(v12[4]) = 2;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v5, v12, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      RegistryValues = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
      ExFreePoolWithTag(SourceString.Buffer, 0);
      if ( RegistryValues >= 0 )
      {
        v6 = (unsigned int)DestinationString.Length - 1;
        if ( DestinationString.Length != 1 )
        {
          while ( DestinationString.Buffer[v6] != 92 )
          {
            v7 = (_DWORD)v6 == 1;
            v6 = (unsigned int)(v6 - 1);
            if ( v7 )
              goto LABEL_12;
          }
          if ( (_DWORD)v6 != DestinationString.Length )
          {
            v10 = 0LL;
            RtlInitAnsiString(&v10, &DestinationString.Buffer[(unsigned int)(v6 + 1)]);
            v11 = v10;
            RegistryValues = InitializeTelemetryAssertsKMWorkerInternal((const void **)&v11);
          }
        }
LABEL_12:
        RtlFreeAnsiString(&DestinationString);
      }
    }
    ExFreePoolWithTag(v5, 0x74727341u);
  }
  return (unsigned int)RegistryValues;
}
