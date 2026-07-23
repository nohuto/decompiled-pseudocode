/*
 * XREFs of ZwQueryDefaultLocale @ 0x1403F3860
 * Callers:
 *     NtInitializeNlsFiles @ 0x14065CEE0 (NtInitializeNlsFiles.c)
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
