/*
 * XREFs of _RtlpMuiRegGetInstalledLanguageIndex@16 @ 0x4B2D4EAF
 * Callers:
 *     _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76 (_RtlpMuiRegAddMultiSzToLangFallbackList@28.c)
 *     _RtlpLoadPolicyLanguageSpec@16 @ 0x4B36AC26 (_RtlpLoadPolicyLanguageSpec@16.c)
 *     _RtlpMuiRegConfigMatchesInstalled@28 @ 0x4B36AEFF (_RtlpMuiRegConfigMatchesInstalled@28.c)
 *     _RtlpMuiRegValidateConfigNode@8 @ 0x4B36BE8D (_RtlpMuiRegValidateConfigNode@8.c)
 * Callees:
 *     _RtlpMuiRegGetInstalledLanguageIndexByLangId@16 @ 0x4B2D4FD4 (_RtlpMuiRegGetInstalledLanguageIndexByLangId@16.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall RtlpMuiRegGetInstalledLanguageIndex(int a1, int a2, __int16 a3, __int16 *a4)
{
  int v6; // edx
  int v7; // ebx
  __int16 v8; // dx
  signed int v10; // ecx
  __int16 *v11; // edx
  __int16 v12; // ax
  int v13; // edx
  const WCHAR *v14; // eax
  int v15; // [esp+Ch] [ebp-14h]
  DWORD Lcid; // [esp+10h] [ebp-10h] BYREF
  _UNICODE_STRING DestinationString; // [esp+14h] [ebp-Ch] BYREF
  int v18; // [esp+1Ch] [ebp-4h]

  LOBYTE(v18) = 1;
  if ( !a1 )
    return -1073741811;
  v6 = *(_DWORD *)(a1 + 20);
  v7 = 0;
  v15 = v6;
  if ( a2 != 3 )
  {
    v8 = a3;
    goto LABEL_4;
  }
  v10 = 0;
  Lcid = *(unsigned __int16 *)(v6 + 6);
  if ( !Lcid )
  {
LABEL_15:
    v13 = *(_DWORD *)(a1 + 24);
    if ( v13 && a3 >= 0 && a3 < (int)*(unsigned __int16 *)(v13 + 6) )
      v14 = (const WCHAR *)(*(_DWORD *)(v13 + 16) + 2 * *(__int16 *)(*(_DWORD *)(v13 + 12) + 2 * a3));
    else
      v14 = 0;
    if ( !v14 )
      return -1073741772;
    RtlInitUnicodeString(&DestinationString, v14);
    if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      return -1073741772;
    v8 = Lcid;
    a2 = 1;
    LOBYTE(v18) = 0;
LABEL_4:
    if ( a2 == 1 )
      return RtlpMuiRegGetInstalledLanguageIndexByLangId(v18, a4);
    if ( a2 == 2 )
    {
      if ( v8 > 0 && v8 < (int)*(unsigned __int16 *)(v15 + 6) )
      {
        if ( a4 )
          *a4 = v8;
        return v7;
      }
      return -1073741811;
    }
    return -1073741772;
  }
  v11 = *(__int16 **)(v6 + 12);
  while ( 1 )
  {
    v12 = *v11;
    DestinationString.Buffer = (wchar_t *)4128;
    if ( (v12 & 0x1020) == 0x20 && v11[3] == a3 && a4 )
      break;
    ++v10;
    v11 += 14;
    if ( v10 >= (int)Lcid )
      goto LABEL_15;
  }
  *a4 = v10;
  return v7;
}
