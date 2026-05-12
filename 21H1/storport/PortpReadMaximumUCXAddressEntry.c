/*
 * XREFs of PortpReadMaximumUCXAddressEntry @ 0x1C007BAF8
 * Callers:
 *     PortReadRegistrySettings @ 0x1C007B4D4 (PortReadRegistrySettings.c)
 * Callees:
 *     <none>
 */

char __fastcall PortpReadMaximumUCXAddressEntry(HANDLE KeyHandle, char *KeyValueInformation, __int64 a3)
{
  __int64 v6; // rdx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, L"MaximumUCXAddress");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 3
    || *((_DWORD *)KeyValueInformation + 3) != 8 )
  {
    return 0;
  }
  v6 = *(_QWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  *(_QWORD *)(a3 + 24) = v6;
  if ( !v6 )
  {
    *(_DWORD *)(a3 + 24) = -1;
    *(_DWORD *)(a3 + 28) = 0;
  }
  return 1;
}
