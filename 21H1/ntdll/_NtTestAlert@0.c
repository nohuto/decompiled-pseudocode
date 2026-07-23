/*
 * XREFs of _NtTestAlert@0 @ 0x4B2F4580
 * Callers:
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 *     _KiUserApcExceptionHandler@16 @ 0x4B2F4CF0 (_KiUserApcExceptionHandler@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS NtTestAlert(void)
{
  return Wow64SystemServiceCall();
}
