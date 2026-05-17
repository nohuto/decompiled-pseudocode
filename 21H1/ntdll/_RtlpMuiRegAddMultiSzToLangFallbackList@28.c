/*
 * XREFs of _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76
 * Callers:
 *     _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC (_RtlpMuiRegLoadPreferredUILanguages@24.c)
 *     _LdrpLangFallbackListAppendNode@24 @ 0x4B2D5467 (_LdrpLangFallbackListAppendNode@24.c)
 *     _RtlSetThreadPreferredUILanguages@12 @ 0x4B2D64B0 (_RtlSetThreadPreferredUILanguages@12.c)
 *     _RtlSetProcessPreferredUILanguages@12 @ 0x4B352E10 (_RtlSetProcessPreferredUILanguages@12.c)
 *     _RtlpMuiRegLoadMachinePreferredUILanguages@16 @ 0x4B36BB58 (_RtlpMuiRegLoadMachinePreferredUILanguages@16.c)
 * Callees:
 *     _RtlpMuiRegGetOrAddString@16 @ 0x4B2AD813 (_RtlpMuiRegGetOrAddString@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpMuiRegCreateLanguageList@12 @ 0x4B2D3232 (_RtlpMuiRegCreateLanguageList@12.c)
 *     _RtlpMuiRegGetInstalledLanguageIndex@16 @ 0x4B2D4EAF (_RtlpMuiRegGetInstalledLanguageIndex@16.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlpMuiRegGrowLanguageList@8 @ 0x4B36B8F3 (_RtlpMuiRegGrowLanguageList@8.c)
 */

int __fastcall RtlpMuiRegAddMultiSzToLangFallbackList(
        _DWORD *a1,
        const unsigned __int16 *a2,
        int a3,
        char a4,
        int a5,
        unsigned int a6,
        int *a7)
{
  const unsigned __int16 *v7; // edi
  int v8; // ebx
  int v9; // ecx
  int v10; // esi
  char v11; // al
  int LanguageList; // edi
  int v13; // edx
  _WORD *v15; // ecx
  unsigned __int8 v16; // [esp+13h] [ebp-35h]
  __int16 v17; // [esp+14h] [ebp-34h] BYREF
  int v18; // [esp+18h] [ebp-30h] BYREF
  int v19; // [esp+1Ch] [ebp-2Ch] BYREF
  _DWORD *v20; // [esp+20h] [ebp-28h]
  int v21; // [esp+24h] [ebp-24h]
  int v22; // [esp+28h] [ebp-20h]
  const unsigned __int16 *v23; // [esp+2Ch] [ebp-1Ch]
  wchar_t *Heap; // [esp+30h] [ebp-18h]
  int v25; // [esp+34h] [ebp-14h]
  int v26; // [esp+38h] [ebp-10h]
  unsigned int v27; // [esp+3Ch] [ebp-Ch]
  UNICODE_STRING DestinationString; // [esp+40h] [ebp-8h] BYREF

  v20 = a1;
  v21 = 2 * a3;
  LOWORD(v19) = 0;
  v22 = 0;
  v17 = -1;
  v7 = a2;
  v23 = a2;
  v8 = 0;
  if ( 2 * a3 <= 0 || !a2 || !a7 || (a5 & 0xFFFFFFE0) != 0 )
    return -1073741811;
  Heap = (wchar_t *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 170);
  if ( Heap )
  {
    v9 = v21;
    while ( 1 )
    {
      if ( !*v7 || v9 <= 0 )
      {
LABEL_23:
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
        return v8;
      }
      v18 = 0;
      v27 = 2 * wcslen(v7);
      RtlInitUnicodeString(&DestinationString, v7);
      if ( (a4 & 4) != 0 )
      {
        if ( (int)RtlUnicodeStringToInteger(&DestinationString, 16, &v18) < 0 )
          goto LABEL_56;
        v10 = v18;
        if ( v18 == 4096 || v18 == 5120 || v18 == 1024 || v18 == 3072 || v18 == 2048 || v18 == 127 )
        {
          if ( (a5 & 4) != 0 )
            goto LABEL_56;
          if ( (a5 & 8) != 0 )
          {
            v8 = -1073741637;
            goto LABEL_23;
          }
        }
        DestinationString.Buffer = Heap;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( !(unsigned __int8)RtlLCIDToCultureName(v18, &DestinationString)
          || (a5 & 2) == 0 && (v10 == 4096 || v10 == 5120) )
        {
          goto LABEL_56;
        }
      }
      else
      {
        if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v18) )
          goto LABEL_56;
        LOWORD(v10) = v18;
        if ( v18 == 4096 || v18 == 5120 )
        {
          if ( (a5 & 2) == 0 || RtlpMuiRegGetOrAddString(v20, DestinationString.Buffer, 1, &v19) < 0 )
            goto LABEL_56;
          LOWORD(v10) = v19;
          v11 = 3;
          goto LABEL_14;
        }
      }
      v11 = 1;
      LOWORD(v19) = v10;
LABEL_14:
      v16 = v11;
      if ( (int)RtlpMuiRegGetInstalledLanguageIndex(v19, &v17) < 0 )
      {
        if ( (a4 & 2) == 0 )
          goto LABEL_56;
      }
      else if ( (a4 & 0x10) == 0 )
      {
        LOWORD(v10) = v17;
        v16 = 2;
        LOWORD(v19) = v17;
      }
      LanguageList = *a7;
      if ( !*a7 )
      {
        LanguageList = RtlpMuiRegCreateLanguageList(1, a5 & 1, (int)v20);
        *a7 = LanguageList;
        if ( !LanguageList )
        {
LABEL_54:
          v8 = -1073741801;
          goto LABEL_23;
        }
      }
      v13 = 0;
      v26 = *(unsigned __int16 *)(LanguageList + 4);
      v25 = (unsigned __int16)v26;
      if ( (_WORD)v26 )
      {
        v15 = *(_WORD **)(LanguageList + 16);
        LOWORD(v18) = v16;
        while ( *v15 != (_WORD)v18 || v15[2] != (_WORD)v10 )
        {
          ++v13;
          v15 += 3;
          LanguageList = *a7;
          if ( v13 >= v25 )
            goto LABEL_19;
        }
      }
      else
      {
LABEL_19:
        if ( (unsigned __int16)v26 >= *(_WORD *)(LanguageList + 6) )
        {
          LanguageList = RtlpMuiRegGrowLanguageList(LanguageList);
          *a7 = LanguageList;
          if ( !LanguageList )
            goto LABEL_54;
        }
        *(_WORD *)(6 * *(unsigned __int16 *)(LanguageList + 4) + *(_DWORD *)(LanguageList + 16)) = v16;
        *(_WORD *)(6 * (unsigned __int16)(*(_WORD *)(*a7 + 4))++ + *(_DWORD *)(*a7 + 16) + 4) = v10;
      }
      if ( ++v22 >= a6 )
      {
        v8 = 0;
        goto LABEL_23;
      }
      v7 = v23;
LABEL_56:
      v7 = (const unsigned __int16 *)((char *)v7 + v27 + 2);
      v9 = -2 - v27 + v21;
      v23 = v7;
      v21 = v9;
      if ( !v7 )
        goto LABEL_23;
    }
  }
  return -1073741801;
}
