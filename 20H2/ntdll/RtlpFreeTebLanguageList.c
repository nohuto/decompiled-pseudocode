/*
 * XREFs of RtlpFreeTebLanguageList @ 0x18006EE8C
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x18003EC40 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlCleanUpTEBLangLists @ 0x18006EDC0 (RtlCleanUpTEBLangLists.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800EF6D0 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlpDupTebLanguageList @ 0x1800F06F8 (RtlpDupTebLanguageList.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegFreeStringPool @ 0x18006F910 (RtlpMuiRegFreeStringPool.c)
 */

LOGICAL __fastcall RtlpFreeTebLanguageList(void **a1)
{
  void *v2; // rcx
  void *v3; // rcx
  LOGICAL result; // eax

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
      RtlpMuiRegFreeLanguageList(v2);
    v3 = a1[1];
    if ( v3 )
      RtlpMuiRegFreeStringPool(v3);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
