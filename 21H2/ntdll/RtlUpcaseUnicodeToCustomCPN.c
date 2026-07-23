/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1800E5880
 * Callers:
 *     <none>
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // r11d
  ULONG v8; // ebx
  _BYTE *v9; // r10
  ULONG v11; // eax
  _BYTE *v12; // rbp
  PWCH v13; // rsi
  __int64 v14; // r14
  unsigned __int16 v15; // ax
  _BYTE *v16; // r10
  PUSHORT DBCSOffsets; // r15
  int v18; // r14d
  _WORD *WideCharTable; // r12
  PWCH v20; // rbp
  __int64 v21; // rax
  unsigned __int16 v22; // dx
  unsigned __int64 v23; // rax
  unsigned __int16 v24; // cx
  __int16 v25; // dx
  unsigned int v26; // eax

  v6 = BytesInUnicodeString >> 1;
  v8 = MaxBytesInCustomCPString;
  LODWORD(v9) = (_DWORD)CustomCPString;
  if ( CustomCP->DBCSCodePage )
  {
    DBCSOffsets = CustomCP->DBCSOffsets;
    v18 = (int)CustomCPString;
    WideCharTable = CustomCP->WideCharTable;
    if ( v6 )
    {
      v20 = UnicodeString;
      do
      {
        if ( !v8 )
          break;
        v21 = *v20++;
        v22 = WideCharTable[v21];
        v23 = (unsigned __int64)v22 >> 8;
        if ( DBCSOffsets[v23] )
          v24 = DBCSOffsets[(unsigned __int8)v22 + (unsigned __int64)DBCSOffsets[v23]];
        else
          v24 = CustomCP->MultiByteTable[(unsigned __int8)v22];
        v25 = WideCharTable[NLS_UPCASE(v24)];
        if ( HIBYTE(v25) )
        {
          v26 = v8--;
          if ( v26 < 2 )
            break;
          *v9++ = HIBYTE(v25);
        }
        *v9 = v25;
        --v8;
        LODWORD(v9) = (_DWORD)v9 + 1;
        --v6;
      }
      while ( v6 );
    }
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = (_DWORD)v9 - v18;
  }
  else
  {
    v11 = MaxBytesInCustomCPString;
    if ( v6 < MaxBytesInCustomCPString )
      v11 = BytesInUnicodeString >> 1;
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = v11;
    v12 = CustomCP->WideCharTable;
    if ( v11 )
    {
      v13 = UnicodeString;
      v14 = v11;
      do
      {
        v15 = NLS_UPCASE(CustomCP->MultiByteTable[(unsigned __int8)v12[*v13++]]);
        *v16 = v12[v15];
        --v14;
      }
      while ( v14 );
    }
  }
  return v8 < v6 ? 0x80000005 : 0;
}
