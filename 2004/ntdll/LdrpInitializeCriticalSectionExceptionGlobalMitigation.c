/*
 * XREFs of LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800D0E2C
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D0EEC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 */

void LdrpInitializeCriticalSectionExceptionGlobalMitigation()
{
  int ValueKey; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-78h]
  int v2; // [rsp+44h] [rbp-64h]
  int v3; // [rsp+48h] [rbp-60h]
  int v4; // [rsp+4Ch] [rbp-5Ch]

  if ( LdrpIsSecureProcess
    || (RtlpRaiseExceptionOnPossibleDeadlock = 0, (int)NtOpenKey() >= 0)
    && (ValueKey = NtQueryValueKey(), NtClose(Handle), ValueKey >= 0)
    && v2 == 4
    && v3 == 4
    && v4 )
  {
    RtlpRaiseExceptionOnPossibleDeadlock = 1;
  }
}
