/*
 * XREFs of _NtSetDefaultLocale@8 @ 0x4B2F4260
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtSetDefaultLocale(BOOLEAN UserProfile, LCID DefaultLocaleId)
{
  return Wow64SystemServiceCall();
}
