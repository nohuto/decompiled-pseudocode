/*
 * XREFs of PortpReadNumberOfRequestsEntry @ 0x1C007BB84
 * Callers:
 *     PortReadRegistrySettings @ 0x1C007B3F4 (PortReadRegistrySettings.c)
 * Callees:
 *     <none>
 */

char __fastcall PortpReadNumberOfRequestsEntry(HANDLE KeyHandle, char *KeyValueInformation, __int64 a3)
{
  unsigned int v6; // ecx
  int v7; // eax
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, L"NumberOfRequests");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 4
    || *((_DWORD *)KeyValueInformation + 3) != 4 )
  {
    return 0;
  }
  v6 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  v7 = 16;
  if ( v6 >= 0x10 )
  {
    v7 = *(_DWORD *)&KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
    if ( v6 > 0xFF )
      v7 = 255;
  }
  *(_DWORD *)(a3 + 32) = v7;
  return 1;
}
