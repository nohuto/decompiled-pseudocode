/*
 * XREFs of NtQueryInstallUILanguage @ 0x1406D5840
 * Callers:
 *     ExpSetPendingUILanguage @ 0x140788290 (ExpSetPendingUILanguage.c)
 *     NtQueryDefaultUILanguage @ 0x14078AF30 (NtQueryDefaultUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1407A3610 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140984C1C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInstallUILanguage(LANGID *InstallUILanguageId)
{
  __int64 v2; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)InstallUILanguageId < 0x7FFFFFFF0000LL )
      v2 = (__int64)InstallUILanguageId;
    *(_WORD *)v2 = *(_WORD *)v2;
  }
  *InstallUILanguageId = PsInstallUILanguageId;
  return 0;
}
