/*
 * XREFs of _LdrpMergeLangFallbackLists@36 @ 0x4B2D4925
 * Callers:
 *     _RtlGetUserPreferredUILanguages@20 @ 0x4B2AA700 (_RtlGetUserPreferredUILanguages@20.c)
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlGetSystemPreferredUILanguages@20 @ 0x4B352400 (_RtlGetSystemPreferredUILanguages@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpCreateLangFallbackList@16 @ 0x4B2D2D36 (_LdrpCreateLangFallbackList@16.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 *     _GetNameFromLangListNode@12 @ 0x4B2D4413 (_GetNameFromLangListNode@12.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByLangId@16 @ 0x4B2D4FD4 (_RtlpMuiRegGetInstalledLanguageIndexByLangId@16.c)
 *     _LdrpLangFallbackListAppendNode@24 @ 0x4B2D5467 (_LdrpLangFallbackListAppendNode@24.c)
 *     _RtlpGetSystemDefaultUILanguage@8 @ 0x4B2D5D90 (_RtlpGetSystemDefaultUILanguage@8.c)
 *     _RtlpFilterandReplaceConsoleLanguages@20 @ 0x4B2D62B9 (_RtlpFilterandReplaceConsoleLanguages@20.c)
 *     _LdrpMergeParentBaseLanguagesToList@20 @ 0x4B3516E9 (_LdrpMergeParentBaseLanguagesToList@20.c)
 */

int __fastcall LdrpMergeLangFallbackLists(
        int a1,
        DWORD *a2,
        PVOID *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        DWORD a8,
        char a9)
{
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // eax
  NTSTATUS appended; // esi
  int v14; // esi
  char v15; // bl
  int v16; // eax
  bool v17; // zf
  DWORD v18; // ebx
  int v19; // esi
  _WORD *v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  __int16 v24; // ax
  int v25; // ecx
  __int16 v26; // bx
  int v27; // ecx
  unsigned int v29; // ecx
  _WORD *v30; // eax
  int v31; // edx
  int v32; // ecx
  int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // ecx
  int v36; // esi
  _WORD *v37; // edx
  int v38; // ecx
  int v39; // ecx
  unsigned int v40; // eax
  DWORD v41; // eax
  DWORD v42; // eax
  SIZE_T v43; // [esp-4h] [ebp-68h]
  _UNICODE_STRING String; // [esp+10h] [ebp-54h] BYREF
  _UNICODE_STRING DestinationString; // [esp+18h] [ebp-4Ch] BYREF
  unsigned int v46; // [esp+20h] [ebp-44h]
  unsigned int v47; // [esp+24h] [ebp-40h]
  PVOID v48; // [esp+28h] [ebp-3Ch] BYREF
  int v49; // [esp+2Ch] [ebp-38h]
  unsigned int v50; // [esp+30h] [ebp-34h]
  int v51; // [esp+34h] [ebp-30h]
  DWORD v52; // [esp+38h] [ebp-2Ch]
  int v53; // [esp+3Ch] [ebp-28h]
  PVOID BaseAddress; // [esp+40h] [ebp-24h]
  int v55; // [esp+44h] [ebp-20h]
  PVOID *v56; // [esp+48h] [ebp-1Ch]
  LANGID DefaultUILanguageId; // [esp+4Ch] [ebp-18h] BYREF
  int v58; // [esp+50h] [ebp-14h] BYREF
  __int16 v59; // [esp+54h] [ebp-10h] BYREF
  int v60; // [esp+58h] [ebp-Ch] BYREF
  char v61; // [esp+5Fh] [ebp-5h]

  v53 = a1;
  *(_DWORD *)&String.Length = 0;
  String.Buffer = 0;
  v47 = 0;
  v49 = 0;
  LOWORD(v60) = -1;
  LOWORD(v58) = -1;
  v59 = -1;
  v48 = 0;
  v61 = 0;
  BaseAddress = 0;
  v52 = 0;
  if ( !a3 || !*a3 || !a2 || *((_WORD *)*a3 + 2) )
    return -1073741811;
  v10 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v11 = *(_DWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v11 = 0;
  if ( v11 )
    v12 = *(_DWORD *)(v11 + 32);
  else
    v12 = 0;
  v46 = v12;
  v56 = a3;
  if ( v10
    || (v12 & 6) == 0
    || (v47 = HIWORD(v12),
        v61 = 1,
        v56 = &v48,
        appended = LdrpCreateLangFallbackList(&v48, (int)a2, 25, 0),
        appended >= 0) )
  {
    LODWORD(v43) = 340;
    v55 = 0;
    BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v43);
    if ( !BaseAddress )
      return -1073741801;
    if ( !v10 )
    {
      v14 = a4;
      if ( a4 )
      {
        v29 = 0;
        v51 = 0;
        if ( *(_WORD *)(a4 + 4) )
        {
          v50 = 0;
          do
          {
            v30 = (_WORD *)(v29 + *(_DWORD *)(v14 + 16));
            v31 = v51;
            if ( *v30 )
            {
              DestinationString.Buffer = (wchar_t *)BaseAddress;
              v32 = *(_DWORD *)(v14 + 12);
              *(_DWORD *)&DestinationString.Length = 11141120;
              if ( !v32 )
                v32 = (int)a2;
              if ( GetNameFromLangListNode(v32, v30, &DestinationString) >= 0 )
              {
                appended = LdrpLangFallbackListAppendNode(0, (int)&v60, (PCWSTR)DestinationString.Buffer, v33);
                if ( appended < 0 )
                  goto LABEL_50;
                v14 = a4;
              }
              v31 = v51;
              v29 = v50;
            }
            v34 = *(unsigned __int16 *)(v14 + 4);
            v29 += 6;
            v51 = v31 + 1;
            v50 = v29;
          }
          while ( v31 + 1 < v34 );
        }
      }
    }
    if ( a5 )
    {
      if ( !v10 )
      {
        v35 = 0;
        v50 = 0;
        if ( *(_WORD *)(a5 + 4) )
        {
          v36 = 0;
          v51 = 0;
          do
          {
            v37 = (_WORD *)(v36 + *(_DWORD *)(a5 + 16));
            if ( *v37 )
            {
              v38 = *(_DWORD *)(a5 + 12);
              DestinationString.Buffer = (wchar_t *)BaseAddress;
              *(_DWORD *)&DestinationString.Length = 11141120;
              if ( !v38 )
                v38 = (int)a2;
              if ( GetNameFromLangListNode(v38, v37, &DestinationString) >= 0 )
              {
                appended = LdrpLangFallbackListAppendNode(0, (int)&v60, (PCWSTR)DestinationString.Buffer, v39);
                if ( appended < 0 )
                  goto LABEL_50;
                v36 = v51;
              }
              v35 = v50;
            }
            v40 = *(unsigned __int16 *)(a5 + 4);
            ++v35;
            v36 += 6;
            v50 = v35;
            v51 = v36;
          }
          while ( v35 < v40 );
        }
      }
    }
    v15 = v53;
    v51 = v53 & 0x20;
    if ( (v53 & 0x20) == 0 )
      goto LABEL_36;
    v16 = a6;
    if ( !a6 || !*(_WORD *)(a6 + 4) )
    {
      v16 = a7;
      if ( !a7 || !*(_WORD *)(a7 + 4) )
        goto LABEL_36;
    }
    v17 = *(_BYTE *)(v16 + 8) == 0;
    v55 = v16;
    if ( v17 )
    {
      v18 = a8;
      v52 = a8;
      if ( a8 )
        goto LABEL_24;
      v18 = a2[8];
    }
    else
    {
      v18 = a2[7];
    }
    v52 = v18;
LABEL_24:
    v50 = 0;
    if ( *(_WORD *)(v16 + 4) )
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = (_WORD *)(v19 + *(_DWORD *)(v16 + 16));
        if ( *v20 )
        {
          DestinationString.Buffer = (wchar_t *)BaseAddress;
          *(_DWORD *)&DestinationString.Length = 11141120;
          if ( GetNameFromLangListNode((int)a2, v20, &DestinationString) >= 0
            && LdrpLangFallbackListAppendNode(1, (int)&v60, (PCWSTR)DestinationString.Buffer, v21) >= 0
            && (v53 & 0x10) != 0 )
          {
            v22 = *(_DWORD *)(v55 + 16);
            if ( *(_WORD *)(v19 + v22) == 2 )
            {
              v23 = 28 * *(__int16 *)(v19 + v22 + 4);
              v24 = *(_WORD *)(v23 + *(_DWORD *)(a2[5] + 12));
              if ( (v24 & 7) != 0 && ((v24 & 6) == 0 || (int)LdrpMergeParentBaseLanguagesToList(a2, v18, v23) >= 0) )
                ++v49;
            }
          }
        }
        v19 += 6;
        if ( ++v50 >= *(unsigned __int16 *)(v55 + 4) )
          break;
        v16 = v55;
      }
    }
    v15 = v53;
LABEL_36:
    *(_DWORD *)&String.Length = 11141120;
    String.Buffer = (wchar_t *)((char *)BaseAddress + 170);
    appended = RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, a2);
    if ( appended >= 0 )
    {
      if ( RtlLCIDToCultureName(DefaultUILanguageId, &String) )
      {
        appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(1, &v59);
        if ( appended >= 0 )
        {
          v17 = (v15 & 0x40) == 0;
          v26 = v59;
          if ( !v17 || a9 && v49 )
            goto LABEL_49;
          appended = LdrpLangFallbackListAppendNode(0, (int)&v58, (PCWSTR)String.Buffer, v25);
          if ( appended < 0 || !v51 || (*(_BYTE *)(28 * v26 + *(_DWORD *)(a2[5] + 12)) & 6) == 0 )
            goto LABEL_49;
          if ( !v55 || (v41 = v52) == 0 )
            v41 = a2[7];
          appended = LdrpMergeParentBaseLanguagesToList(a2, v41, 28 * v26);
          if ( appended >= 0 )
          {
LABEL_49:
            if ( v61 )
            {
              if ( v56 )
              {
                appended = RtlpFilterandReplaceConsoleLanguages(*v56, a2, (v46 & 4) != 0, v47, a3);
                if ( appended >= 0 && (v53 & 0x30) == 0x30 )
                {
                  appended = LdrpLangFallbackListAppendNode(0, (int)&v58, (PCWSTR)String.Buffer, v27);
                  if ( appended >= 0 && (*(_BYTE *)(28 * v26 + *(_DWORD *)(a2[5] + 12)) & 6) != 0 )
                  {
                    if ( !v55 || (v42 = v52) == 0 )
                      v42 = a2[7];
                    appended = LdrpMergeParentBaseLanguagesToList(a2, v42, 28 * v26);
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        appended = -1073741823;
      }
    }
  }
LABEL_50:
  if ( v48 )
    RtlpMuiRegFreeLanguageList(v48);
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return appended;
}
