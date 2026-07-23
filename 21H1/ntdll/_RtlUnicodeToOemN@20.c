/*
 * XREFs of _RtlUnicodeToOemN@20 @ 0x4B2E0AF0
 * Callers:
 *     _RtlUnicodeStringToOemString@12 @ 0x4B2E09B0 (_RtlUnicodeStringToOemString@12.c)
 *     _RtlUnicodeStringToCountedOemString@12 @ 0x4B34DC20 (_RtlUnicodeStringToCountedOemString@12.c)
 * Callees:
 *     _RtlpIsUtf8Process@4 @ 0x4B2E0C43 (_RtlpIsUtf8Process@4.c)
 *     _RtlUnicodeToUTF8N@20 @ 0x4B2E4640 (_RtlUnicodeToUTF8N@20.c)
 */

NTSTATUS __cdecl RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v5; // ecx
  ULONG v6; // edx
  ULONG v7; // esi
  int v8; // ebx
  ULONG v9; // edi
  ULONG *v11; // eax
  NTSTATUS v12; // esi
  PCHAR v13; // esi
  PCHAR v14; // ebx
  PCWCH v15; // edi
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // eax
  unsigned int v20; // [esp+4h] [ebp-8h] BYREF
  ULONG v21; // [esp+8h] [ebp-4h]

  if ( (unsigned __int8)RtlpIsUtf8Process(1) )
  {
    v11 = BytesInOemString;
    if ( !BytesInOemString )
      v11 = &v20;
    v12 = 0;
    if ( BytesInUnicodeString )
    {
      if ( RtlUnicodeToUTF8N(OemString, MaxBytesInOemString, v11, UnicodeString, BytesInUnicodeString) == -1073741789 )
        return -2147483643;
    }
    else
    {
      *v11 = 0;
    }
    return v12;
  }
  else
  {
    v5 = MaxBytesInOemString;
    v6 = BytesInUnicodeString >> 1;
    v21 = BytesInUnicodeString >> 1;
    if ( NlsMbOemCodePageTag )
    {
      v13 = OemString;
      v14 = OemString;
      v21 = (ULONG)OemString;
      if ( v6 )
      {
        v15 = UnicodeString;
        do
        {
          if ( !v5 )
            break;
          v16 = *(unsigned __int16 *)v15++;
          v17 = *(unsigned __int16 *)(NlsUnicodeToMbOemData + 2 * v16);
          v20 = v17;
          v18 = v17 >> 8;
          if ( BYTE1(v17) )
          {
            v19 = v5--;
            if ( v19 < 2 )
              break;
            LOBYTE(v17) = v20;
            *v13++ = v18;
          }
          *v13++ = v17;
          --v5;
          --v6;
        }
        while ( v6 );
        v14 = (PCHAR)v21;
      }
      if ( BytesInOemString )
        *BytesInOemString = v13 - v14;
    }
    else
    {
      v7 = BytesInUnicodeString >> 1;
      if ( v6 >= MaxBytesInOemString )
        v7 = MaxBytesInOemString;
      if ( BytesInOemString )
        *BytesInOemString = v7;
      v8 = NlsUnicodeToOemData;
      v9 = 0;
      if ( v7 )
      {
        do
        {
          OemString[v9] = *(_BYTE *)((unsigned __int16)UnicodeString[v9] + v8);
          ++v9;
        }
        while ( v9 < v7 );
        v5 = MaxBytesInOemString;
        v6 = v21;
      }
    }
    return v5 < v6 ? 0x80000005 : 0;
  }
}
