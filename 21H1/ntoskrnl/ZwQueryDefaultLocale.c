/*
 * XREFs of ZwQueryDefaultLocale @ 0x1403F25D0
 * Callers:
 *     NtInitializeNlsFiles @ 0x1406F97C0 (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(UserProfile);
}
