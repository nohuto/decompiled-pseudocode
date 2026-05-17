/*
 * XREFs of _RtlpMuiRegGetOrAddLangInfo@12 @ 0x4B2EA745
 * Callers:
 *     __RtlpMuiRegValidateInstalled@4 @ 0x4B2AC387 (__RtlpMuiRegValidateInstalled@4.c)
 *     _RtlpMuiRegAddLanguageByName@24 @ 0x4B2AC9AE (_RtlpMuiRegAddLanguageByName@24.c)
 *     __RtlpMuiRegAddBaseLanguage@20 @ 0x4B36C24C (__RtlpMuiRegAddBaseLanguage@20.c)
 * Callees:
 *     _RtlpMuiRegGetLangInfoIndex@8 @ 0x4B2EA7BD (_RtlpMuiRegGetLangInfoIndex@8.c)
 *     _RtlpMuiRegGrowLanguages@8 @ 0x4B36B916 (_RtlpMuiRegGrowLanguages@8.c)
 */

int __fastcall RtlpMuiRegGetOrAddLangInfo(int *a1, _WORD *a2, __int16 *a3)
{
  int v5; // esi
  __int16 LangInfoIndex; // dx
  int v8; // eax

  if ( !a1 )
    return -1073741811;
  v5 = *a1;
  if ( !*a1 || !a2 || !a2[2] && (__int16)a2[3] < 0 )
    return -1073741811;
  LangInfoIndex = RtlpMuiRegGetLangInfoIndex(*a1);
  if ( LangInfoIndex < 0 )
  {
    if ( *(_WORD *)(v5 + 6) >= *(_WORD *)(v5 + 4) )
    {
      v8 = RtlpMuiRegGrowLanguages(v5);
      v5 = v8;
      if ( !v8 )
        return -1073741801;
      *a1 = v8;
    }
    LangInfoIndex = *(_WORD *)(v5 + 6);
    *(_WORD *)(v5 + 6) = LangInfoIndex + 1;
    qmemcpy((void *)(*(_DWORD *)(v5 + 12) + 28 * LangInfoIndex), a2, 0x1Cu);
  }
  if ( a3 )
    *a3 = LangInfoIndex;
  return 0;
}
