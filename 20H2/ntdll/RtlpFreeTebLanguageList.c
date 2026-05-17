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

__int64 __fastcall RtlpFreeTebLanguageList(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
      RtlpMuiRegFreeLanguageList(v2);
    if ( a1[1] )
      RtlpMuiRegFreeStringPool();
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
  }
  return result;
}
