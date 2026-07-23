/*
 * XREFs of EtwpReadConfigParameters @ 0x140A463D0
 * Callers:
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlQueryRegistryValuesEx @ 0x140681B00 (RtlQueryRegistryValuesEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void EtwpReadConfigParameters()
{
  const WCHAR *v0; // rbx
  int v1; // eax
  int v2; // ecx
  WCHAR *PoolWithTag; // rax
  unsigned __int64 v4; // rax
  unsigned int v5; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v6; // [rsp+3Ch] [rbp-CCh] BYREF
  __int16 UnicodeString; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString_8; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE DestinationString[3]; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  int v11; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING *p_UnicodeString_8; // [rsp+B0h] [rbp-58h]
  int v13; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int *v14; // [rsp+C0h] [rbp-48h]
  int v15; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int *v16; // [rsp+D0h] [rbp-38h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[4]; // [rsp+E8h] [rbp-20h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  UnicodeString = 0;
  v6 = 0;
  v5 = 10;
  v0 = 0LL;
  UnicodeString_8 = 0LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_21;
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))EtwpQueryRegistryCallback;
  QueryTable[1].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))EtwpQueryRegistryCallback;
  QueryTable[0].EntryContext = &v11;
  QueryTable[2].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))EtwpQueryRegistryCallback;
  QueryTable[0].Name = L"RTBacklogRoot";
  QueryTable[0].DefaultType = 1;
  QueryTable[0].DefaultData = &UnicodeString;
  v11 = 1;
  p_UnicodeString_8 = &UnicodeString_8;
  QueryTable[1].EntryContext = &v13;
  QueryTable[1].Name = L"MaxNonPagedPoolUsage";
  v14 = &v5;
  QueryTable[2].EntryContext = &v15;
  QueryTable[2].Name = L"StackCaptureTimeout";
  v16 = &v6;
  QueryTable[1].DefaultType = 4;
  v13 = 4;
  QueryTable[2].DefaultType = 4;
  v15 = 4;
  if ( RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)DestinationString[0], QueryTable, 0LL, 0LL) < 0 )
  {
LABEL_21:
    v1 = v5;
    v2 = v6;
  }
  else
  {
    if ( UnicodeString_8.Buffer )
    {
      if ( UnicodeString_8.Length >= 4u )
      {
        PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, UnicodeString_8.MaximumLength + 2LL, 0x50777445u);
        v0 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, UnicodeString_8.Buffer, UnicodeString_8.MaximumLength);
          v4 = (unsigned __int64)UnicodeString_8.Length >> 1;
          if ( v0[v4 - 1] != 92 )
          {
            v0[v4] = 92;
            v0[((unsigned __int64)UnicodeString_8.Length >> 1) + 1] = 0;
          }
        }
      }
    }
    v1 = 50;
    if ( v5 <= 0x32 )
    {
      v1 = v5;
      if ( v5 < 0xA )
        v1 = 10;
    }
    v2 = v6;
    v5 = v1;
    if ( v6 > 0x2BF20 )
      v2 = 180000;
    v6 = v2;
  }
  EtwpMaxNonPagedPoolUsage = v1;
  if ( v0 )
    EtwpRTBacklogFileRoot = v0;
  if ( v2 )
    EtwpStackCaptureTimeout = v2;
  if ( DestinationString[0] )
    ZwClose(DestinationString[0]);
  RtlFreeAnsiString(&UnicodeString_8);
}
