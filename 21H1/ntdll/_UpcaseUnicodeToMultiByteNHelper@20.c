/*
 * XREFs of _UpcaseUnicodeToMultiByteNHelper@20 @ 0x4B34466E
 * Callers:
 *     _RtlUpcaseUnicodeToMultiByteN@20 @ 0x4B2E0B90 (_RtlUpcaseUnicodeToMultiByteN@20.c)
 *     _RtlUpcaseUnicodeToOemN@20 @ 0x4B3444F0 (_RtlUpcaseUnicodeToOemN@20.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 */

unsigned int __fastcall UpcaseUnicodeToMultiByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  _BYTE *v6; // esi
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned __int16 v12; // cx
  __int16 v13; // dx
  unsigned int v14; // eax
  _BYTE *v16; // [esp+Ch] [ebp-4h]

  v5 = a5;
  v16 = a1;
  v6 = a1;
  if ( a5 )
  {
    do
    {
      if ( !a2 )
        break;
      v8 = *a4++;
      v9 = *(unsigned __int16 *)(NlsUnicodeToMbAnsiData + 2 * v8);
      v10 = (unsigned __int8)v9;
      v11 = (unsigned __int16)NlsLeadByteInfoTable[v9 >> 8];
      if ( (_WORD)v11 )
        v12 = *(_WORD *)(NlsMbAnsiCodePageTables + 2 * (v10 + v11));
      else
        v12 = *(_WORD *)(NlsAnsiToUnicodeData + 2 * v10);
      v13 = *(_WORD *)(NlsUnicodeToMbAnsiData + 2 * NLS_UPCASE(v12));
      if ( HIBYTE(v13) )
      {
        v14 = a2--;
        if ( v14 < 2 )
          break;
        *v6++ = HIBYTE(v13);
      }
      *v6++ = v13;
      --a2;
      --v5;
    }
    while ( v5 );
    a1 = v16;
  }
  if ( a3 )
    *a3 = v6 - a1;
  return a2 < v5 ? 0x80000005 : 0;
}
