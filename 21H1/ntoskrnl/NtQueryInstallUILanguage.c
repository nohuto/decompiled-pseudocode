/*
 * XREFs of NtQueryInstallUILanguage @ 0x1406DF450
 * Callers:
 *     ExpSetPendingUILanguage @ 0x140777880 (ExpSetPendingUILanguage.c)
 *     NtQueryDefaultUILanguage @ 0x14077A520 (NtQueryDefaultUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140794530 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14097DAAC (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtQueryInstallUILanguage(_WORD *a1)
{
  __int64 v2; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v2 = (__int64)a1;
    *(_WORD *)v2 = *(_WORD *)v2;
  }
  *a1 = PsInstallUILanguageId;
  return 0LL;
}
