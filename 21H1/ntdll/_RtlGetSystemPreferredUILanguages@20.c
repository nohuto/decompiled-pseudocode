/*
 * XREFs of _RtlGetSystemPreferredUILanguages@20 @ 0x4B352400
 * Callers:
 *     _RtlGetUserPreferredUILanguages@20 @ 0x4B2AA700 (_RtlGetUserPreferredUILanguages@20.c)
 * Callees:
 *     _LdrpCreateLangFallbackList@16 @ 0x4B2D2D36 (_LdrpCreateLangFallbackList@16.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 *     _LdrpConvertLangFallbackListToMultiSz@28 @ 0x4B2D3319 (_LdrpConvertLangFallbackListToMultiSz@28.c)
 *     _RtlpSetProcUserMachineLangList@8 @ 0x4B2D3D47 (_RtlpSetProcUserMachineLangList@8.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _LdrpMergeLangFallbackLists@36 @ 0x4B2D4925 (_LdrpMergeLangFallbackLists@36.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _LdrpMergeParentBaseLanguagesToList@20 @ 0x4B3516E9 (_LdrpMergeParentBaseLanguagesToList@20.c)
 *     _RtlIsValidLocaleName@8 @ 0x4B3630F0 (_RtlIsValidLocaleName@8.c)
 */

int __stdcall RtlGetSystemPreferredUILanguages(int a1, PCWSTR SourceString, _DWORD *a3, int a4, unsigned int *a5)
{
  unsigned int *v5; // ecx
  _BYTE *v6; // ebx
  unsigned int v7; // eax
  int v8; // esi
  int v9; // esi
  unsigned int v10; // ecx
  int result; // eax
  int v12; // eax
  _DWORD *v13; // edi
  int v14; // eax
  bool v15; // zf
  int v16; // ecx
  __int16 *v17; // eax
  __int16 v18; // cx
  int v19; // ecx
  _BYTE *v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  _WORD *v25; // ecx
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int *v29; // [esp-10h] [ebp-58h]
  char v30; // [esp-Ch] [ebp-54h]
  char v31; // [esp-8h] [ebp-50h]
  bool v32; // [esp+13h] [ebp-35h]
  int v33; // [esp+14h] [ebp-34h] BYREF
  _BYTE *v34; // [esp+18h] [ebp-30h] BYREF
  int v35; // [esp+1Ch] [ebp-2Ch]
  _DWORD *v36; // [esp+20h] [ebp-28h] BYREF
  int v37; // [esp+24h] [ebp-24h]
  _BYTE *v38; // [esp+28h] [ebp-20h] BYREF
  int v39; // [esp+2Ch] [ebp-1Ch] BYREF
  unsigned int v40; // [esp+30h] [ebp-18h]
  int v41; // [esp+34h] [ebp-14h]
  int v42; // [esp+38h] [ebp-10h]
  UNICODE_STRING DestinationString; // [esp+40h] [ebp-8h] BYREF

  v5 = a5;
  v6 = 0;
  LOWORD(v33) = -1;
  v7 = *a5;
  v39 = 0;
  v34 = 0;
  v38 = 0;
  v36 = 0;
  v32 = 0;
  v40 = v7;
  v41 = 2;
  if ( SourceString )
  {
    v8 = 4104;
    v35 = 4104;
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !(unsigned __int8)RtlIsValidLocaleName(SourceString, 2) )
    {
LABEL_3:
      v9 = -1073741772;
      goto LABEL_4;
    }
    v5 = a5;
    v32 = (a1 & 0x80) != 0;
  }
  else
  {
    v8 = a1;
    v35 = a1;
  }
  if ( (v8 & 0xFFFF6373) != 0 )
    return -1073741811;
  if ( (v8 & 0x9880) == 0 )
  {
    v8 |= 0x80u;
    v35 = v8;
  }
  if ( (v8 & 0xC) == 0xC )
    return -1073741811;
  if ( (v8 & 0xC) == 0 )
  {
    v8 |= 8u;
    v35 = v8;
  }
  LOBYTE(v37) = (v8 & 0x400) == 0;
  v12 = v8 & 0x9880;
  if ( (v8 & 0x9880) == 0 )
  {
    v8 |= 0x8000u;
    v12 = 0x8000;
    v35 = v8;
  }
  if ( v12 != 2048 && v12 != 4096 && v12 != 0x8000 && v12 != 128 )
    return -1073741811;
  v40 = *v5;
  if ( v40 )
  {
    if ( !a4 )
      return -1073741811;
  }
  result = RtlpCreateProcessRegistryInfo((int *)&v36);
  if ( result >= 0 )
  {
    v13 = v36;
    if ( SourceString && RtlpMuiRegGetInstalledLanguageIndexByName((int)v36, SourceString, 0, &v33) < 0 )
      goto LABEL_3;
    result = RtlpSetProcUserMachineLangList(v13, 0);
    if ( result >= 0 )
    {
      if ( (v8 & 0x800) != 0 )
      {
        *a5 = v40;
        v9 = LdrpConvertLangFallbackListToMultiSz(v13[9], (int)v13, (_DWORD *)a4, a5, v8, v37, &v39);
        if ( v9 >= 0 && v39 )
          goto LABEL_76;
        v9 = LdrpCreateLangFallbackList(&v34, (int)v13, 25, 1);
        if ( v9 >= 0 )
        {
          v9 = LdrpMergeLangFallbackLists(v35 | 0x30, v13, &v34, 0, 0, 0, 0, 0, 0);
          if ( v9 >= 0 )
          {
            *a5 = v40;
            v31 = v37;
            v30 = v35;
            v29 = a5;
LABEL_70:
            v28 = LdrpConvertLangFallbackListToMultiSz((int)v34, (int)v13, (_DWORD *)a4, v29, v30, v31, &v39);
            goto LABEL_71;
          }
        }
      }
      else
      {
        v14 = LdrpCreateLangFallbackList(&v34, (int)v13, 25, 1);
        v15 = (v8 & 0x8080) == 0;
        v9 = v14;
        if ( !v15 )
        {
          if ( v14 < 0 )
            goto LABEL_72;
          v9 = LdrpMergeLangFallbackLists(v35 | 0x30, v13, &v34, 0, 0, 0, v13[9], 0, 1);
          if ( v9 < 0 )
            goto LABEL_72;
          v31 = v37;
          v30 = v35;
          v29 = a5;
          goto LABEL_70;
        }
        if ( v14 < 0 )
          goto LABEL_72;
        v9 = LdrpMergeLangFallbackLists(v35 | 0x30, v13, &v34, 0, 0, 0, v13[9], 0, 0);
        if ( v9 < 0 )
          goto LABEL_72;
        v9 = LdrpCreateLangFallbackList(&v38, (int)v13, 25, 1);
        if ( v9 >= 0 )
        {
          if ( SourceString )
          {
            LOBYTE(v36) = v37;
            if ( (_WORD)v33 != 0xFFFF )
            {
              v16 = v13[5];
              LOBYTE(v36) = v37;
              v17 = (__int16 *)(*(_DWORD *)(v16 + 12) + 28 * (__int16)v33);
              if ( v17 )
              {
                v18 = *v17;
                if ( (*v17 & 2) != 0 || (LOBYTE(v36) = v37, v32) && (LOBYTE(v36) = v37, (v18 & 4) != 0) )
                  LOBYTE(v36) = 0;
                if ( v34[8] )
                  v19 = v13[7];
                else
                  v19 = v13[8];
                v9 = LdrpMergeParentBaseLanguagesToList((int *)&v38, v17, v13, v19, v19);
              }
            }
          }
          else
          {
            v20 = v34;
            v21 = 0;
            LOBYTE(v36) = v37;
            if ( *((_WORD *)v34 + 2) )
            {
              LOBYTE(v36) = v37;
              v33 = 0;
              do
              {
                v22 = *((_DWORD *)v20 + 4);
                v42 = 0;
                v23 = *(unsigned __int16 *)(v21 + v22);
                *(_DWORD *)&DestinationString.Length = v23;
                if ( (_WORD)v23 )
                {
                  if ( (_WORD)v23 == (_WORD)v41 )
                  {
                    v24 = 28 * *(__int16 *)(v33 + *((_DWORD *)v20 + 4) + 4);
                    v20 = v34;
                    v21 = v33;
                    LOBYTE(v24) = (*(_BYTE *)(v24 + *(_DWORD *)(v13[5] + 12)) & 2) == 0 ? v37 : 0;
                    v37 = v24;
                    LOBYTE(v36) = v24;
                    if ( DestinationString.Length == (_WORD)v41 )
                    {
                      v25 = (_WORD *)(*(_DWORD *)(v13[5] + 12) + 28 * *(__int16 *)(v33 + *((_DWORD *)v34 + 4) + 4));
                      if ( (*(_BYTE *)v25 & 6) != 0 )
                      {
                        if ( v34[8] )
                          v26 = v13[7];
                        else
                          v26 = v13[8];
                        v9 = LdrpMergeParentBaseLanguagesToList((int *)&v38, v25, v13, v26, (int)v25);
                        if ( v9 >= 0 )
                          goto LABEL_65;
                        v20 = v34;
                      }
                      v21 = v33;
                    }
                  }
                }
                v27 = *((unsigned __int16 *)v20 + 2);
                ++v6;
                v21 += 6;
                v33 = v21;
              }
              while ( (unsigned int)v6 < v27 );
            }
          }
          if ( v9 >= 0 )
          {
LABEL_65:
            v6 = v38;
            v28 = LdrpConvertLangFallbackListToMultiSz((int)v38, (int)v13, (_DWORD *)a4, a5, v35, (char)v36, &v39);
LABEL_71:
            v9 = v28;
            goto LABEL_72;
          }
        }
        v6 = v38;
      }
LABEL_72:
      if ( v34 )
        RtlpMuiRegFreeLanguageList(v34);
      if ( v6 )
        RtlpMuiRegFreeLanguageList(v6);
LABEL_76:
      if ( v9 >= 0 )
      {
        *a3 = v39;
        return v9;
      }
LABEL_4:
      if ( a4 )
      {
        v10 = v40;
        if ( v40 )
          *(_WORD *)a4 = 0;
        if ( v10 > 1 )
          *(_WORD *)(a4 + 2) = 0;
      }
      return v9;
    }
  }
  return result;
}
