/*
 * XREFs of NtQueryDefaultUILanguage @ 0x14078ED00
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1406B3620 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall NtQueryDefaultUILanguage(_WORD *a1)
{
  return NtQueryInstallUILanguage(a1);
}
