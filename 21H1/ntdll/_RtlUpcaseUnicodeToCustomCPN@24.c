/*
 * XREFs of _RtlUpcaseUnicodeToCustomCPN@24 @ 0x4B3443C0
 * Callers:
 *     <none>
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // esi
  ULONG v7; // ebx
  ULONG v8; // edi
  unsigned __int8 *v9; // ecx
  ULONG i; // esi
  unsigned __int16 v11; // ax
  PCH v12; // edi
  unsigned __int16 *WideCharTable; // ecx
  PWCH v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // dx
  unsigned int v20; // eax
  unsigned __int8 *v22; // [esp+10h] [ebp-Ch]
  unsigned __int16 *v23; // [esp+10h] [ebp-Ch]
  PUSHORT DBCSOffsets; // [esp+14h] [ebp-8h]
  PWCH v25; // [esp+18h] [ebp-4h]
  ULONG BytesInUnicodeStringa; // [esp+38h] [ebp+1Ch]

  v6 = MaxBytesInCustomCPString;
  v7 = BytesInUnicodeString >> 1;
  BytesInUnicodeStringa = BytesInUnicodeString >> 1;
  if ( CustomCP->DBCSCodePage )
  {
    v12 = CustomCPString;
    WideCharTable = (unsigned __int16 *)CustomCP->WideCharTable;
    DBCSOffsets = CustomCP->DBCSOffsets;
    v23 = WideCharTable;
    if ( v7 )
    {
      v14 = UnicodeString;
      v25 = UnicodeString;
      do
      {
        if ( !v6 )
          break;
        ++v25;
        v15 = WideCharTable[(unsigned __int16)*v14];
        v16 = (unsigned __int8)v15;
        v17 = DBCSOffsets[v15 >> 8];
        if ( (_WORD)v17 )
          v18 = DBCSOffsets[v16 + v17];
        else
          v18 = CustomCP->MultiByteTable[v16];
        v19 = v23[NLS_UPCASE(v18)];
        if ( HIBYTE(v19) )
        {
          v20 = v6--;
          if ( v20 < 2 )
            break;
          *v12++ = HIBYTE(v19);
        }
        v14 = v25;
        WideCharTable = v23;
        *v12++ = v19;
        --v6;
        --v7;
      }
      while ( v7 );
    }
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = v12 - CustomCPString;
  }
  else
  {
    v8 = v7;
    if ( v7 >= MaxBytesInCustomCPString )
      v8 = MaxBytesInCustomCPString;
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = v8;
    v9 = (unsigned __int8 *)CustomCP->WideCharTable;
    v22 = v9;
    if ( v8 )
    {
      for ( i = 0; i < v8; ++i )
      {
        v11 = NLS_UPCASE(CustomCP->MultiByteTable[v9[(unsigned __int16)UnicodeString[i]]]);
        v9 = v22;
        CustomCPString[i] = v22[v11];
      }
      v6 = MaxBytesInCustomCPString;
      v7 = BytesInUnicodeStringa;
    }
  }
  return v6 < v7 ? 0x80000005 : 0;
}
