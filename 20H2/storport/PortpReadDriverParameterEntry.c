/*
 * XREFs of PortpReadDriverParameterEntry @ 0x1C007CB8C
 * Callers:
 *     PortGetDriverParameters @ 0x1C007C48C (PortGetDriverParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     memmove @ 0x1C001F600 (memmove.c)
 */

char __fastcall PortpReadDriverParameterEntry(HANDLE KeyHandle, PVOID *a2)
{
  unsigned int v4; // eax
  char *PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING SourceString; // [rsp+38h] [rbp-C8h] BYREF
  struct _STRING v9; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+70h] [rbp-90h] BYREF
  int v12; // [rsp+74h] [rbp-8Ch]
  int v13; // [rsp+78h] [rbp-88h]
  unsigned int NumberOfBytes; // [rsp+7Ch] [rbp-84h]
  unsigned int NumberOfBytes_4; // [rsp+80h] [rbp-80h]
  wchar_t Str1[246]; // [rsp+84h] [rbp-7Ch] BYREF

  ResultLength = 0;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  *(_DWORD *)(&v9.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DriverParameter");
  if ( ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValueFullInformation,
         KeyValueInformation,
         0x200u,
         &ResultLength) < 0
    || v12 == 4 && NumberOfBytes > 0xF6 )
  {
    return 0;
  }
  if ( _wcsnicmp(Str1, L"DriverParameter", (unsigned __int64)NumberOfBytes_4 >> 1) )
    return 0;
  v4 = NumberOfBytes;
  if ( !NumberOfBytes )
    return 0;
  if ( *a2 )
  {
    ExFreePoolWithTag(*a2, 0);
    v4 = NumberOfBytes;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x704D6C50u);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  if ( v12 == 1 )
  {
    v9.Buffer = PoolWithTag;
    SourceString.Buffer = (wchar_t *)&KeyValueInformation[v13];
    SourceString.Length = NumberOfBytes;
    SourceString.MaximumLength = NumberOfBytes;
    v9.Length = 0;
    v9.MaximumLength = NumberOfBytes;
    if ( RtlUnicodeStringToAnsiString(&v9, &SourceString, 0) < 0 )
    {
      ExFreePoolWithTag(*a2, 0);
      *a2 = 0LL;
    }
  }
  else
  {
    memmove(PoolWithTag, &KeyValueInformation[v13], NumberOfBytes);
  }
  return 1;
}
