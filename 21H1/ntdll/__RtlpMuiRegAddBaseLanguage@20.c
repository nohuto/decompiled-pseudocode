/*
 * XREFs of __RtlpMuiRegAddBaseLanguage@20 @ 0x4B36C24C
 * Callers:
 *     __RtlpMuiRegPopulateBaseLanguages@20 @ 0x4B36C81E (__RtlpMuiRegPopulateBaseLanguages@20.c)
 * Callees:
 *     __RtlpMuiRegInitAnyLanguage@16 @ 0x4B2ACA44 (__RtlpMuiRegInitAnyLanguage@16.c)
 *     _RtlpMuiRegGetLanguageSpec@20 @ 0x4B2ACBB5 (_RtlpMuiRegGetLanguageSpec@20.c)
 *     _RtlpLangNameInMultiSzString@8 @ 0x4B2D43C0 (_RtlpLangNameInMultiSzString@8.c)
 *     _RtlpMuiRegGetOrAddLangInfo@12 @ 0x4B2EA745 (_RtlpMuiRegGetOrAddLangInfo@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall _RtlpMuiRegAddBaseLanguage(int a1, _WORD *a2, unsigned int a3, int a4, wchar_t *a5)
{
  char v5; // bl
  WCHAR *v6; // edi
  char v7; // bh
  int v8; // ecx
  int result; // eax
  wchar_t *v10; // esi
  int v11; // ecx
  const WCHAR *v12; // edx
  int v13; // esi
  wchar_t *LanguageSpec; // eax
  char v15; // bh
  int v16; // eax
  __int16 v17; // cx
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  __int16 v22; // dx
  int v23; // esi
  unsigned int v24; // esi
  _WORD *v25; // ecx
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-54h] BYREF
  unsigned int v27; // [esp+18h] [ebp-4Ch]
  _WORD *v28; // [esp+1Ch] [ebp-48h]
  int v29; // [esp+20h] [ebp-44h]
  int v30; // [esp+24h] [ebp-40h]
  int v31; // [esp+28h] [ebp-3Ch]
  int v32; // [esp+2Ch] [ebp-38h]
  int v33; // [esp+30h] [ebp-34h]
  wchar_t *String2; // [esp+34h] [ebp-30h] BYREF
  char v35; // [esp+39h] [ebp-2Bh]
  char v36; // [esp+3Ah] [ebp-2Ah]
  char v37; // [esp+3Bh] [ebp-29h] BYREF
  __int16 v38[3]; // [esp+3Ch] [ebp-28h] BYREF
  char v39; // [esp+43h] [ebp-21h] BYREF
  __int16 v40; // [esp+44h] [ebp-20h] BYREF
  __int16 v41; // [esp+48h] [ebp-1Ch]
  __int16 v42; // [esp+4Ah] [ebp-1Ah]
  int v43; // [esp+4Ch] [ebp-18h]
  _WORD v44[8]; // [esp+50h] [ebp-14h]

  String2 = a5;
  v28 = a2;
  v5 = 0;
  v32 = a1;
  v39 = 0;
  v27 = a3;
  if ( a1 && a2 && a4 && a3 <= 3 )
  {
    v6 = (WCHAR *)(a4 + *(_DWORD *)(a4 + 8));
    if ( !*(_DWORD *)(a4 + 12) || !v6 || (v7 = 1, !*v6) )
      v7 = 0;
    v31 = *(_DWORD *)(a4 + 16) >> 1;
    v35 = v7;
    v33 = *(unsigned __int16 *)(a4 + 2 * v31 + 20);
    *(_WORD *)(a4 + 2 * v31 + 20) = 0;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a4 + 20));
    v29 = 0;
    v38[0] = 0;
    if ( !v7 )
    {
      v23 = v32;
      result = RtlpMuiRegGetLanguageSpec(v32, (const WCHAR *)DestinationString.Buffer, &v39, v8, v38);
      v30 = result;
      if ( result < 0 )
        return result;
      v5 = v39;
      v22 = v38[0];
      goto LABEL_39;
    }
    v6[*(_DWORD *)(a4 + 12) >> 1] = 0;
    result = _RtlpMuiRegInitAnyLanguage(v32, (int)&v40, (PCWSTR)DestinationString.Buffer, 1026);
    v30 = result;
    if ( result < 0 )
      return result;
    v40 ^= ((unsigned __int8)v40 ^ (unsigned __int8)*v28) & 0x18;
    *(_WORD *)(a4 + 2 * v31 + 20) = v33;
    v10 = String2;
    v33 = 0;
    v36 = 0;
    if ( String2 && *String2 && RtlpLangNameInMultiSzString((wchar_t *)v6, String2) )
    {
      v12 = (const WCHAR *)v10;
      v13 = v32;
      LanguageSpec = (wchar_t *)RtlpMuiRegGetLanguageSpec(v32, v12, &v37, v11, &String2);
      v15 = v37;
      if ( (int)LanguageSpec >= 0 )
      {
        v16 = v43 & 0xFFFC;
        v17 = v16 | v37 & 3;
        LOWORD(v16) = (_WORD)String2;
        LOWORD(v43) = v17;
        v18 = 1;
        String2 = (wchar_t *)v16;
        v44[0] = v16;
        v33 = 1;
        v36 = 1;
LABEL_19:
        if ( v6 )
        {
          v19 = 2 * v18;
          v31 = 2 * v18;
          do
          {
            if ( !*v6 || v19 >= 8 )
              break;
            v20 = RtlpMuiRegGetLanguageSpec(v13, v6, &v39, v18, v38);
            LOWORD(v13) = v38[0];
            v5 = v39;
            v29 = v13;
            if ( v20 >= 0 && (!v36 || v15 != v39 || (_WORD)String2 != v38[0]) )
            {
              v21 = v31;
              ++v33;
              LOWORD(v43) = ((v39 & 3) << v31) | v43 & ~(3 << v31);
              *(_WORD *)((char *)v44 + v31) = v38[0];
              v31 = v21 + 2;
            }
            v18 = wcslen((const unsigned __int16 *)v6);
            v19 = v31;
            v13 = v32;
            v6 += v18 + 1;
          }
          while ( v6 );
          v18 = v33;
        }
        if ( v18 < 0 )
        {
          if ( v41 )
          {
            v22 = v41;
            v5 = 1;
          }
          else
          {
            if ( v42 <= 0 )
              return -1073741823;
            v22 = v42;
            v5 = 3;
          }
LABEL_42:
          v24 = v27;
          v25 = v28;
          v28[4] = v28[4] & ~(3 << (2 * v27)) | ((v5 & 3) << (2 * v27));
          result = v30;
          v25[v24 + 6] = v22;
          return result;
        }
        v22 = v29;
        v23 = v32;
        v7 = v35;
LABEL_39:
        if ( v7 )
        {
          v40 &= ~0x20u;
          result = RtlpMuiRegGetOrAddLangInfo((int *)(v23 + 20), &v40, v38);
          v30 = result;
          if ( result < 0 )
            return result;
          v22 = v38[0];
          v5 = 2;
        }
        goto LABEL_42;
      }
      LOWORD(LanguageSpec) = (_WORD)String2;
      String2 = LanguageSpec;
    }
    else
    {
      String2 = 0;
      v15 = 0;
      v13 = v32;
    }
    v18 = v33;
    goto LABEL_19;
  }
  return -1073741811;
}
