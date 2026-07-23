/*
 * XREFs of _RtlpTestHookInitialize@12 @ 0x4B2B1220
 * Callers:
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

LOGICAL __stdcall RtlpTestHookInitialize(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  ULONG ResultLength; // [esp+8h] [ebp-44h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-40h] BYREF
  HANDLE KeyHandle; // [esp+24h] [ebp-28h] BYREF
  _DWORD KeyValueInformation[7]; // [esp+28h] [ebp-24h] BYREF

  ObjectAttributes.Length = 24;
  ObjectAttributes.Attributes = 64;
  memset(KeyValueInformation, 0, 0x18u);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&dword_4B281078;
  KeyHandle = 0;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes) >= 0
    && ZwQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&ValueName,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x18u,
         &ResultLength) >= 0 )
  {
    RtlpUserPolicies = KeyValueInformation[3];
    dword_4B3A697C = KeyValueInformation[4];
    if ( LOBYTE(KeyValueInformation[3]) && LOBYTE(KeyValueInformation[3]) != 10 )
      LOBYTE(RtlpUserPolicies) = LOBYTE(KeyValueInformation[3]) != 20 ? 0 : RtlpUserPolicies;
    if ( BYTE1(RtlpUserPolicies) && BYTE1(RtlpUserPolicies) != 10 )
      BYTE1(RtlpUserPolicies) &= (BYTE1(RtlpUserPolicies) != 20) - 1;
    if ( BYTE2(RtlpUserPolicies)
      && BYTE2(RtlpUserPolicies) != 20
      && BYTE2(RtlpUserPolicies) != 15
      && BYTE2(RtlpUserPolicies) != 10 )
    {
      BYTE2(RtlpUserPolicies) &= (BYTE2(RtlpUserPolicies) != 5) - 1;
    }
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return 0;
}
