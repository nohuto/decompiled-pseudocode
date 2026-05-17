/*
 * XREFs of _MuiRegAllocArray @ 0x18003B244
 * Callers:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003B104 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18007064C (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008C2C8 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180104320 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1801052E0 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180107458 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 */

__int64 __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  result = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v3 )
      return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v3);
  }
  return result;
}
