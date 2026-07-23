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
  _DWORD *v7; // edx
  LCID v8; // ecx
  unsigned __int16 *v9; // ecx
  int v10; // eax
  unsigned __int16 v11; // ax
  int v13; // eax
  unsigned __int16 v14; // ax
  int InstalledLanguageIndexByName; // eax
  int v16; // ecx
  __int16 v17; // ax
  size_t v18; // [esp-4h] [ebp-E4h]
  _DWORD *v19; // [esp+10h] [ebp-D0h]
  _UNICODE_STRING String; // [esp+14h] [ebp-CCh] BYREF
  __int16 v21; // [esp+1Ch] [ebp-C4h] BYREF
  DWORD Lcid; // [esp+20h] [ebp-C0h] BYREF
  int v23; // [esp+24h] [ebp-BCh]
  _BYTE v24[180]; // [esp+28h] [ebp-B8h] BYREF

  LODWORD(v18) = 170;
  v21 = 0;
  v23 = a3;
  Lcid = 0;
  memset(v24, 0, v18);
  if ( a2 )
  {
    if ( a4 )
    {
      if ( a5 )
      {
        v6 = v23;
        if ( (unsigned __int16)v23 < *(_WORD *)(a2 + 4) )
        {
          v7 = *(_DWORD **)(a2 + 12);
          v19 = v7;
          if ( !v7 )
          {
            v7 = g_RegInfo;
            v19 = g_RegInfo;
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
              v11 = *(_WORD *)(*(_DWORD *)(v7[5] + 12) + 28 * (__int16)v9[2] + 4);
              *a4 = v11;
              if ( v11 )
              {
LABEL_10:
                *a5 = (*(_QWORD *)(a2 + 24) & (1LL << v23)) == 0;
                return 0;
              }
              v17 = *(_WORD *)(*(_DWORD *)(v7[5] + 12) + 28 * (__int16)v9[2] + 6);
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
              &String,
              (PCWSTR)(*(_DWORD *)(v7[6] + 16) + 2 * *(__int16 *)(*(_DWORD *)(v7[6] + 12) + 2 * v16)));
            if ( RtlCultureNameToLCID(&String, &Lcid) )
            {
              v14 = Lcid;
              goto LABEL_13;
            }
            return -1073741595;
          }
          String.Buffer = (wchar_t *)v24;
          String.MaximumLength = 170;
          if ( !RtlLCIDToCultureName(v8, &String) )
            return -1073741823;
          if ( v19[18] < 0x3E8u )
          {
            InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(v19, String.Buffer, 1, &v21);
          }
          else
          {
            if ( RtlpIsALicensedRegularLanguage(v19, String.Buffer) >= 0 )
              return 0;
            InstalledLanguageIndexByName = RtlpIsALicensedLIPLanguage(v19, String.Buffer);
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
