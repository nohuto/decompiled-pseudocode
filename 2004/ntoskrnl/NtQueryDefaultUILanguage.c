/*
 * XREFs of NtQueryDefaultUILanguage @ 0x14077C930
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1407021E0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall NtQueryDefaultUILanguage(_WORD *a1)
{
  return NtQueryInstallUILanguage(a1);
}
