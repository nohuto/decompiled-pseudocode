/*
 * XREFs of _RtlpMuiRegGetInstalledLanguageIndexByLangId@16 @ 0x4B2D4FD4
 * Callers:
 *     __RtlpMuiRegValidateInstalled@4 @ 0x4B2AC387 (__RtlpMuiRegValidateInstalled@4.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _LdrpMergeLangFallbackLists@36 @ 0x4B2D4925 (_LdrpMergeLangFallbackLists@36.c)
 *     _RtlpMuiRegGetInstalledLanguageIndex@16 @ 0x4B2D4EAF (_RtlpMuiRegGetInstalledLanguageIndex@16.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlGetUILanguageInfo@20 @ 0x4B352940 (_RtlGetUILanguageInfo@20.c)
 *     _RtlpRefreshCachedUILanguage@8 @ 0x4B36BFF0 (_RtlpRefreshCachedUILanguage@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 */

int __fastcall RtlpMuiRegGetInstalledLanguageIndexByLangId(int a1, unsigned __int16 a2, char a3, _WORD *a4)
{
  int InstalledLanguageIndexByName; // esi
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  _WORD *v9; // edx
  wchar_t *Heap; // eax
  wchar_t *v12; // edi
  SIZE_T v13; // [esp-4h] [ebp-24h]
  char v14; // [esp+Fh] [ebp-11h]
  int v15; // [esp+10h] [ebp-10h]
  _UNICODE_STRING String; // [esp+18h] [ebp-8h] BYREF

  v14 = 0;
  InstalledLanguageIndexByName = -1073741772;
  if ( !a1 || !a2 )
    return -1073741811;
  if ( a2 == 4096 )
    return -1073741772;
  v6 = *(_DWORD *)(a1 + 20);
  v7 = 0;
  v8 = *(unsigned __int16 *)(v6 + 6);
  v15 = v8;
  if ( !*(_WORD *)(v6 + 6) )
  {
LABEL_12:
    LODWORD(v13) = 170;
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v13);
    v12 = Heap;
    if ( !Heap )
      return -1073741801;
    String.Buffer = Heap;
    *(_DWORD *)&String.Length = 11141120;
    if ( a3 && RtlLCIDToCultureName(a2, &String) )
      InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(a1, (const WCHAR *)String.Buffer, 0, a4);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    if ( v14 && InstalledLanguageIndexByName == -1073741772 )
      return -1073741637;
    return InstalledLanguageIndexByName;
  }
  v9 = *(_WORD **)(v6 + 12);
  while ( v9[2] != a2 )
  {
LABEL_11:
    ++v7;
    v9 += 14;
    if ( v7 >= v8 )
      goto LABEL_12;
  }
  if ( (*v9 & 0x1020) != 0x20 )
  {
    v8 = v15;
    if ( (*v9 & 0x1000) != 0 )
      v14 = 1;
    goto LABEL_11;
  }
  if ( a4 )
    *a4 = v7;
  return 0;
}
