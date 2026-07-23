/*
 * XREFs of NtQueryDefaultUILanguage @ 0x14078AF30
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1406D5840 (NtQueryInstallUILanguage.c)
 */

NTSTATUS __cdecl NtQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  return NtQueryInstallUILanguage(DefaultUILanguageId);
}
