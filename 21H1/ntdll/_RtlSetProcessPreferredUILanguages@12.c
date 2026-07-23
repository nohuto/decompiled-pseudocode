/*
 * XREFs of _RtlSetProcessPreferredUILanguages@12 @ 0x4B352E10
 * Callers:
 *     <none>
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76 (_RtlpMuiRegAddMultiSzToLangFallbackList@28.c)
 *     _RtlpInitMuiCriticalSection@8 @ 0x4B2D5E84 (_RtlpInitMuiCriticalSection@8.c)
 *     _LdrpMultiSZCchLength@12 @ 0x4B35187C (_LdrpMultiSZCchLength@12.c)
 *     _RtlpCheckMuiMultiStringSafe@8 @ 0x4B3534AE (_RtlpCheckMuiMultiStringSafe@8.c)
 */

int __stdcall RtlSetProcessPreferredUILanguages(int a1, unsigned __int16 *a2, _DWORD *a3)
{
  char v4; // si
  int v5; // edi
  PVOID v6; // ecx
  PVOID v7; // esi
  int v8; // eax
  int v9; // eax
  void *v10; // ebx
  int v11; // eax
  PVOID BaseAddress; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  v14 = 0;
  BaseAddress = 0;
  if ( NtCurrentTeb()->IsImpersonating )
    return -1073741555;
  v4 = a1;
  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFF3) != 0 || (a1 & 0xC) == 12 )
      return -1073741811;
  }
  else
  {
    v4 = 8;
  }
  v5 = RtlpCreateProcessRegistryInfo(&v14);
  if ( v5 >= 0 )
  {
    if ( !a2 )
      goto LABEL_23;
    if ( RtlpCheckMuiMultiStringSafe(a2, (v4 & 4) != 0 ? 4 : 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetProcessPreferredUILanguages is not a valid"
        " multi-string!\n");
    if ( LdrpMultiSZCchLength(a2, &v13) < 0 )
      return -1073741811;
    if ( v13 < 2 || *a2 || a2[1] )
    {
      v5 = RtlpMuiRegAddMultiSzToLangFallbackList(g_RegInfo, a2, v13, v4 | 2, 26, 5u, (int *)&BaseAddress);
      if ( v5 < 0 )
      {
        v6 = BaseAddress;
LABEL_28:
        RtlpMuiRegFreeLanguageList(v6);
        return v5;
      }
      v7 = BaseAddress;
      if ( !BaseAddress || (v8 = *((unsigned __int16 *)BaseAddress + 2), !(_WORD)v8) )
      {
        RtlpMuiRegFreeLanguageList(BaseAddress);
        return -1073741823;
      }
      if ( a3 )
        *a3 = v8;
    }
    else
    {
LABEL_23:
      v7 = BaseAddress;
    }
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    v9 = v14;
    v10 = *(void **)(v14 + 44);
    *(_DWORD *)(v14 + 44) = v7;
    ++*(_DWORD *)(v9 + 16);
    v11 = *(_DWORD *)(v9 + 56);
    if ( v11 )
      *(_DWORD *)(v11 + 32) |= 0x80u;
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    if ( !v10 )
      return v5;
    v6 = v10;
    goto LABEL_28;
  }
  return v5;
}
