/*
 * XREFs of _RtlUnicodeToCustomCPN@24 @ 0x4B3442B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUnicodeToUTF8N@20 @ 0x4B2E4640 (_RtlUnicodeToUTF8N@20.c)
 */

NTSTATUS __cdecl RtlUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG *v6; // eax
  NTSTATUS v7; // esi
  ULONG v9; // ecx
  ULONG v10; // esi
  ULONG v11; // edi
  ULONG v12; // edx
  _BYTE *v13; // eax
  PCH v14; // edx
  PCH v15; // ebx
  PVOID WideCharTable; // eax
  PWCH v17; // esi
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // [esp+4h] [ebp-Ch] BYREF
  ULONG v23; // [esp+8h] [ebp-8h]
  PCH v24; // [esp+Ch] [ebp-4h]

  if ( CustomCP->CodePage == 0xFDE9 )
  {
    v6 = BytesInCustomCPString;
    if ( !BytesInCustomCPString )
      v6 = &v22;
    v7 = 0;
    if ( BytesInUnicodeString )
    {
      if ( RtlUnicodeToUTF8N(CustomCPString, MaxBytesInCustomCPString, v6, UnicodeString, BytesInUnicodeString) == -1073741789 )
        return -2147483643;
    }
    else
    {
      *v6 = 0;
    }
    return v7;
  }
  else
  {
    v9 = MaxBytesInCustomCPString;
    v10 = 0;
    v11 = BytesInUnicodeString >> 1;
    v23 = BytesInUnicodeString >> 1;
    if ( CustomCP->DBCSCodePage )
    {
      v14 = CustomCPString;
      v15 = CustomCPString;
      WideCharTable = CustomCP->WideCharTable;
      v24 = CustomCPString;
      v23 = (ULONG)WideCharTable;
      if ( v11 )
      {
        v17 = UnicodeString;
        do
        {
          if ( !v9 )
            break;
          v18 = (unsigned __int16)*v17++;
          v19 = *(unsigned __int16 *)(v23 + 2 * v18);
          v22 = v19;
          v20 = v19 >> 8;
          if ( BYTE1(v19) )
          {
            v21 = v9--;
            if ( v21 < 2 )
              break;
            LOBYTE(v19) = v22;
            *v14++ = v20;
          }
          *v14++ = v19;
          --v9;
          --v11;
        }
        while ( v11 );
        v15 = v24;
      }
      if ( BytesInCustomCPString )
        *BytesInCustomCPString = v14 - v15;
    }
    else
    {
      v12 = BytesInUnicodeString >> 1;
      if ( v11 >= MaxBytesInCustomCPString )
        v12 = MaxBytesInCustomCPString;
      if ( BytesInCustomCPString )
        *BytesInCustomCPString = v12;
      v13 = CustomCP->WideCharTable;
      if ( v12 )
      {
        do
        {
          CustomCPString[v10] = v13[(unsigned __int16)UnicodeString[v10]];
          ++v10;
        }
        while ( v10 < v12 );
        v9 = MaxBytesInCustomCPString;
        v11 = v23;
      }
    }
    return v9 < v11 ? 0x80000005 : 0;
  }
}
