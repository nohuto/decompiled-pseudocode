/*
 * XREFs of _RtlpMuiRegGetFallbackLanguageInfoByLangId@20 @ 0x4B36B3BE
 * Callers:
 *     _RtlGetUILanguageInfo@20 @ 0x4B352940 (_RtlGetUILanguageInfo@20.c)
 *     _RtlpMuiRegGetFallbackLanguageInfoByName@20 @ 0x4B36B525 (_RtlpMuiRegGetFallbackLanguageInfoByName@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlpMuiRegGetFallbackLanguageInfoByName@20 @ 0x4B36B525 (_RtlpMuiRegGetFallbackLanguageInfoByName@20.c)
 */

int __fastcall RtlpMuiRegGetFallbackLanguageInfoByLangId(int a1, int a2, unsigned __int16 a3, char a4, _WORD *a5)
{
  _WORD *v6; // ebx
  __int16 i; // dx
  int v8; // eax
  PVOID Heap; // edi
  int FallbackLanguageInfoByName; // esi
  SIZE_T v12; // [esp-4h] [ebp-28h]
  _UNICODE_STRING String; // [esp+Ch] [ebp-18h] BYREF
  int v14; // [esp+14h] [ebp-10h]
  unsigned int v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]

  v14 = a1;
  if ( !a1 )
    return -1073741811;
  if ( !a2 )
    return -1073741811;
  v6 = a5;
  if ( !a5 )
    return -1073741811;
  v17 = 0;
  for ( i = 0; i < 8; i += 2 )
  {
    v8 = *(unsigned __int16 *)(a2 + 8);
    LOWORD(v8) = (unsigned __int16)v8 >> i;
    v15 = v8 & 0xFFFF0003;
    v16 = *(__int16 *)(a2 + 2 * (__int16)v17 + 12);
    if ( (v8 & 3) == 2 )
    {
      v15 = *(_DWORD *)(*(_DWORD *)(v14 + 20) + 12);
      v6 = a5;
      if ( *(_WORD *)(28 * v16 + v15 + 4) == a3 )
      {
        qmemcpy(a5, (const void *)(v15 + 28 * v16), 0x1Cu);
        return 0;
      }
    }
    else if ( v16 != a3 && (v8 & 3) != 1 )
    {
      memset(v6, 0, 0x1Cu);
      v6[2] = a3;
      v6[3] = -1;
      return 0;
    }
    ++v17;
  }
  LODWORD(v12) = 170;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v12);
  if ( !Heap )
    return -1073741801;
  if ( a4
    && *(__int16 *)(a2 + 6) > 0
    && (String.Buffer = (wchar_t *)Heap, *(_DWORD *)&String.Length = 11141120, RtlLCIDToCultureName(a3, &String)) )
  {
    FallbackLanguageInfoByName = RtlpMuiRegGetFallbackLanguageInfoByName((PCWSTR)String.Buffer, 0, (int)v6);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return FallbackLanguageInfoByName;
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return -1073741772;
  }
}
