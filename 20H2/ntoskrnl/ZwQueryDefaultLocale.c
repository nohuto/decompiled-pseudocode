/*
 * XREFs of ZwQueryDefaultLocale @ 0x1403F8410
 * Callers:
 *     NtInitializeNlsFiles @ 0x1406ACCE0 (NtInitializeNlsFiles.c)
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
