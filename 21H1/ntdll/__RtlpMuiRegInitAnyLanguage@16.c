/*
 * XREFs of __RtlpMuiRegInitAnyLanguage@16 @ 0x4B2ACA44
 * Callers:
 *     _RtlpMuiRegAddLanguageByName@24 @ 0x4B2AC9AE (_RtlpMuiRegAddLanguageByName@24.c)
 *     __RtlpMuiRegAddBaseLanguage@20 @ 0x4B36C24C (__RtlpMuiRegAddBaseLanguage@20.c)
 * Callees:
 *     __RtlpMuiRegAddNeutralLanguage@12 @ 0x4B2ACADE (__RtlpMuiRegAddNeutralLanguage@12.c)
 *     _RtlpMuiRegGetOrAddString@16 @ 0x4B2AD813 (_RtlpMuiRegGetOrAddString@16.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall _RtlpMuiRegInitAnyLanguage(int a1, int a2, PCWSTR SourceString, __int16 a4)
{
  int v5; // edi
  __int16 v6; // cx
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-10h] BYREF
  DWORD Lcid; // [esp+18h] [ebp-8h] BYREF
  __int16 v10; // [esp+1Ch] [ebp-4h] BYREF

  v10 = -1;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
    return -1073020924;
  v5 = RtlpMuiRegGetOrAddString(1, &v10);
  if ( v5 >= 0 )
  {
    v6 = Lcid;
    *(_WORD *)(a2 + 2) = 0;
    *(_WORD *)(a2 + 6) = v10;
    *(_WORD *)a2 = a4;
    *(_WORD *)(a2 + 4) = v6;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 16) = 0;
    *(_DWORD *)(a2 + 20) = 0;
    *(_DWORD *)(a2 + 24) = 0;
    if ( (a4 & 0x2000) == 0 )
      _RtlpMuiRegAddNeutralLanguage(SourceString);
  }
  return v5;
}
