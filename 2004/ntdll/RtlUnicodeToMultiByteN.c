/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x180061320
 * Callers:
 *     RtlUnicodeStringToAnsiString @ 0x180061200 (RtlUnicodeStringToAnsiString.c)
 *     wcstombs @ 0x180092360 (wcstombs.c)
 *     _wctomb_s_l @ 0x180095FD0 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x18009883C (_safecrt_wctomb_s.c)
 *     EtwpAddDebugInfoEvents @ 0x1801114A4 (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18005A9B0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __cdecl RtlUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  PCHAR v5; // r10
  ULONG v6; // ecx
  __int64 v7; // r11
  __int64 v8; // r8
  __int64 v9; // rax
  ULONG *v11; // rax
  int v12; // ebx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int16 v15; // di
  ULONG v16; // eax
  char v17; // [rsp+30h] [rbp-18h] BYREF

  v5 = MultiByteString;
  if ( NlsActiveCodePageIsUTF8 )
  {
    v11 = (ULONG *)&v17;
    if ( BytesInMultiByteString )
      v11 = BytesInMultiByteString;
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(MultiByteString, MaxBytesInMultiByteString, v11, UnicodeString, BytesInUnicodeString);
    else
      *v11 = 0;
  }
  else
  {
    v6 = BytesInUnicodeString >> 1;
    if ( NlsMbCodePageTag )
    {
      v12 = (int)v5;
      if ( v6 )
      {
        v13 = NlsUnicodeToMbAnsiData;
        do
        {
          if ( !MaxBytesInMultiByteString )
            break;
          v14 = *UnicodeString++;
          v15 = *(_WORD *)(v13 + 2 * v14);
          if ( HIBYTE(v15) )
          {
            v16 = MaxBytesInMultiByteString--;
            if ( v16 < 2 )
              break;
            *v5++ = HIBYTE(v15);
          }
          *v5 = v15;
          --MaxBytesInMultiByteString;
          ++v5;
          --v6;
        }
        while ( v6 );
      }
      if ( BytesInMultiByteString )
        *BytesInMultiByteString = (_DWORD)v5 - v12;
    }
    else
    {
      if ( v6 < MaxBytesInMultiByteString )
        MaxBytesInMultiByteString = BytesInUnicodeString >> 1;
      if ( BytesInMultiByteString )
        *BytesInMultiByteString = MaxBytesInMultiByteString;
      v7 = NlsUnicodeToAnsiData;
      if ( MaxBytesInMultiByteString )
      {
        v8 = MaxBytesInMultiByteString;
        do
        {
          v9 = *UnicodeString++;
          *v5++ = *(_BYTE *)(v9 + v7);
          --v8;
        }
        while ( v8 );
      }
    }
  }
  return 0;
}
