/*
 * XREFs of EtwpReadPerSiloConfigParameters @ 0x1403BC5F0
 * Callers:
 *     EtwInitializeSiloState @ 0x14079FC30 (EtwInitializeSiloState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x140681B00 (RtlQueryRegistryValuesEx.c)
 */

NTSTATUS __fastcall EtwpReadPerSiloConfigParameters(__int64 a1)
{
  NTSTATUS result; // eax
  HANDLE v3; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-69h] BYREF
  int v6; // [rsp+70h] [rbp-39h] BYREF
  unsigned int *v7; // [rsp+78h] [rbp-31h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+90h] [rbp-19h] BYREF
  unsigned int v9; // [rsp+110h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+118h] [rbp+6Fh] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v9 = 64;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0
    || (memset(QueryTable, 0, sizeof(QueryTable)),
        QueryTable[0].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&EtwpQueryRegistryCallback,
        QueryTable[0].EntryContext = &v6,
        QueryTable[0].Name = L"EtwMaxLoggers",
        QueryTable[0].DefaultType = 4,
        v6 = 4,
        v7 = &v9,
        RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL) < 0) )
  {
    result = v9;
  }
  else
  {
    result = 256;
    if ( v9 <= 0x100 )
    {
      result = v9;
      if ( v9 < 0x20 )
        result = 32;
    }
    v9 = result;
  }
  v3 = KeyHandle;
  *(_DWORD *)(a1 + 16) = result;
  if ( v3 )
    return ZwClose(v3);
  return result;
}
