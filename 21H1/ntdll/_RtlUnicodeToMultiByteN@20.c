/*
 * XREFs of _RtlUnicodeToMultiByteN@20 @ 0x4B2E0D70
 * Callers:
 *     _RtlUnicodeStringToAnsiString@12 @ 0x4B2E0C90 (_RtlUnicodeStringToAnsiString@12.c)
 *     _EtwpAddDebugInfoEvents@12 @ 0x4B2EDFF4 (_EtwpAddDebugInfoEvents@12.c)
 *     _wcstombs @ 0x4B2FACA0 (_wcstombs.c)
 *     __wctomb_s_l @ 0x4B2FED67 (__wctomb_s_l.c)
 *     __safecrt_wctomb_s @ 0x4B301240 (__safecrt_wctomb_s.c)
 * Callees:
 *     _RtlUnicodeToUTF8N@20 @ 0x4B2E4640 (_RtlUnicodeToUTF8N@20.c)
 */

NTSTATUS __cdecl RtlUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // ecx
  int v6; // esi
  ULONG i; // edx
  ULONG *v9; // eax
  PCHAR v10; // edx
  PCHAR v11; // edi
  PCWCH v12; // edi
  ULONG v13; // esi
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // eax
  PCHAR v18; // [esp+0h] [ebp-8h] BYREF
  unsigned int v19; // [esp+4h] [ebp-4h]

  if ( NlsActiveCodePageIsUTF8 )
  {
    v9 = BytesInMultiByteString;
    if ( !BytesInMultiByteString )
      v9 = (ULONG *)&v18;
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(MultiByteString, MaxBytesInMultiByteString, v9, UnicodeString, BytesInUnicodeString);
    else
      *v9 = 0;
  }
  else
  {
    v5 = BytesInUnicodeString >> 1;
    if ( NlsMbCodePageTag )
    {
      v10 = MultiByteString;
      v11 = MultiByteString;
      v18 = MultiByteString;
      if ( v5 )
      {
        v12 = UnicodeString;
        v13 = MaxBytesInMultiByteString;
        do
        {
          if ( !v13 )
            break;
          v14 = *(unsigned __int16 *)v12++;
          v15 = *(unsigned __int16 *)(NlsUnicodeToMbAnsiData + 2 * v14);
          v19 = v15;
          v16 = v15 >> 8;
          if ( BYTE1(v15) )
          {
            v17 = v13--;
            if ( v17 < 2 )
              break;
            LOBYTE(v15) = v19;
            *v10++ = v16;
          }
          *v10++ = v15;
          --v13;
          --v5;
        }
        while ( v5 );
        v11 = v18;
      }
      if ( BytesInMultiByteString )
        *BytesInMultiByteString = v10 - v11;
    }
    else
    {
      if ( v5 >= MaxBytesInMultiByteString )
        v5 = MaxBytesInMultiByteString;
      if ( BytesInMultiByteString )
        *BytesInMultiByteString = v5;
      v6 = NlsUnicodeToAnsiData;
      for ( i = 0; i < v5; ++i )
        MultiByteString[i] = *(_BYTE *)((unsigned __int16)UnicodeString[i] + v6);
    }
  }
  return 0;
}
