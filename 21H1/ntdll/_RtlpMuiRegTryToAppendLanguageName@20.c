/*
 * XREFs of _RtlpMuiRegTryToAppendLanguageName@20 @ 0x4B2E73F5
 * Callers:
 *     _RtlpMuiRegTryToAppendLanguageToMuiszFromLangList@24 @ 0x4B2D3477 (_RtlpMuiRegTryToAppendLanguageToMuiszFromLangList@24.c)
 *     _RtlpMuiRegGetFallbackLanguagesAsMultiSZ@20 @ 0x4B36B664 (_RtlpMuiRegGetFallbackLanguagesAsMultiSZ@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpLangNameInMultiSzString_Size@12 @ 0x4B2D2CBB (_RtlpLangNameInMultiSzString_Size@12.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpMuiRegTryToAppendLanguageName(int a1, int a2, unsigned int *a3, wchar_t *String1, unsigned int a5)
{
  wchar_t *Heap; // ecx
  __int16 v8; // ax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  int v12; // eax
  UNICODE_STRING DestinationString; // [esp+Ch] [ebp-18h] BYREF
  wchar_t *v14; // [esp+14h] [ebp-10h]
  unsigned int v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-8h]

  v16 = 0;
  if ( !a2 || !a1 || !a3 )
    return -1073741811;
  v15 = *a3;
  Heap = (wchar_t *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 170);
  v14 = Heap;
  if ( Heap )
  {
    v8 = *(_WORD *)(a2 + 6);
    if ( v8 <= 0 )
    {
      v12 = *(unsigned __int16 *)(a2 + 4);
      DestinationString.Buffer = Heap;
      *(_DWORD *)&DestinationString.Length = 11141120;
      if ( !RtlLCIDToCultureName(v12, &DestinationString.Length) )
      {
        v16 = -1073741595;
        goto LABEL_14;
      }
    }
    else
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 16)
               + 2 * *(__int16 *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 12) + 2 * v8)));
    }
    v9 = a5;
    if ( *a3 && *a3 <= a5 )
    {
      if ( RtlpLangNameInMultiSzString_Size(String1, DestinationString.Buffer, *a3) )
        goto LABEL_14;
      v9 = a5;
    }
    v10 = (DestinationString.Length >> 1) + v15 + 1;
    if ( String1 && v15 < v10 )
    {
      if ( v10 < v9 )
      {
        memcpy(&String1[v15], DestinationString.Buffer, DestinationString.Length);
        String1[v10 - 1] = 0;
        goto LABEL_13;
      }
    }
    else if ( v10 < v9 )
    {
LABEL_13:
      *a3 = v10;
LABEL_14:
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v14);
      return v16;
    }
    if ( String1 )
      v16 = -1073741789;
    goto LABEL_13;
  }
  return -1073741801;
}
