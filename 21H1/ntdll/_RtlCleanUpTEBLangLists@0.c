/*
 * XREFs of _RtlCleanUpTEBLangLists@0 @ 0x4B2EBCA0
 * Callers:
 *     _RtlpCleanupRegistryKeys@0 @ 0x4B353540 (_RtlpCleanupRegistryKeys@0.c)
 * Callees:
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 *     _LdrpCleanUpTebData@0 @ 0x4B2EBD07 (_LdrpCleanUpTebData@0.c)
 *     _RtlpFreeTebLanguageList@4 @ 0x4B2EBD41 (_RtlpFreeTebLanguageList@4.c)
 */

void RtlCleanUpTEBLangLists(void)
{
  struct _TEB *v0; // ecx
  struct _TEB *v1; // ecx

  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
  v0 = NtCurrentTeb();
  v0->MergedPrefLanguages = 0;
  RtlpFreeTebLanguageList(v0->UserPrefLanguages);
  v1 = NtCurrentTeb();
  v1->UserPrefLanguages = 0;
  RtlpMuiRegFreeLanguageList(v1->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0;
  LdrpCleanUpTebData();
}
