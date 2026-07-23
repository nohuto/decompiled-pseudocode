/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1403F4D30
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1407941D0 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InstallUILanguageId);
}
