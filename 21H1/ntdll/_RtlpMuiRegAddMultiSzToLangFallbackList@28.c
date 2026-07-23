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
  DWORD v10; // esi
  char v11; // al
  int LanguageList; // edi
  int v13; // edx
  _WORD *v15; // ecx
  SIZE_T v16; // [esp-4h] [ebp-4Ch]
  unsigned __int8 v17; // [esp+13h] [ebp-35h]
  __int16 v18; // [esp+14h] [ebp-34h] BYREF
  DWORD Lcid; // [esp+18h] [ebp-30h] BYREF
  int v20; // [esp+1Ch] [ebp-2Ch] BYREF
  _DWORD *v21; // [esp+20h] [ebp-28h]
  int v22; // [esp+24h] [ebp-24h]
  int v23; // [esp+28h] [ebp-20h]
  const unsigned __int16 *v24; // [esp+2Ch] [ebp-1Ch]
  PVOID BaseAddress; // [esp+30h] [ebp-18h]
  int v26; // [esp+34h] [ebp-14h]
  int v27; // [esp+38h] [ebp-10h]
  unsigned int v28; // [esp+3Ch] [ebp-Ch]
  _UNICODE_STRING DestinationString; // [esp+40h] [ebp-8h] BYREF

  v21 = a1;
  v22 = 2 * a3;
  LOWORD(v20) = 0;
  v23 = 0;
  v18 = -1;
  v7 = a2;
  v24 = a2;
  v8 = 0;
  if ( 2 * a3 <= 0 || !a2 || !a7 || (a5 & 0xFFFFFFE0) != 0 )
    return -1073741811;
  LODWORD(v16) = 170;
  BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v16);
  if ( BaseAddress )
  {
    v9 = v22;
    while ( 1 )
    {
      if ( !*v7 || v9 <= 0 )
      {
LABEL_23:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        return v8;
      }
      Lcid = 0;
      v28 = 2 * wcslen(v7);
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v7);
      if ( (a4 & 4) != 0 )
      {
        if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Lcid) < 0 )
          goto LABEL_56;
        v10 = Lcid;
        if ( Lcid == 4096 || Lcid == 5120 || Lcid == 1024 || Lcid == 3072 || Lcid == 2048 || Lcid == 127 )
        {
          if ( (a5 & 4) != 0 )
            goto LABEL_56;
          if ( (a5 & 8) != 0 )
          {
            v8 = -1073741637;
            goto LABEL_23;
          }
        }
        DestinationString.Buffer = (wchar_t *)BaseAddress;
        *(_DWORD *)&DestinationString.Length = 11141120;
        if ( !RtlLCIDToCultureName(Lcid, &DestinationString) || (a5 & 2) == 0 && (v10 == 4096 || v10 == 5120) )
          goto LABEL_56;
      }
      else
      {
        if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
          goto LABEL_56;
        LOWORD(v10) = Lcid;
        if ( Lcid == 4096 || Lcid == 5120 )
        {
          if ( (a5 & 2) == 0 || RtlpMuiRegGetOrAddString(v21, DestinationString.Buffer, 1, &v20) < 0 )
            goto LABEL_56;
          LOWORD(v10) = v20;
          v11 = 3;
          goto LABEL_14;
        }
      }
      v11 = 1;
      LOWORD(v20) = v10;
LABEL_14:
      v17 = v11;
      if ( (int)RtlpMuiRegGetInstalledLanguageIndex(v20, &v18) < 0 )
      {
        if ( (a4 & 2) == 0 )
          goto LABEL_56;
      }
      else if ( (a4 & 0x10) == 0 )
      {
        LOWORD(v10) = v18;
        v17 = 2;
        LOWORD(v20) = v18;
      }
      LanguageList = *a7;
      if ( !*a7 )
      {
        LanguageList = RtlpMuiRegCreateLanguageList(1, a5 & 1, (int)v21);
        *a7 = LanguageList;
        if ( !LanguageList )
        {
LABEL_54:
          v8 = -1073741801;
          goto LABEL_23;
        }
      }
      v13 = 0;
      v27 = *(unsigned __int16 *)(LanguageList + 4);
      v26 = (unsigned __int16)v27;
      if ( (_WORD)v27 )
      {
        v15 = *(_WORD **)(LanguageList + 16);
        LOWORD(Lcid) = v17;
        while ( *v15 != (_WORD)Lcid || v15[2] != (_WORD)v10 )
        {
          ++v13;
          v15 += 3;
          LanguageList = *a7;
          if ( v13 >= v26 )
            goto LABEL_19;
        }
      }
      else
      {
LABEL_19:
        if ( (unsigned __int16)v27 >= *(_WORD *)(LanguageList + 6) )
        {
          LanguageList = RtlpMuiRegGrowLanguageList(LanguageList);
          *a7 = LanguageList;
          if ( !LanguageList )
            goto LABEL_54;
        }
        *(_WORD *)(6 * *(unsigned __int16 *)(LanguageList + 4) + *(_DWORD *)(LanguageList + 16)) = v17;
        *(_WORD *)(6 * (unsigned __int16)(*(_WORD *)(*a7 + 4))++ + *(_DWORD *)(*a7 + 16) + 4) = v10;
      }
      if ( ++v23 >= a6 )
      {
        v8 = 0;
        goto LABEL_23;
      }
      v7 = v24;
LABEL_56:
      v7 = (const unsigned __int16 *)((char *)v7 + v28 + 2);
      v9 = -2 - v28 + v22;
      v24 = v7;
      v22 = v9;
      if ( !v7 )
        goto LABEL_23;
    }
  }
  return -1073741801;
}
