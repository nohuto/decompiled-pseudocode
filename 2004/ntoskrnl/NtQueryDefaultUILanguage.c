/*
 * XREFs of NtQueryDefaultUILanguage @ 0x14077C930
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1407021E0 (NtQueryInstallUILanguage.c)
 */

NTSTATUS __cdecl NtQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  return NtQueryInstallUILanguage(DefaultUILanguageId);
}
