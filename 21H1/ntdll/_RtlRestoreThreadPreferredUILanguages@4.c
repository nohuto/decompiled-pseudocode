/*
 * XREFs of _RtlRestoreThreadPreferredUILanguages@4 @ 0x4B352D50
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 *     _RtlpFreeTebLanguageList@4 @ 0x4B2EBD41 (_RtlpFreeTebLanguageList@4.c)
 *     _RtlReportCriticalFailure@12 @ 0x4B3669C7 (_RtlReportCriticalFailure@12.c)
 */

int __stdcall RtlRestoreThreadPreferredUILanguages(void **a1)
{
  struct _PEB *v1; // eax

  if ( a1[3] != NtCurrentTeb()->ClientId.UniqueThread )
    RtlReportCriticalFailure(1);
  RtlpMuiRegFreeLanguageList((_BYTE *)NtCurrentTeb()->PreferredLanguages);
  RtlpMuiRegFreeLanguageList((_BYTE *)NtCurrentTeb()->MergedPrefLanguages);
  RtlpFreeTebLanguageList((_DWORD *)NtCurrentTeb()->UserPrefLanguages);
  NtCurrentTeb()->PreferredLanguages = *a1;
  NtCurrentTeb()->MergedPrefLanguages = a1[1];
  NtCurrentTeb()->UserPrefLanguages = a1[2];
  v1 = NtCurrentPeb();
  a1[3] = 0;
  return RtlFreeHeap((int)v1->ProcessHeap, 0, (int)a1);
}
