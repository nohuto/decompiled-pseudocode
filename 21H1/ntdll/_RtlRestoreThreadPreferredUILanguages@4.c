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

LOGICAL __stdcall RtlRestoreThreadPreferredUILanguages(PVOID BaseAddress)
{
  struct _PEB *v1; // eax

  if ( (void *)*((_DWORD *)BaseAddress + 3) != NtCurrentTeb()->ClientId.UniqueThread )
    RtlReportCriticalFailure(1);
  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
  RtlpFreeTebLanguageList((PVOID *)NtCurrentTeb()->UserPrefLanguages);
  NtCurrentTeb()->PreferredLanguages = *(void **)BaseAddress;
  NtCurrentTeb()->MergedPrefLanguages = (void *)*((_DWORD *)BaseAddress + 1);
  NtCurrentTeb()->UserPrefLanguages = (void *)*((_DWORD *)BaseAddress + 2);
  v1 = NtCurrentPeb();
  *((_DWORD *)BaseAddress + 3) = 0;
  return RtlFreeHeap(v1->ProcessHeap, 0, BaseAddress);
}
