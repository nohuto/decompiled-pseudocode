/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1403FAB90
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1407A32B0 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InstallUILanguageId);
}
