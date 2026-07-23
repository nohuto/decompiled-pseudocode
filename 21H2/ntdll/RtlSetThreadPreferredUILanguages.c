/*
 * XREFs of RtlSetThreadPreferredUILanguages @ 0x18003EC50
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x18003EC00 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpCreateLangFallbackList @ 0x180038974 (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003ACBC (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     LdrpMultiSZCchLength @ 0x18003EF8C (LdrpMultiSZCchLength.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18003F044 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpInitializeUserList @ 0x18003F0BC (RtlpInitializeUserList.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpMuiRegDupLanguageList @ 0x180079530 (RtlpMuiRegDupLanguageList.c)
 *     RtlpUpdateTEBLanguage @ 0x18007D2B0 (RtlpUpdateTEBLanguage.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages(int a1, __int64 a2, int *a3)
{
  int v5; // esi
  char v6; // r12
  __int64 result; // rax
  int updated; // edi
  __int64 v9; // rdx
  _DWORD *MergedPrefLanguages; // rcx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  ULONG NumberOfLanguages; // [rsp+40h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+40h] BYREF
  ULONG ReturnLength; // [rsp+B8h] [rbp+58h] BYREF

  v23 = 0;
  ReturnLength = 0;
  v5 = a1;
  BaseAddress = 0LL;
  v6 = 0;
  v22 = 0LL;
  if ( (a1 & 0xFFFF7CF2) != 0 )
    return 3221225485LL;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      return 3221225485LL;
  }
  else
  {
    v5 = a1 | 8;
  }
  if ( (v5 & 0x300) == 0x300 || (v5 & 1) != 0 && (v5 & 0x300) != 0 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(&v22);
  updated = result;
  if ( (int)result < 0 )
    return result;
  if ( (v5 & 0x301) != 0 )
  {
    if ( !a2 )
    {
      v6 = 1;
      RtlpInitializeUserList(v22);
      goto LABEL_18;
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (int)RtlpCheckMuiMultiStringSafe(a2, (-(__int64)((v5 & 4) != 0) & 0xFFFFFFFFFFFFFFAFuLL) + 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetThreadPreferredUILanguages is not a valid multi-string!\n");
    if ( (int)LdrpMultiSZCchLength(a2, v9, &v23) < 0 )
      return (unsigned int)-1073741811;
    if ( v23 < 2 || *(_WORD *)a2 || *(_WORD *)(a2 + 2) )
    {
      if ( (int)LdrpCreateLangFallbackList((__int64 *)&BaseAddress, v22, 5u, 0) < 0 || !BaseAddress )
        return (unsigned int)-1073741801;
      updated = RtlpMuiRegAddMultiSzToLangFallbackList(
                  (__int64)g_RegInfo,
                  (const WCHAR *)a2,
                  v23,
                  v5 | 2u,
                  26,
                  5u,
                  (__int64 *)&BaseAddress);
      if ( updated < 0 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        goto LABEL_21;
      }
      v16 = *((unsigned __int16 *)BaseAddress + 2);
      if ( !(_WORD)v16 )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = v16;
    }
  }
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
    NtCurrentTeb()->PreferredLanguages = 0LL;
  }
  NtCurrentTeb()->PreferredLanguages = BaseAddress;
LABEL_18:
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
    v11 = MergedPrefLanguages[10];
    if ( (v11 & 0x40) == 0 )
    {
LABEL_20:
      MergedPrefLanguages[10] = v11 | 0x80;
      NtCurrentTeb()->MergedPrefLanguages = MergedPrefLanguages;
      goto LABEL_21;
    }
    v17 = RtlpMuiRegDupLanguageList(MergedPrefLanguages);
    MergedPrefLanguages = (_DWORD *)v17;
    if ( v17 )
    {
      *(_DWORD *)(v17 + 40) &= ~0x40u;
      v11 = *(_DWORD *)(v17 + 40);
      goto LABEL_20;
    }
    return (unsigned int)-1073741823;
  }
LABEL_21:
  if ( updated || !v6 )
    return (unsigned int)updated;
  if ( NtCurrentTeb()->UserPrefLanguages )
    v12 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  else
    v12 = 0LL;
  if ( !v12 )
    goto LABEL_40;
  v13 = *(_DWORD *)(v12 + 40);
  if ( (v5 & 1) == 0 )
  {
    if ( (v5 & 0x100) != 0 )
    {
      if ( (v13 & 0x40) == 0 )
      {
LABEL_35:
        v14 = v13 & 0xFFFFFFF9 | 2;
LABEL_36:
        *(_DWORD *)(v12 + 40) = v14;
        if ( (v5 & 0x8000) != 0 && a3 )
        {
          v15 = *a3;
          if ( *a3 )
          {
            *(_WORD *)(v12 + 42) = 0;
            *(_DWORD *)(v12 + 40) |= v15 << 16;
          }
        }
        goto LABEL_40;
      }
      v18 = RtlpMuiRegDupLanguageList(v12);
      v12 = v18;
      if ( v18 )
      {
        updated = RtlpUpdateTEBLanguage(v18, 0LL, 4LL);
        if ( !updated )
        {
          *(_DWORD *)(v12 + 40) &= ~0x40u;
          v13 = *(_DWORD *)(v12 + 40);
          goto LABEL_35;
        }
      }
      return 3221225473LL;
    }
    if ( (v13 & 0x40) != 0 )
    {
      v19 = RtlpMuiRegDupLanguageList(v12);
      v12 = v19;
      if ( !v19 )
        return 3221225473LL;
      updated = RtlpUpdateTEBLanguage(v19, 0LL, 4LL);
      if ( updated )
        return 3221225473LL;
      *(_DWORD *)(v12 + 40) &= ~0x40u;
      v13 = *(_DWORD *)(v12 + 40);
    }
    v14 = v13 & 0xFFFFFFF9 | 4;
    goto LABEL_36;
  }
  *(_DWORD *)(v12 + 40) = v13 & 0xFFFFFFF9;
LABEL_40:
  RtlGetThreadPreferredUILanguages(v5 | 0x30, &NumberOfLanguages, 0LL, &ReturnLength);
  return (unsigned int)updated;
}
