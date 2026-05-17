/*
 * XREFs of _GetLCIDFromLangListNodeWithLICCheck@20 @ 0x4B2BA710
 * Callers:
 *     _LdrLoadAlternateResourceModule@16 @ 0x4B2AA250 (_LdrLoadAlternateResourceModule@16.c)
 *     _LdrResFallbackLangList@20 @ 0x4B2BA2A0 (_LdrResFallbackLangList@20.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _RtlGetThreadLangIdByIndex@16 @ 0x4B352870 (_RtlGetThreadLangIdByIndex@16.c)
 * Callees:
 *     _RtlpIsALicensedLIPLanguage@8 @ 0x4B2D2C81 (_RtlpIsALicensedLIPLanguage@8.c)
 *     _RtlpIsALicensedRegularLanguage@8 @ 0x4B2D437C (_RtlpIsALicensedRegularLanguage@8.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall GetLCIDFromLangListNodeWithLICCheck(int a1, int a2, int a3, unsigned __int16 *a4, bool *a5)
{
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  unsigned __int16 *v9; // ecx
  int v10; // eax
  unsigned __int16 v11; // ax
  int v13; // eax
  unsigned __int16 v14; // ax
  int InstalledLanguageIndexByName; // eax
  int v16; // ecx
  __int16 v17; // ax
  int v18; // [esp+10h] [ebp-D0h]
  UNICODE_STRING DestinationString; // [esp+14h] [ebp-CCh] BYREF
  __int16 v20; // [esp+1Ch] [ebp-C4h] BYREF
  int v21; // [esp+20h] [ebp-C0h] BYREF
  int v22; // [esp+24h] [ebp-BCh]
  _BYTE v23[180]; // [esp+28h] [ebp-B8h] BYREF

  v20 = 0;
  v22 = a3;
  v21 = 0;
  memset(v23, 0, 0xAAu);
  if ( a2 )
  {
    if ( a4 )
    {
      if ( a5 )
      {
        v6 = v22;
        if ( (unsigned __int16)v22 < *(_WORD *)(a2 + 4) )
        {
          v7 = *(_DWORD *)(a2 + 12);
          v18 = v7;
          if ( !v7 )
          {
            v7 = g_RegInfo;
            v18 = g_RegInfo;
          }
          *a5 = 0;
          v8 = *a4;
          if ( !(_WORD)v8 )
          {
            *a4 = 0;
            v9 = (unsigned __int16 *)(*(_DWORD *)(a2 + 16) + 6 * v6);
            v10 = *v9;
            if ( v10 == 2 )
            {
              v11 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 20) + 12) + 28 * (__int16)v9[2] + 4);
              *a4 = v11;
              if ( v11 )
              {
LABEL_10:
                *a5 = (*(_QWORD *)(a2 + 24) & (1LL << v22)) == 0;
                return 0;
              }
              v17 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 20) + 12) + 28 * (__int16)v9[2] + 6);
              if ( v17 <= 0 )
                return -1073741595;
              v16 = v17;
            }
            else
            {
              v13 = v10 - 1;
              if ( !v13 )
              {
                v14 = v9[2];
LABEL_13:
                *a4 = v14;
                goto LABEL_10;
              }
              if ( v13 != 2 )
                return -1073741595;
              v16 = (__int16)v9[2];
            }
            RtlInitUnicodeString(
              &DestinationString,
              (PCWSTR)(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 16)
                     + 2 * *(__int16 *)(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 12) + 2 * v16)));
            if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v21) )
            {
              v14 = v21;
              goto LABEL_13;
            }
            return -1073741595;
          }
          DestinationString.Buffer = (wchar_t *)v23;
          DestinationString.MaximumLength = 170;
          if ( !(unsigned __int8)RtlLCIDToCultureName(v8, &DestinationString) )
            return -1073741823;
          if ( *(_DWORD *)(v18 + 72) < 0x3E8u )
          {
            InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(
                                             v18,
                                             DestinationString.Buffer,
                                             1,
                                             &v20);
          }
          else
          {
            if ( RtlpIsALicensedRegularLanguage(v18, DestinationString.Buffer) >= 0 )
              return 0;
            InstalledLanguageIndexByName = RtlpIsALicensedLIPLanguage(v18, DestinationString.Buffer);
          }
          if ( InstalledLanguageIndexByName < 0 )
            *a5 = 1;
          return 0;
        }
      }
    }
  }
  return -1073741811;
}
