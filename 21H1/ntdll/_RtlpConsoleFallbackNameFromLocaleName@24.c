/*
 * XREFs of _RtlpConsoleFallbackNameFromLocaleName@24 @ 0x4B2D61DE
 * Callers:
 *     _RtlpFilterandReplaceConsoleLanguages@20 @ 0x4B2D62B9 (_RtlpFilterandReplaceConsoleLanguages@20.c)
 * Callees:
 *     _RtlpNlsGetLcidIndex@4 @ 0x4B2D5BC8 (_RtlpNlsGetLcidIndex@4.c)
 *     _RtlpNlsGetNameIndex@4 @ 0x4B2D5C90 (_RtlpNlsGetNameIndex@4.c)
 *     _RtlpLoadNlsData@0 @ 0x4B2EA1FB (_RtlpLoadNlsData@0.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 *     _RtlpGetAlternateCodePage@12 @ 0x4B36317B (_RtlpGetAlternateCodePage@12.c)
 */

int __fastcall RtlpConsoleFallbackNameFromLocaleName(
        wchar_t *String2,
        char a2,
        _BYTE *a3,
        PUNICODE_STRING DestinationString,
        int a5,
        unsigned __int16 a6)
{
  int v7; // ebx
  int v8; // esi
  int LcidIndex; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int NameIndex; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v19; // ecx
  int v20; // eax
  wchar_t *v21; // esi
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int AlternateCodePage; // eax
  int v26; // edx
  int v27; // ecx
  __int16 v28; // cx
  const WCHAR *v29; // [esp-4h] [ebp-2Ch]
  int v30; // [esp+Ch] [ebp-1Ch] BYREF
  int v31; // [esp+10h] [ebp-18h]
  int v32; // [esp+14h] [ebp-14h]
  int v33; // [esp+18h] [ebp-10h]
  int v34; // [esp+1Ch] [ebp-Ch]
  int v35; // [esp+20h] [ebp-8h]
  char v36; // [esp+27h] [ebp-1h]

  v36 = a2;
  v7 = 0;
  v30 = 0;
  if ( !String2 )
    return -1073741585;
  if ( !a3 )
    return -1073741583;
  if ( !DestinationString )
    return -1073741582;
  v8 = pTblPtrs;
  *a3 = 0;
  if ( v8 )
    goto LABEL_5;
  if ( (unsigned __int8)RtlpLoadNlsData() )
  {
    v8 = pTblPtrs;
LABEL_5:
    LcidIndex = RtlpNlsGetLcidIndex(gSystemLocale);
    if ( LcidIndex >= 0 )
    {
      _mm_lfence();
      v10 = *(unsigned __int16 *)(*(_DWORD *)(v8 + 12) + 8 * LcidIndex + 4) * *(unsigned __int16 *)(v8 + 28);
      v11 = *(_DWORD *)(v8 + 8);
      v12 = *(unsigned __int16 *)(v10 + v11 + 110);
      v32 = *(unsigned __int16 *)(v10 + v11 + 112);
      v33 = v12;
      v31 = a6;
      NameIndex = RtlpNlsGetNameIndex(String2);
      if ( NameIndex >= 0 )
      {
        _mm_lfence();
        v14 = *(_DWORD *)(v8 + 8);
        v15 = *(unsigned __int16 *)(*(_DWORD *)(v8 + 16) + 8 * NameIndex + 2) * *(unsigned __int16 *)(v8 + 28);
        v16 = *(unsigned __int16 *)(v15 + v14 + 110);
        v17 = *(unsigned __int16 *)(v15 + v14 + 112);
        v34 = v16;
        v35 = v17;
        if ( v16 == 1252 || v16 == 1250 || v16 == 1254 || v16 == 1257 )
        {
          v29 = (const WCHAR *)String2;
LABEL_9:
          *a3 = v7;
          RtlInitUnicodeString(DestinationString, v29);
          return 0;
        }
        v19 = *(_DWORD *)(v15 + *(_DWORD *)(v8 + 8) + 276);
        v20 = *(_DWORD *)(v8 + 20);
        v21 = (wchar_t *)(v20 + 2 * (v19 + 1));
        if ( v36 && !_wcsicmp((const wchar_t *)(v20 + 2 * (v19 + 1)), String2) )
        {
          v21 = String2;
LABEL_49:
          v29 = (const WCHAR *)v21;
          goto LABEL_9;
        }
        if ( !_wcsicmp(v21, L"en") || !_wcsicmp(v21, L"en-US") )
          goto LABEL_46;
        if ( _wcsicmp(v21, String2) )
        {
          v22 = RtlpNlsGetNameIndex(v21);
          if ( v22 < 0 )
            goto LABEL_45;
          _mm_lfence();
          v23 = *(unsigned __int16 *)(*(_DWORD *)(pTblPtrs + 16) + 8 * v22 + 2) * *(unsigned __int16 *)(pTblPtrs + 28);
          v24 = *(_DWORD *)(pTblPtrs + 8);
          v34 = *(unsigned __int16 *)(v23 + v24 + 110);
          v35 = *(unsigned __int16 *)(v23 + v24 + 112);
        }
        AlternateCodePage = RtlpGetAlternateCodePage(&v30);
        if ( !v31 || AlternateCodePage )
        {
          v26 = v35;
        }
        else
        {
          v26 = v35;
          if ( v31 != v34 && v31 != v35 )
            goto LABEL_45;
        }
        if ( v34 == v33 || v34 == v32 || v26 == v33 || v26 == v32 )
        {
LABEL_46:
          if ( !_wcsicmp(v21, L"en") )
            v21 = L"en-US";
          LOBYTE(v7) = _wcsicmp(v21, String2) != 0;
          goto LABEL_49;
        }
        if ( AlternateCodePage )
        {
          if ( AlternateCodePage != -1 )
          {
            if ( AlternateCodePage > 0 )
            {
              v27 = 0;
              while ( 1 )
              {
                v28 = *(_WORD *)(v30 + 2 * v27);
                if ( v28 > 0 && (v28 == v33 || v28 == v32) )
                  goto LABEL_46;
                v27 = (__int16)++v7;
                if ( (__int16)v7 >= AlternateCodePage )
                  goto LABEL_45;
              }
            }
            goto LABEL_45;
          }
          goto LABEL_46;
        }
LABEL_45:
        v21 = L"en-US";
        goto LABEL_46;
      }
      return -1073741585;
    }
  }
  return -1073741823;
}
