/*
 * XREFs of _RtlGetUserPreferredUILanguages@20 @ 0x4B2AA700
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpCreateLangFallbackList@16 @ 0x4B2D2D36 (_LdrpCreateLangFallbackList@16.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 *     _LdrpConvertLangFallbackListToMultiSz@28 @ 0x4B2D3319 (_LdrpConvertLangFallbackListToMultiSz@28.c)
 *     _InitializeTEBUserLangList@8 @ 0x4B2D3E35 (_InitializeTEBUserLangList@8.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _LdrpMergeLangFallbackLists@36 @ 0x4B2D4925 (_LdrpMergeLangFallbackLists@36.c)
 *     _LdrpMergeParentBaseLanguagesToList@20 @ 0x4B3516E9 (_LdrpMergeParentBaseLanguagesToList@20.c)
 *     _RtlGetSystemPreferredUILanguages@20 @ 0x4B352400 (_RtlGetSystemPreferredUILanguages@20.c)
 *     _RtlIsValidLocaleName@8 @ 0x4B3630F0 (_RtlIsValidLocaleName@8.c)
 */

int __stdcall RtlGetUserPreferredUILanguages(int a1, PCWSTR SourceString, int *a3, int *a4, _DWORD *a5)
{
  _DWORD *v5; // edi
  int v6; // ebx
  int v7; // eax
  int result; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  int LangFallbackList; // eax
  int SystemPreferredUILanguages; // esi
  char v14; // dl
  int v16; // eax
  int v17; // ecx
  unsigned __int16 *v18; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  unsigned int v22; // eax
  int v23; // ecx
  char v24; // bl
  _DWORD *v25; // edi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _BYTE *v29; // ecx
  int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  int v33; // eax
  bool v34; // [esp+Fh] [ebp-39h]
  unsigned int v35; // [esp+10h] [ebp-38h] BYREF
  int v36; // [esp+14h] [ebp-34h] BYREF
  _DWORD *v37; // [esp+18h] [ebp-30h] BYREF
  int v38; // [esp+1Ch] [ebp-2Ch]
  int v39; // [esp+20h] [ebp-28h]
  int v40; // [esp+24h] [ebp-24h] BYREF
  int v41; // [esp+28h] [ebp-20h]
  int v42; // [esp+2Ch] [ebp-1Ch]
  int v43; // [esp+30h] [ebp-18h]
  int v44; // [esp+34h] [ebp-14h]
  int v45; // [esp+38h] [ebp-10h]
  int v46; // [esp+3Ch] [ebp-Ch]
  int v47; // [esp+44h] [ebp-4h]

  v5 = a5;
  v36 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  LOWORD(v35) = -1;
  v37 = 0;
  v34 = 0;
  if ( a5 )
    v41 = *a5;
  v45 = 2;
  if ( SourceString )
  {
    v6 = 4104;
    v43 = 4104;
    v34 = (a1 & 0x80) != 0;
    if ( !(unsigned __int8)RtlIsValidLocaleName(SourceString, 2) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( !a5 )
        goto LABEL_40;
      goto LABEL_44;
    }
  }
  else
  {
    v6 = a1;
    v43 = a1;
  }
  if ( (v6 & 0xFFFF6771) != 0 )
    return -1073741811;
  if ( (v6 & 0x9880) == 0 )
  {
    v6 |= 0x80u;
    v43 = v6;
  }
  if ( (v6 & 0xC) == 0xC )
    return -1073741811;
  if ( (v6 & 0xC) == 0 )
  {
    v6 |= 8u;
    v43 = v6;
  }
  LOBYTE(v42) = (v6 & 2) == 0;
  v7 = v6 & 0x9880;
  if ( (v6 & 0x9880) == 0 )
  {
    v6 |= 0x8000u;
    v7 = 0x8000;
    v43 = v6;
  }
  if ( v7 != 128 && v7 != 2048 && v7 != 4096 && v7 != 0x8000 || !a5 || *a5 && !a4 )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v37);
  if ( result >= 0 )
  {
    if ( !SourceString || RtlpMuiRegGetInstalledLanguageIndexByName(v37, SourceString, 1, &v35) >= 0 )
    {
      LOBYTE(v9) = v6 & 1;
      InitializeTEBUserLangList(v9, v37);
      v10 = *(_DWORD *)NtCurrentTeb()->UserPrefLanguages;
      v38 = v10;
      if ( *((_DWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
        v11 = *((_DWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
      else
        v11 = v37[8];
      v44 = v11;
      if ( (v6 & 0x800) != 0 )
      {
        if ( !v10
          || ((*a5 = v41,
               SystemPreferredUILanguages = LdrpConvertLangFallbackListToMultiSz(a4, a5, v6, v42, &v40),
               SystemPreferredUILanguages < 0)
           || !*(_WORD *)(v38 + 4))
          && SystemPreferredUILanguages != -1073741789 )
        {
          *a5 = v41;
          SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                         4 * ((v6 & 8) != 0) + 2052,
                                         SourceString,
                                         (int)&v40,
                                         (int)a4,
                                         (int)a5);
        }
        goto LABEL_32;
      }
      LangFallbackList = LdrpCreateLangFallbackList(25, 0);
      SystemPreferredUILanguages = LangFallbackList;
      if ( (v6 & 0x8080) != 0 )
      {
        if ( LangFallbackList < 0 )
          goto LABEL_28;
        if ( v36 )
        {
          SystemPreferredUILanguages = LdrpMergeLangFallbackLists(&v36, 0, 0, v38, v37[9], v44, 1);
          if ( SystemPreferredUILanguages >= 0 )
          {
            v14 = v42;
            *a5 = v41;
            SystemPreferredUILanguages = LdrpConvertLangFallbackListToMultiSz(a4, a5, v6, v14, &v40);
            if ( (SystemPreferredUILanguages < 0 || !*(_WORD *)(v36 + 4)) && SystemPreferredUILanguages != -1073741789 )
            {
              *a5 = v41;
              v33 = RtlGetSystemPreferredUILanguages(
                      (4 * ((v6 & 8) != 0) + 4) | 0x8000,
                      SourceString,
                      (int)&v40,
                      (int)a4,
                      (int)a5);
LABEL_93:
              SystemPreferredUILanguages = v33;
            }
          }
          goto LABEL_28;
        }
        goto LABEL_32;
      }
      if ( LangFallbackList < 0 )
        goto LABEL_28;
      if ( !v36 )
        goto LABEL_32;
      SystemPreferredUILanguages = LdrpMergeLangFallbackLists(&v36, 0, 0, v38, 0, v44, 0);
      if ( SystemPreferredUILanguages < 0 )
        goto LABEL_28;
      SystemPreferredUILanguages = LdrpCreateLangFallbackList(25, 0);
      if ( SystemPreferredUILanguages < 0 || !v39 )
        goto LABEL_28;
      LOBYTE(v38) = v42;
      if ( SourceString )
      {
        if ( (_WORD)v35 != 0xFFFF )
        {
          v17 = v37[5];
          LOBYTE(v38) = v42;
          v18 = (unsigned __int16 *)(*(_DWORD *)(v17 + 12) + 28 * (__int16)v35);
          if ( v18 )
          {
            v19 = *v18;
            if ( (v19 & 2) != 0 || (LOBYTE(v38) = v42, v34) && (LOBYTE(v38) = v42, (v19 & 4) != 0) )
              LOBYTE(v38) = 0;
            if ( *(_BYTE *)(v39 + 8) )
              v20 = v37[7];
            else
              v20 = v44;
            LdrpMergeParentBaseLanguagesToList(v37, v20, v19);
          }
        }
        goto LABEL_90;
      }
      v21 = v36;
      v22 = 0;
      v23 = 0;
      v35 = 0;
      if ( !*(_WORD *)(v36 + 4) )
        goto LABEL_87;
      v24 = v42;
      v25 = v37;
      LOBYTE(v38) = v42;
      v42 = 0;
      while ( 1 )
      {
        v26 = *(_DWORD *)(v21 + 16);
        v46 = 0;
        v27 = *(unsigned __int16 *)(v23 + v26);
        v47 = v27;
        if ( (_WORD)v27 )
        {
          if ( (_WORD)v27 == (_WORD)v45 )
          {
            v28 = *(__int16 *)(v42 + *(_DWORD *)(v21 + 16) + 4);
            v21 = v36;
            v23 = v42;
            v24 = (*(_BYTE *)(28 * v28 + *(_DWORD *)(v25[5] + 12)) & 2) == 0 ? v24 : 0;
            LOBYTE(v38) = v24;
            if ( (_WORD)v47 == (_WORD)v45 )
            {
              v29 = (_BYTE *)(*(_DWORD *)(v25[5] + 12) + 28 * *(__int16 *)(v42 + *(_DWORD *)(v36 + 16) + 4));
              if ( (*v29 & 6) != 0 )
              {
                v30 = *(_BYTE *)(v39 + 8) ? v25[7] : v44;
                v31 = LdrpMergeParentBaseLanguagesToList(v25, v30, v29);
                v21 = v36;
                SystemPreferredUILanguages = v31;
                if ( v31 >= 0 )
                {
LABEL_86:
                  v6 = v43;
                  v5 = a5;
                  v22 = v35;
LABEL_87:
                  if ( *(_WORD *)(6 * v22 + *(_DWORD *)(v21 + 16)) && SystemPreferredUILanguages >= 0
                    || (*v5 = v41,
                        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                                       4 * ((v6 & 8) != 0) + 4100,
                                                       0,
                                                       (int)&v40,
                                                       (int)a4,
                                                       (int)v5),
                        SystemPreferredUILanguages < 0) )
                  {
LABEL_90:
                    v33 = LdrpConvertLangFallbackListToMultiSz(a4, v5, v6, v38, &v40);
                    goto LABEL_93;
                  }
LABEL_28:
                  if ( v36 )
                    RtlpMuiRegFreeLanguageList(v36);
                  if ( v39 )
                    RtlpMuiRegFreeLanguageList(v39);
LABEL_32:
                  if ( SystemPreferredUILanguages >= 0 )
                  {
                    v16 = v40;
                    goto LABEL_34;
                  }
LABEL_40:
                  a3 = a4;
                  if ( a4 && v41 )
                  {
                    if ( v41 == 1 )
                    {
                      *(_WORD *)a4 = 0;
                    }
                    else
                    {
                      v16 = 0;
LABEL_34:
                      *a3 = v16;
                    }
                  }
                  return SystemPreferredUILanguages;
                }
              }
              v23 = v42;
            }
          }
        }
        v32 = *(unsigned __int16 *)(v21 + 4);
        v23 += 6;
        ++v35;
        v42 = v23;
        if ( v35 >= v32 )
          goto LABEL_86;
      }
    }
    SystemPreferredUILanguages = -1073741772;
LABEL_44:
    *a5 = 2;
    goto LABEL_40;
  }
  return result;
}
