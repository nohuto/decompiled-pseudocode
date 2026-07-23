/*
 * XREFs of NtQueryDefaultUILanguage @ 0x14077A520
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1406DF450 (NtQueryInstallUILanguage.c)
 */

NTSTATUS __cdecl NtQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  return NtQueryInstallUILanguage(DefaultUILanguageId);
}
