/*
 * XREFs of _RtlOemToUnicodeN@20 @ 0x4B2AACD0
 * Callers:
 *     _RtlOemStringToUnicodeString@12 @ 0x4B2AABF0 (_RtlOemStringToUnicodeString@12.c)
 *     _RtlCreateEnvironmentEx@12 @ 0x4B2DACF0 (_RtlCreateEnvironmentEx@12.c)
 * Callees:
 *     _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0 (_RtlUTF8ToUnicodeN@20.c)
 *     _RtlpIsUtf8Process@4 @ 0x4B2E0C43 (_RtlpIsUtf8Process@4.c)
 */

NTSTATUS __cdecl RtlOemToUnicodeN(
        PWSTR UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  ULONG v5; // edx
  ULONG v6; // edi
  ULONG v7; // ecx
  int v8; // ebx
  ULONG v9; // esi
  ULONG *v11; // eax
  NTSTATUS v12; // esi
  PWSTR v13; // esi
  PWSTR v14; // ecx
  PCCH v15; // ebx
  int v16; // ecx
  unsigned __int16 v17; // ax
  WCHAR v18; // cx
  int v19; // [esp+4h] [ebp-Ch] BYREF
  PWSTR v20; // [esp+8h] [ebp-8h]
  ULONG v21; // [esp+Ch] [ebp-4h]

  if ( (unsigned __int8)RtlpIsUtf8Process(1) )
  {
    v11 = BytesInUnicodeString;
    if ( !BytesInUnicodeString )
      v11 = (ULONG *)&v19;
    v12 = 0;
    if ( BytesInOemString )
    {
      if ( RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v11, OemString, BytesInOemString) == -1073741789 )
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
    v5 = BytesInOemString;
    v6 = MaxBytesInUnicodeString >> 1;
    v21 = MaxBytesInUnicodeString >> 1;
    if ( NlsMbOemCodePageTag )
    {
      v13 = UnicodeString;
      v14 = UnicodeString;
      v20 = UnicodeString;
      if ( v6 )
      {
        v15 = OemString;
        while ( v5 )
        {
          v16 = *(unsigned __int8 *)v15;
          v21 = v6 - 1;
          --v5;
          v17 = NlsOemLeadByteInfoTable[v16];
          v19 = v17;
          --v6;
          if ( v17 )
          {
            if ( !v5 )
            {
              *v13++ = 0;
              break;
            }
            ++v15;
            --v5;
            v18 = *(_WORD *)(NlsMbOemCodePageTables + 2 * (v17 + *(unsigned __int8 *)v15));
          }
          else
          {
            v18 = *(_WORD *)(NlsOemToUnicodeData + 2 * v16);
          }
          ++v15;
          *v13++ = v18;
          if ( !v6 )
            break;
        }
        v14 = v20;
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (char *)v13 - (char *)v14;
    }
    else
    {
      v7 = MaxBytesInUnicodeString >> 1;
      if ( v6 >= BytesInOemString )
        v7 = BytesInOemString;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v7;
      v8 = NlsOemToUnicodeData;
      v9 = 0;
      if ( v7 )
      {
        do
        {
          UnicodeString[v9] = *(_WORD *)(v8 + 2 * (unsigned __int8)OemString[v9]);
          ++v9;
        }
        while ( v9 < v7 );
        v5 = BytesInOemString;
        v6 = v21;
      }
    }
    return v6 < v5 ? 0x80000005 : 0;
  }
}
