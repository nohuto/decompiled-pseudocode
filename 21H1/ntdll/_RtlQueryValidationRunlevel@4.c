/*
 * XREFs of _RtlQueryValidationRunlevel@4 @ 0x4B369B90
 * Callers:
 *     <none>
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

ULONG __cdecl RtlQueryValidationRunlevel(PUNICODE_STRING ComponentName)
{
  int v1; // esi
  int v2; // edi
  ULONG ResultLength; // [esp+Ch] [ebp-20h] BYREF
  HANDLE KeyHandle; // [esp+10h] [ebp-1Ch] BYREF
  _BYTE KeyValueInformation[4]; // [esp+14h] [ebp-18h] BYREF
  int v7; // [esp+18h] [ebp-14h]
  int v8; // [esp+1Ch] [ebp-10h]
  int v9; // [esp+20h] [ebp-Ch]

  v1 = MEMORY[0x7FFE0258];
  v2 = 0;
  if ( ComponentName && MEMORY[0x7FFE0258] != -1 && ZwOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_4B281DD0) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           ComponentName,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v7 == 4
      && v8 == 4 )
    {
      v2 = v9;
    }
    NtClose(KeyHandle);
  }
  return v2 | v1;
}
