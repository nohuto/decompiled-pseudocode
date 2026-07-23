/*
 * XREFs of NtQueryInstallUILanguage @ 0x1407021E0
 * Callers:
 *     ExpSetPendingUILanguage @ 0x140779C90 (ExpSetPendingUILanguage.c)
 *     NtQueryDefaultUILanguage @ 0x14077C930 (NtQueryDefaultUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14078A300 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14097EE4C (_RtlpMuiRegPopulateBaseLanguages.c)
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
