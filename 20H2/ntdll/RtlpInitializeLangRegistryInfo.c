/*
 * XREFs of RtlpInitializeLangRegistryInfo @ 0x18006EFD0
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800EF250 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F13E0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006F050 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 */

__int64 __fastcall RtlpInitializeLangRegistryInfo(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !*a1 )
    return RtlpMuiRegCreateAndLoadRegistryInfo(a1);
  return result;
}
