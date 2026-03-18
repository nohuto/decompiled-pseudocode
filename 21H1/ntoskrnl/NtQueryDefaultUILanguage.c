/*
 * XREFs of NtQueryDefaultUILanguage @ 0x14077A520
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1406DF450 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall NtQueryDefaultUILanguage(_WORD *a1)
{
  return NtQueryInstallUILanguage(a1);
}
