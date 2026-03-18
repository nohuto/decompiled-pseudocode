/*
 * XREFs of NtQueryInstallUILanguage @ 0x1407F4A10
 * Callers:
 *     ExpSetPendingUILanguage @ 0x1407F44F0 (ExpSetPendingUILanguage.c)
 *     NtQueryDefaultUILanguage @ 0x1407F49F0 (NtQueryDefaultUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408303C0 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A36378 (_RtlpMuiRegPopulateBaseLanguages.c)
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
