/*
 * XREFs of _RtlpLoadUserUIByPolicy@12 @ 0x4B2AD890
 * Callers:
 *     _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC (_RtlpMuiRegLoadPreferredUILanguages@24.c)
 * Callees:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 *     _RtlpMuiRegCreateLanguageList@12 @ 0x4B2D3232 (_RtlpMuiRegCreateLanguageList@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlpLoadPolicyLanguageSpec@16 @ 0x4B36AC26 (_RtlpLoadPolicyLanguageSpec@16.c)
 *     _RtlpMuiRegGrowLanguageList@8 @ 0x4B36B8F3 (_RtlpMuiRegGrowLanguageList@8.c)
 */

int __stdcall RtlpLoadUserUIByPolicy(void *a1, int a2, int *a3)
{
  HANDLE v3; // eax
  int v4; // esi
  int v6; // edi
  int LanguageList; // eax
  unsigned __int8 v8; // [esp+13h] [ebp-2Dh] BYREF
  __int16 v9; // [esp+14h] [ebp-2Ch] BYREF
  HANDLE v10; // [esp+18h] [ebp-28h] BYREF
  HANDLE Handle; // [esp+1Ch] [ebp-24h] BYREF
  UNICODE_STRING DestinationString; // [esp+20h] [ebp-20h] BYREF
  _DWORD v13[6]; // [esp+28h] [ebp-18h] BYREF

  Handle = 0;
  v10 = 0;
  v8 = 0;
  v9 = 0;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    v3 = a1;
    if ( !a1 )
    {
      v4 = OpenGlobalizationUserSettingsKey((void *)0x2000000, (int)&Handle);
      if ( v4 < 0 )
        goto LABEL_5;
      v3 = Handle;
    }
    v13[4] = 0;
    v13[5] = 0;
    v13[1] = v3;
    v13[2] = &DestinationString;
    v13[0] = 24;
    v13[3] = 64;
    v4 = ZwOpenKey(&v10, 131097, v13);
    if ( v4 >= 0 )
    {
      v4 = RtlpLoadPolicyLanguageSpec(&v8, &v9);
      if ( !v4 )
      {
        v6 = *a3;
        if ( *a3 )
        {
          if ( *(_WORD *)(v6 + 4) < *(_WORD *)(v6 + 6) )
          {
LABEL_19:
            *(_WORD *)(6 * *(unsigned __int16 *)(v6 + 4) + *(_DWORD *)(v6 + 16)) = v8;
            *(_WORD *)(6 * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + *(_DWORD *)(*a3 + 16) + 4) = v9;
            goto LABEL_5;
          }
          LanguageList = RtlpMuiRegGrowLanguageList(*a3);
        }
        else
        {
          LanguageList = RtlpMuiRegCreateLanguageList(a2);
        }
        v6 = LanguageList;
        *a3 = LanguageList;
        if ( !LanguageList )
        {
          v4 = -1073741801;
          goto LABEL_5;
        }
        goto LABEL_19;
      }
    }
  }
  else
  {
    v4 = -1073741811;
  }
LABEL_5:
  if ( v10 )
  {
    NtClose(v10);
    v10 = 0;
  }
  if ( Handle )
    NtClose(Handle);
  return v4;
}
