/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1403F5FC0
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x140789FA0 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InstallUILanguageId);
}
