/*
 * XREFs of _RtlpMuiRegCreateLanguageList@12 @ 0x4B2D3232
 * Callers:
 *     _RtlpLoadMachineUIByPolicy@12 @ 0x4B2A71E0 (_RtlpLoadMachineUIByPolicy@12.c)
 *     _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC (_RtlpMuiRegLoadPreferredUILanguages@24.c)
 *     _RtlpLoadUserUIByPolicy@12 @ 0x4B2AD890 (_RtlpLoadUserUIByPolicy@12.c)
 *     _LdrpCreateLangFallbackList@16 @ 0x4B2D2D36 (_LdrpCreateLangFallbackList@16.c)
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlpSetProcUserMachineLangList@8 @ 0x4B2D3D47 (_RtlpSetProcUserMachineLangList@8.c)
 *     _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76 (_RtlpMuiRegAddMultiSzToLangFallbackList@28.c)
 *     _RtlpMuiRegDupLanguageList@8 @ 0x4B2D5E04 (_RtlpMuiRegDupLanguageList@8.c)
 *     _InitializeUserOrMachineLangList@20 @ 0x4B2E98CF (_InitializeUserOrMachineLangList@20.c)
 * Callees:
 *     _SafeAllocBlob @ 0x4B2D3295 (_SafeAllocBlob.c)
 */

int __fastcall RtlpMuiRegCreateLanguageList(int a1, char a2, int a3)
{
  __int16 v3; // si
  int result; // eax
  int v6; // [esp+10h] [ebp-4h] BYREF

  v3 = a1;
  v6 = 0;
  if ( a1 < 1 )
    v3 = 4;
  result = SafeAllocBlob(6, 0, 0, &v6);
  if ( !result )
    return 0;
  *(_DWORD *)result = v6;
  *(_WORD *)(result + 4) = 0;
  *(_DWORD *)(result + 16) = result + 56;
  *(_DWORD *)(result + 12) = a3;
  *(_WORD *)(result + 6) = v3;
  *(_BYTE *)(result + 8) = a2;
  *(_DWORD *)(result + 32) = 0;
  return result;
}
