/*
 * XREFs of _RtlpMuiRegGrowLanguageConfigList@8 @ 0x4B36B8D0
 * Callers:
 *     _RtlpMuiRegConfigListAddLanguage@12 @ 0x4B36ADDD (_RtlpMuiRegConfigListAddLanguage@12.c)
 * Callees:
 *     _RtlpMuiRegResizeLanguageConfigList@8 @ 0x4B36BCBB (_RtlpMuiRegResizeLanguageConfigList@8.c)
 */

int __fastcall RtlpMuiRegGrowLanguageConfigList(int a1)
{
  unsigned int v1; // edx

  if ( !a1 )
    return 0;
  v1 = *(unsigned __int16 *)(a1 + 4) + 1;
  if ( v1 >= *(unsigned __int16 *)(a1 + 6) )
    return RtlpMuiRegResizeLanguageConfigList(a1, v1);
  return a1;
}
