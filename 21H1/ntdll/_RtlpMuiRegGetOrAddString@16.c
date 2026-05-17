/*
 * XREFs of _RtlpMuiRegGetOrAddString@16 @ 0x4B2AD813
 * Callers:
 *     __RtlpMuiRegValidateInstalled@4 @ 0x4B2AC387 (__RtlpMuiRegValidateInstalled@4.c)
 *     __RtlpMuiRegInitAnyLanguage@16 @ 0x4B2ACA44 (__RtlpMuiRegInitAnyLanguage@16.c)
 *     _RtlpMuiRegGetLanguageSpec@20 @ 0x4B2ACBB5 (_RtlpMuiRegGetLanguageSpec@20.c)
 *     _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76 (_RtlpMuiRegAddMultiSzToLangFallbackList@28.c)
 *     _RtlpLoadPolicyLanguageSpec@16 @ 0x4B36AC26 (_RtlpLoadPolicyLanguageSpec@16.c)
 *     _RtlpMuiRegGetFallbackLanguageInfoByName@20 @ 0x4B36B525 (_RtlpMuiRegGetFallbackLanguageInfoByName@20.c)
 *     __RtlMuiRegAddLIPParent@16 @ 0x4B36C0BB (__RtlMuiRegAddLIPParent@16.c)
 * Callees:
 *     _RtlpMuiRegGetOrAddStringToPool@16 @ 0x4B2D4807 (_RtlpMuiRegGetOrAddStringToPool@16.c)
 *     _RtlpMuiRegGrowStringPool@16 @ 0x4B36B939 (_RtlpMuiRegGrowStringPool@16.c)
 */

int __fastcall RtlpMuiRegGetOrAddString(_DWORD *a1, _WORD *a2, char a3, _WORD *a4)
{
  int v4; // eax
  int v6; // ebx
  int v7; // eax
  int v9; // eax
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  LOWORD(v4) = -1;
  if ( !a1 )
    goto LABEL_11;
  if ( !a2 )
    goto LABEL_11;
  v6 = 0;
  if ( !*a2 )
    goto LABEL_11;
  v7 = *a1 & 2;
  v11 = v7;
  if ( !a3 || (LOBYTE(v12) = 1, !v7) )
    LOBYTE(v12) = 0;
  v4 = (unsigned __int16)RtlpMuiRegGetOrAddStringToPool(v12, &v10);
  v12 = v4;
  if ( (v4 & 0x8000u) != 0 )
  {
    if ( a3 )
    {
      v9 = RtlpMuiRegGrowStringPool(v10, v11 == 0);
      if ( v9 )
      {
        *a1 |= 2u;
        a1[6] = v9;
        LOWORD(v4) = RtlpMuiRegGetOrAddStringToPool(1, 0);
        if ( (v4 & 0x8000u) != 0 )
          v6 = -1073741801;
      }
      else
      {
        LOWORD(v4) = v12;
        v6 = -1073741801;
      }
      goto LABEL_7;
    }
LABEL_11:
    v6 = -1073741811;
  }
LABEL_7:
  if ( a4 )
    *a4 = v4;
  return v6;
}
