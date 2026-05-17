/*
 * XREFs of _RtlpFilterandReplaceConsoleLanguages@20 @ 0x4B2D62B9
 * Callers:
 *     _LdrpMergeLangFallbackLists@36 @ 0x4B2D4925 (_LdrpMergeLangFallbackLists@36.c)
 * Callees:
 *     _LdrpCreateLangFallbackList@16 @ 0x4B2D2D36 (_LdrpCreateLangFallbackList@16.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 *     _GetNameFromLangListNode@12 @ 0x4B2D4413 (_GetNameFromLangListNode@12.c)
 *     _LdrpLangFallbackListAppendNode@24 @ 0x4B2D5467 (_LdrpLangFallbackListAppendNode@24.c)
 *     _RtlpConsoleFallbackNameFromLocaleName@24 @ 0x4B2D61DE (_RtlpConsoleFallbackNameFromLocaleName@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpFilterandReplaceConsoleLanguages(int a1, _DWORD *a2, char a3, unsigned __int16 a4, int *a5)
{
  int NameFromLangListNode; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int appended; // eax
  int v11; // edi
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  UNICODE_STRING v16; // [esp+10h] [ebp-E4h] BYREF
  int v17; // [esp+18h] [ebp-DCh]
  int v18; // [esp+1Ch] [ebp-D8h] BYREF
  unsigned int v19; // [esp+20h] [ebp-D4h]
  __int16 v20; // [esp+24h] [ebp-D0h] BYREF
  UNICODE_STRING DestinationString; // [esp+28h] [ebp-CCh] BYREF
  int v22; // [esp+30h] [ebp-C4h]
  _BYTE v23[181]; // [esp+37h] [ebp-BDh] BYREF

  v18 = 0;
  v17 = a1;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&v16.Length = 0;
  v16.Buffer = 0;
  memset(v23, 0, 171);
  if ( !a1 || !a2 || !a5 || !*a5 )
    return -1073741811;
  NameFromLangListNode = LdrpCreateLangFallbackList(&v18, (int)a2, 25, 0);
  if ( NameFromLangListNode >= 0 )
  {
    v7 = v17;
    v8 = 0;
    v19 = 0;
    if ( !*(_WORD *)(v17 + 4) )
    {
LABEL_14:
      v11 = v18;
      v19 = 0;
      if ( *(_WORD *)(v18 + 4) )
      {
        v13 = 0;
        v22 = 0;
        do
        {
          *(_DWORD *)&DestinationString.Length = 11141120;
          DestinationString.Buffer = (wchar_t *)&v23[1];
          NameFromLangListNode = GetNameFromLangListNode(
                                   (int)a2,
                                   (_WORD *)(v13 + *(_DWORD *)(v11 + 16)),
                                   &DestinationString);
          if ( NameFromLangListNode < 0 )
            break;
          NameFromLangListNode = LdrpLangFallbackListAppendNode(a5, a2, 0, &v20, DestinationString.Buffer, v14);
          v15 = *(unsigned __int16 *)(v11 + 4);
          v13 = v22 + 6;
          ++v19;
          v22 += 6;
        }
        while ( v19 < v15 );
      }
      goto LABEL_15;
    }
    v22 = 0;
    while ( 1 )
    {
      *(_DWORD *)&DestinationString.Length = 11141120;
      DestinationString.Buffer = (wchar_t *)&v23[1];
      NameFromLangListNode = GetNameFromLangListNode((int)a2, (_WORD *)(v8 + *(_DWORD *)(v7 + 16)), &DestinationString);
      if ( NameFromLangListNode < 0 )
        break;
      *(_DWORD *)&v16.Length = 0;
      v16.Buffer = 0;
      if ( RtlpConsoleFallbackNameFromLocaleName(DestinationString.Buffer, a3, v23, &v16, (int)a2, a4) >= 0 && v23[0] )
        appended = LdrpLangFallbackListAppendNode(&v18, a2, 0, &v20, v16.Buffer, v9);
      else
        appended = LdrpLangFallbackListAppendNode(a5, a2, 0, &v20, DestinationString.Buffer, v9);
      NameFromLangListNode = appended;
      if ( appended < 0 )
        break;
      v22 += 6;
      ++v19;
      v7 = v17;
      v8 = v22;
      if ( v19 >= *(unsigned __int16 *)(v17 + 4) )
        goto LABEL_14;
    }
  }
  v11 = v18;
LABEL_15:
  if ( v11 )
    RtlpMuiRegFreeLanguageList((_BYTE *)v11);
  if ( NameFromLangListNode < 0 )
  {
    if ( *a5 )
      *(_WORD *)(*a5 + 4) = 0;
  }
  return NameFromLangListNode;
}
