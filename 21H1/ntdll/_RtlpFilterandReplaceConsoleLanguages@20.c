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
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int appended; // eax
  _DWORD *v12; // edi
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // eax
  size_t v17; // [esp-4h] [ebp-F8h]
  _UNICODE_STRING v18; // [esp+10h] [ebp-E4h] BYREF
  int v19; // [esp+18h] [ebp-DCh]
  PVOID BaseAddress; // [esp+1Ch] [ebp-D8h] BYREF
  unsigned int v21; // [esp+20h] [ebp-D4h]
  int v22; // [esp+24h] [ebp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [esp+28h] [ebp-CCh] BYREF
  int v24; // [esp+30h] [ebp-C4h]
  char v25; // [esp+37h] [ebp-BDh] BYREF
  _BYTE v26[180]; // [esp+38h] [ebp-BCh] BYREF

  BaseAddress = 0;
  LODWORD(v17) = 170;
  v19 = a1;
  memset(v26, 0, v17);
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&v18.Length = 0;
  v18.Buffer = 0;
  v25 = 0;
  if ( !a1 || !a2 || !a5 || !*a5 )
    return -1073741811;
  NameFromLangListNode = LdrpCreateLangFallbackList(&BaseAddress, (int)a2, 25, 0);
  if ( NameFromLangListNode >= 0 )
  {
    v8 = v19;
    v9 = 0;
    v21 = 0;
    if ( !*(_WORD *)(v19 + 4) )
    {
LABEL_14:
      v12 = BaseAddress;
      v21 = 0;
      if ( *((_WORD *)BaseAddress + 2) )
      {
        v14 = 0;
        v24 = 0;
        do
        {
          *(_DWORD *)&DestinationString.Length = 11141120;
          DestinationString.Buffer = (wchar_t *)v26;
          NameFromLangListNode = GetNameFromLangListNode((int)a2, (_WORD *)(v14 + v12[4]), &DestinationString);
          if ( NameFromLangListNode < 0 )
            break;
          NameFromLangListNode = LdrpLangFallbackListAppendNode(
                                   a5,
                                   a2,
                                   0,
                                   (__int16 *)&v22,
                                   (PCWSTR)DestinationString.Buffer,
                                   v15);
          v16 = *((unsigned __int16 *)v12 + 2);
          v14 = v24 + 6;
          ++v21;
          v24 += 6;
        }
        while ( v21 < v16 );
      }
      goto LABEL_15;
    }
    v24 = 0;
    while ( 1 )
    {
      *(_DWORD *)&DestinationString.Length = 11141120;
      DestinationString.Buffer = (wchar_t *)v26;
      NameFromLangListNode = GetNameFromLangListNode((int)a2, (_WORD *)(v9 + *(_DWORD *)(v8 + 16)), &DestinationString);
      if ( NameFromLangListNode < 0 )
        break;
      *(_DWORD *)&v18.Length = 0;
      v18.Buffer = 0;
      if ( RtlpConsoleFallbackNameFromLocaleName(DestinationString.Buffer, a3, &v25, &v18, (int)a2, a4) >= 0 && v25 )
        appended = LdrpLangFallbackListAppendNode((int *)&BaseAddress, a2, 0, (__int16 *)&v22, (PCWSTR)v18.Buffer, v10);
      else
        appended = LdrpLangFallbackListAppendNode(a5, a2, 0, (__int16 *)&v22, (PCWSTR)DestinationString.Buffer, v10);
      NameFromLangListNode = appended;
      if ( appended < 0 )
        break;
      v24 += 6;
      ++v21;
      v8 = v19;
      v9 = v24;
      if ( v21 >= *(unsigned __int16 *)(v19 + 4) )
        goto LABEL_14;
    }
  }
  v12 = BaseAddress;
LABEL_15:
  if ( v12 )
    RtlpMuiRegFreeLanguageList(v12);
  if ( NameFromLangListNode < 0 )
  {
    if ( *a5 )
      *(_WORD *)(*a5 + 4) = 0;
  }
  return NameFromLangListNode;
}
