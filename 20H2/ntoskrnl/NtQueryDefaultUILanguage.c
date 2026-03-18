/*
 * XREFs of NtQueryDefaultUILanguage @ 0x14078AF30
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1406D5840 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall NtQueryDefaultUILanguage(_WORD *a1)
{
  return NtQueryInstallUILanguage(a1);
}
