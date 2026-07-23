/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x4B2D44A1
 * Callers:
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _GetNameFromLangListNode@12 @ 0x4B2D4413 (_GetNameFromLangListNode@12.c)
 *     RtlGetNeutralFallback @ 0x4B2D4663 (RtlGetNeutralFallback.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _LdrpLangFallbackListAppendNode@24 @ 0x4B2D5467 (_LdrpLangFallbackListAppendNode@24.c)
 *     _RtlpGetSystemDefaultUILanguage@8 @ 0x4B2D5D90 (_RtlpGetSystemDefaultUILanguage@8.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 */

int __fastcall RtlpAddNeutralsToMergedList(char a1, DWORD *a2, int a3, _DWORD *a4)
{
  int NameFromLangListNode; // esi
  wchar_t *Heap; // eax
  wchar_t *v7; // ebx
  int v8; // eax
  int v9; // ecx
  _WORD *v10; // edx
  int v11; // ecx
  int v12; // ecx
  SIZE_T v14; // [esp-4h] [ebp-3Ch]
  _UNICODE_STRING String; // [esp+10h] [ebp-28h] BYREF
  _UNICODE_STRING DestinationString; // [esp+18h] [ebp-20h] BYREF
  _UNICODE_STRING ParentLocaleName; // [esp+20h] [ebp-18h] BYREF
  unsigned int v18; // [esp+28h] [ebp-10h]
  LANGID DefaultUILanguageId[2]; // [esp+2Ch] [ebp-Ch] BYREF
  int v20; // [esp+30h] [ebp-8h] BYREF
  char v21; // [esp+36h] [ebp-2h]
  int var1; // [esp+37h] [ebp-1h] BYREF

  v21 = a1;
  LOWORD(v20) = 0;
  NameFromLangListNode = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&ParentLocaleName.Length = 0;
  ParentLocaleName.Buffer = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return -1073741811;
  LODWORD(v14) = 510;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v14);
  v7 = Heap;
  if ( !Heap )
    return -1073741801;
  *(_DWORD *)&String.Length = 11141120;
  String.Buffer = Heap + 85;
  if ( RtlpGetSystemDefaultUILanguage((LANGID)DefaultUILanguageId, a2) >= 0
    && RtlLCIDToCultureName(DefaultUILanguageId[0], &String) )
  {
    v8 = a3;
    v9 = 0;
    v18 = 0;
    if ( *(_WORD *)(a3 + 4) )
    {
      *(_DWORD *)DefaultUILanguageId = 0;
      do
      {
        DestinationString.Buffer = v7;
        v10 = (_WORD *)(v9 + *(_DWORD *)(v8 + 16));
        *(_DWORD *)&DestinationString.Length = 11141120;
        NameFromLangListNode = GetNameFromLangListNode((int)a2, v10, &DestinationString);
        if ( NameFromLangListNode < 0 )
          break;
        NameFromLangListNode = LdrpLangFallbackListAppendNode(0, (int)&v20, (PCWSTR)DestinationString.Buffer, v11);
        if ( NameFromLangListNode < 0 )
          break;
        if ( v21 || !_wcsicmp(DestinationString.Buffer, String.Buffer) )
        {
          ParentLocaleName.Buffer = v7 + 170;
          LOBYTE(var1) = 0;
          *(_DWORD *)&ParentLocaleName.Length = 11141120;
          NameFromLangListNode = RtlGetNeutralFallback(&ParentLocaleName, (int)&var1);
          if ( NameFromLangListNode < 0 )
            break;
          do
          {
            if ( !ParentLocaleName.Length || (_BYTE)var1 )
              break;
            NameFromLangListNode = LdrpLangFallbackListAppendNode(0, (int)&v20, (PCWSTR)ParentLocaleName.Buffer, v12);
            if ( NameFromLangListNode < 0 )
              goto LABEL_20;
            NameFromLangListNode = RtlGetNeutralFallback(&ParentLocaleName, (int)&var1);
          }
          while ( NameFromLangListNode >= 0 );
          if ( NameFromLangListNode < 0 )
            break;
        }
        *(_DWORD *)DefaultUILanguageId += 6;
        ++v18;
        v8 = a3;
        v9 = *(_DWORD *)DefaultUILanguageId;
      }
      while ( v18 < *(unsigned __int16 *)(a3 + 4) );
    }
  }
  else
  {
    NameFromLangListNode = -1073741823;
  }
LABEL_20:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  return NameFromLangListNode;
}
