/*
 * XREFs of _RtlpMuiRegCreateLanguageConfigList@4 @ 0x4B2ADA68
 * Callers:
 *     _RtlpLoadLanguageConfigList@12 @ 0x4B2ACFED (_RtlpLoadLanguageConfigList@12.c)
 *     _RtlpPopulateLanguageConfigList@12 @ 0x4B2AD962 (_RtlpPopulateLanguageConfigList@12.c)
 *     _RtlpMuiRegDupLanguageConfigList@8 @ 0x4B36B18D (_RtlpMuiRegDupLanguageConfigList@8.c)
 * Callees:
 *     _SafeAllocBlob @ 0x4B2D3295 (_SafeAllocBlob.c)
 */

int __fastcall RtlpMuiRegCreateLanguageConfigList(int a1)
{
  __int16 v1; // si
  int result; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  v1 = a1;
  if ( a1 < 1 )
    v1 = 4;
  result = SafeAllocBlob(12, 0, 0, &v3);
  if ( result )
  {
    *(_DWORD *)result = v3;
    *(_WORD *)(result + 4) = 0;
    *(_WORD *)(result + 6) = v1;
    *(_DWORD *)(result + 8) = result + 12;
  }
  return result;
}
