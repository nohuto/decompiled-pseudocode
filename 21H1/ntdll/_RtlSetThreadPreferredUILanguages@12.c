/*
 * XREFs of _RtlSetThreadPreferredUILanguages@12 @ 0x4B2D64B0
 * Callers:
 *     _RtlSetThreadPreferredUILanguages2@16 @ 0x4B2D66B0 (_RtlSetThreadPreferredUILanguages2@16.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _LdrpCreateLangFallbackList@16 @ 0x4B2D2D36 (_LdrpCreateLangFallbackList@16.c)
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76 (_RtlpMuiRegAddMultiSzToLangFallbackList@28.c)
 *     _RtlpMuiRegDupLanguageList@8 @ 0x4B2D5E04 (_RtlpMuiRegDupLanguageList@8.c)
 *     _RtlpInitializeUserList@4 @ 0x4B2D6661 (_RtlpInitializeUserList@4.c)
 *     _RtlpUpdateTEBLanguage@12 @ 0x4B2EA9DE (_RtlpUpdateTEBLanguage@12.c)
 *     _LdrpMultiSZCchLength@12 @ 0x4B35187C (_LdrpMultiSZCchLength@12.c)
 *     _RtlpCheckMuiMultiStringSafe@8 @ 0x4B3534AE (_RtlpCheckMuiMultiStringSafe@8.c)
 */

int __stdcall RtlSetThreadPreferredUILanguages(int a1, int a2, int *a3)
{
  int v3; // edi
  int result; // eax
  int updated; // ebx
  int v6; // esi
  _DWORD *MergedPrefLanguages; // ecx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  ULONG NumberOfLanguages; // [esp+Ch] [ebp-1Ch] BYREF
  ULONG ReturnLength; // [esp+10h] [ebp-18h] BYREF
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h] BYREF
  unsigned int v18; // [esp+1Ch] [ebp-Ch] BYREF
  PVOID BaseAddress; // [esp+20h] [ebp-8h] BYREF
  char v20; // [esp+27h] [ebp-1h]

  v3 = a1;
  v18 = 0;
  ReturnLength = 0;
  BaseAddress = 0;
  v20 = 0;
  v17 = 0;
  if ( (a1 & 0xFFFF7CF2) != 0 )
    return -1073741811;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      return -1073741811;
  }
  else
  {
    v3 = a1 | 8;
  }
  if ( (v3 & 0x300) == 0x300 )
    return -1073741811;
  v16 = v3 & 1;
  if ( (v3 & 1) != 0 && (v3 & 0x300) != 0 )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v17);
  updated = result;
  if ( result < 0 )
    return result;
  if ( (v3 & 0x301) != 0 )
  {
    if ( !a2 )
    {
      v20 = 1;
      RtlpInitializeUserList(v17);
      v6 = 0;
      goto LABEL_10;
    }
    return -1073741811;
  }
  if ( a2 )
  {
    if ( RtlpCheckMuiMultiStringSafe(a2, (v3 & 4) != 0 ? 4 : 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetThreadPreferredUILanguages is not a valid multi-string!\n");
    if ( (int)LdrpMultiSZCchLength(&v18) < 0 )
      return -1073741811;
    if ( v18 < 2 || *(_WORD *)a2 || *(_WORD *)(a2 + 2) )
    {
      if ( LdrpCreateLangFallbackList(&BaseAddress, v17, 5, 0) < 0 || !BaseAddress )
        return -1073741801;
      updated = RtlpMuiRegAddMultiSzToLangFallbackList(
                  g_RegInfo,
                  (const unsigned __int16 *)a2,
                  v18,
                  v3 | 2,
                  26,
                  5u,
                  (int *)&BaseAddress);
      if ( updated < 0 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        v6 = 0;
        goto LABEL_13;
      }
      v13 = *((unsigned __int16 *)BaseAddress + 2);
      if ( !(_WORD)v13 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        return -1073741823;
      }
      if ( a3 )
        *a3 = v13;
    }
  }
  v6 = 0;
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
    NtCurrentTeb()->PreferredLanguages = 0;
  }
  NtCurrentTeb()->PreferredLanguages = BaseAddress;
LABEL_10:
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
    v8 = MergedPrefLanguages[8];
    if ( (v8 & 0x40) == 0 )
    {
LABEL_12:
      MergedPrefLanguages[8] = v8 | 0x80;
      NtCurrentTeb()->MergedPrefLanguages = MergedPrefLanguages;
      goto LABEL_13;
    }
    v12 = RtlpMuiRegDupLanguageList((int)MergedPrefLanguages);
    MergedPrefLanguages = (_DWORD *)v12;
    if ( v12 )
    {
      *(_DWORD *)(v12 + 32) &= ~0x40u;
      v8 = *(_DWORD *)(v12 + 32);
      goto LABEL_12;
    }
    return -1073741823;
  }
LABEL_13:
  if ( updated || !v20 )
    return updated;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v6 = *(_DWORD *)NtCurrentTeb()->UserPrefLanguages;
  if ( !v6 )
    goto LABEL_26;
  v9 = *(_DWORD *)(v6 + 32);
  if ( !v16 )
  {
    if ( (v3 & 0x100) != 0 )
    {
      if ( (v9 & 0x40) == 0 )
      {
LABEL_21:
        v10 = v9 & 0xFFFFFFF9 | 2;
LABEL_22:
        *(_DWORD *)(v6 + 32) = v10;
        if ( (v3 & 0x8000) != 0 && a3 )
        {
          v11 = *a3;
          if ( *a3 )
          {
            *(_WORD *)(v6 + 34) = 0;
            *(_DWORD *)(v6 + 32) |= v11 << 16;
          }
        }
        goto LABEL_26;
      }
      v6 = RtlpMuiRegDupLanguageList(v6);
      if ( v6 )
      {
        updated = RtlpUpdateTEBLanguage(4);
        if ( !updated )
        {
          *(_DWORD *)(v6 + 32) &= ~0x40u;
          v9 = *(_DWORD *)(v6 + 32);
          goto LABEL_21;
        }
      }
      return -1073741823;
    }
    if ( (v9 & 0x40) != 0 )
    {
      v6 = RtlpMuiRegDupLanguageList(v6);
      if ( !v6 )
        return -1073741823;
      updated = RtlpUpdateTEBLanguage(4);
      if ( updated )
        return -1073741823;
      *(_DWORD *)(v6 + 32) &= ~0x40u;
      v9 = *(_DWORD *)(v6 + 32);
    }
    v10 = v9 & 0xFFFFFFF9 | 4;
    goto LABEL_22;
  }
  *(_DWORD *)(v6 + 32) = v9 & 0xFFFFFFF9;
LABEL_26:
  RtlGetThreadPreferredUILanguages(v3 | 0x30, &NumberOfLanguages, 0, &ReturnLength);
  return updated;
}
