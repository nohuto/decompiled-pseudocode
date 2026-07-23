/*
 * XREFs of RtlUnicodeToCustomCPN @ 0x1800E5900
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18005AA00 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __cdecl RtlUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  NTSTATUS v6; // ebx
  ULONG v7; // r11d
  PCH v8; // r10
  ULONG *v9; // r8
  NTSTATUS v10; // eax
  ULONG v12; // edx
  ULONG v13; // eax
  _BYTE *v14; // rdi
  PWCH v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  _WORD *WideCharTable; // r14
  int v19; // edi
  PWCH v20; // r8
  __int64 v21; // rax
  __int16 v22; // si
  unsigned int v23; // eax
  char v24; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v7 = MaxBytesInCustomCPString;
  v8 = CustomCPString;
  if ( CustomCP->CodePage == 0xFDE9 )
  {
    v9 = (ULONG *)&v24;
    if ( BytesInCustomCPString )
      v9 = BytesInCustomCPString;
    if ( BytesInUnicodeString )
    {
      v10 = RtlUnicodeToUTF8N(CustomCPString, v7, v9, UnicodeString, BytesInUnicodeString);
    }
    else
    {
      *v9 = 0;
      v10 = 0;
    }
    if ( v10 == -1073741789 )
      return -2147483643;
    return v6;
  }
  else
  {
    v12 = BytesInUnicodeString >> 1;
    if ( CustomCP->DBCSCodePage )
    {
      WideCharTable = CustomCP->WideCharTable;
      v19 = (int)v8;
      if ( v12 )
      {
        v20 = UnicodeString;
        do
        {
          if ( !v7 )
            break;
          v21 = *v20++;
          v22 = WideCharTable[v21];
          if ( HIBYTE(v22) )
          {
            v23 = v7--;
            if ( v23 < 2 )
              break;
            *v8++ = HIBYTE(v22);
          }
          *v8 = v22;
          --v7;
          ++v8;
          --v12;
        }
        while ( v12 );
      }
      if ( BytesInCustomCPString )
        *BytesInCustomCPString = (_DWORD)v8 - v19;
    }
    else
    {
      v13 = MaxBytesInCustomCPString;
      if ( v12 < MaxBytesInCustomCPString )
        v13 = BytesInUnicodeString >> 1;
      if ( BytesInCustomCPString )
        *BytesInCustomCPString = v13;
      v14 = CustomCP->WideCharTable;
      if ( v13 )
      {
        v15 = UnicodeString;
        v16 = v13;
        do
        {
          v17 = *v15++;
          *v8++ = v14[v17];
          --v16;
        }
        while ( v16 );
      }
    }
    return v7 < v12 ? 0x80000005 : 0;
  }
}
