/*
 * XREFs of PortpReadMaximumLogicalUnitEntry @ 0x1C007BA4C
 * Callers:
 *     PortReadRegistrySettings @ 0x1C007B4D4 (PortReadRegistrySettings.c)
 * Callees:
 *     <none>
 */

char __fastcall PortpReadMaximumLogicalUnitEntry(
        HANDLE KeyHandle,
        unsigned __int8 *KeyValueInformation,
        unsigned int *a3)
{
  char result; // al
  unsigned int v7; // edx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp+10h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, L"MaximumLogicalUnit");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) < 0
    || *((_DWORD *)KeyValueInformation + 1) != 4
    || *((_DWORD *)KeyValueInformation + 3) != 4 )
  {
    return 0;
  }
  result = 1;
  v7 = KeyValueInformation[*((unsigned int *)KeyValueInformation + 2)];
  if ( v7 > 8 )
    v7 = 8;
  *a3 = v7;
  return result;
}
