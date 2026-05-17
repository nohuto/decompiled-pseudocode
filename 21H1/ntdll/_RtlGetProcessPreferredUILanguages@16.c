/*
 * XREFs of _RtlGetProcessPreferredUILanguages@16 @ 0x4B352330
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _LdrpConvertLangFallbackListToMultiSz@28 @ 0x4B2D3319 (_LdrpConvertLangFallbackListToMultiSz@28.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpInitMuiCriticalSection@8 @ 0x4B2D5E84 (_RtlpInitMuiCriticalSection@8.c)
 */

signed int __stdcall RtlGetProcessPreferredUILanguages(int a1, _DWORD *a2, _DWORD *a3, unsigned int *a4)
{
  char v4; // si
  signed int result; // eax
  int v6; // ebx
  unsigned int v7; // esi
  int v8; // [esp+8h] [ebp-4h] BYREF

  v8 = 0;
  if ( !a4 || !a2 || !a3 && *a4 )
    return -1073741811;
  v4 = a1;
  if ( !a1 )
  {
    v4 = 8;
    goto LABEL_8;
  }
  if ( (a1 & 0xFFFFFFF3) != 0 || (a1 & 0xC) == 12 )
    return -1073741811;
LABEL_8:
  result = RtlpCreateProcessRegistryInfo(&v8);
  if ( result >= 0 )
  {
    v6 = v8;
    if ( !*(_DWORD *)(v8 + 44) )
      return LdrpConvertLangFallbackListToMultiSz(0, v8, a3, a4, v4, 0, a2);
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection((int)&RegistryInfoCritSect);
    v7 = LdrpConvertLangFallbackListToMultiSz(*(_DWORD *)(v6 + 44), v6, a3, a4, v4, 0, a2);
    RtlLeaveCriticalSection((int)&RegistryInfoCritSect);
    return v7;
  }
  return result;
}
