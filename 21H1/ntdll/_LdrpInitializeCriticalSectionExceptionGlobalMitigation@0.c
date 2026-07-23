/*
 * XREFs of _LdrpInitializeCriticalSectionExceptionGlobalMitigation@0 @ 0x4B331E35
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

void __stdcall LdrpInitializeCriticalSectionExceptionGlobalMitigation()
{
  NTSTATUS v0; // esi
  ULONG ResultLength; // [esp+0h] [ebp-5Ch] BYREF
  HANDLE KeyHandle; // [esp+4h] [ebp-58h] BYREF
  _BYTE KeyValueInformation[4]; // [esp+8h] [ebp-54h] BYREF
  int v4; // [esp+Ch] [ebp-50h]
  int v5; // [esp+10h] [ebp-4Ch]
  int v6; // [esp+14h] [ebp-48h]

  if ( LdrpIsSecureProcess
    || (RtlpRaiseExceptionOnPossibleDeadlock = 0, ZwOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_4B281A48) >= 0)
    && (v0 = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_4B281A28,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x50u,
               &ResultLength),
        NtClose(KeyHandle),
        v0 >= 0)
    && v4 == 4
    && v5 == 4
    && v6 )
  {
    RtlpRaiseExceptionOnPossibleDeadlock = 1;
  }
}
