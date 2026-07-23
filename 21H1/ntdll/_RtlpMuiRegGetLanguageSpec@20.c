/*
 * XREFs of _RtlpMuiRegGetLanguageSpec@20 @ 0x4B2ACBB5
 * Callers:
 *     __RtlpMuiRegAddNeutralLanguage@12 @ 0x4B2ACADE (__RtlpMuiRegAddNeutralLanguage@12.c)
 *     _RtlpPopulateLanguageConfigList@12 @ 0x4B2AD962 (_RtlpPopulateLanguageConfigList@12.c)
 *     __RtlpMuiRegAddBaseLanguage@20 @ 0x4B36C24C (__RtlpMuiRegAddBaseLanguage@20.c)
 * Callees:
 *     _RtlpMuiRegGetOrAddString@16 @ 0x4B2AD813 (_RtlpMuiRegGetOrAddString@16.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall RtlpMuiRegGetLanguageSpec(int a1, const WCHAR *a2, char *a3, int a4, _WORD *a5)
{
  __int16 v5; // si
  char v6; // bl
  int result; // eax
  _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-18h] BYREF
  int v9; // [esp+14h] [ebp-10h]
  DWORD Lcid; // [esp+18h] [ebp-Ch] BYREF
  _WORD v11[4]; // [esp+1Ch] [ebp-8h] BYREF

  v9 = a1;
  v5 = 0;
  v11[0] = 0;
  v6 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
  {
    v5 = Lcid;
    if ( Lcid != 4096 && Lcid != 5120 )
    {
      v6 = 1;
LABEL_5:
      result = 0;
      goto LABEL_6;
    }
    result = RtlpMuiRegGetOrAddString(1, v11);
    if ( result >= 0 )
    {
      v5 = v11[0];
      v6 = 3;
      goto LABEL_5;
    }
    v5 = 0;
  }
  else
  {
    result = -1073741811;
  }
LABEL_6:
  if ( a3 )
    *a3 = v6;
  if ( a5 )
    *a5 = v5;
  return result;
}
