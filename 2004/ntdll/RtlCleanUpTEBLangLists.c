/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x18006ECC0
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800EF8D0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpFreeTebLanguageList @ 0x18006ED8C (RtlpFreeTebLanguageList.c)
 */

struct _TEB *RtlCleanUpTEBLangLists()
{
  struct _TEB *result; // rax

  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->MergedPrefLanguages);
  NtCurrentTeb()->MergedPrefLanguages = 0LL;
  RtlpFreeTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0LL;
  result = NtCurrentTeb();
  if ( result->ResourceRetValue )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)NtCurrentTeb()->ResourceRetValue);
    result = NtCurrentTeb();
    result->ResourceRetValue = 0LL;
  }
  return result;
}
