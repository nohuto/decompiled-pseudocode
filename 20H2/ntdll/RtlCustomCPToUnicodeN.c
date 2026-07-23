/*
 * XREFs of RtlCustomCPToUnicodeN @ 0x1800E53F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x1800594B0 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __cdecl RtlCustomCPToUnicodeN(
        PCPTABLEINFO CustomCP,
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCH CustomCPString,
        ULONG BytesInCustomCPString)
{
  NTSTATUS v6; // ebx
  PWCH v8; // r10
  ULONG *v10; // r8
  NTSTATUS v11; // eax
  ULONG v13; // edx
  ULONG v14; // r11d
  ULONG v15; // ecx
  PUSHORT MultiByteTable; // rdi
  PCH v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  PUSHORT DBCSOffsets; // r14
  int v21; // esi
  PCH v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  char v25; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v8 = UnicodeString;
  if ( CustomCP->CodePage == 0xFDE9 )
  {
    v10 = (ULONG *)&v25;
    if ( BytesInUnicodeString )
      v10 = BytesInUnicodeString;
    if ( BytesInCustomCPString )
    {
      v11 = RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v10, CustomCPString, BytesInCustomCPString);
    }
    else
    {
      *v10 = 0;
      v11 = 0;
    }
    if ( v11 == -1073741789 )
      return -2147483643;
    return v6;
  }
  else
  {
    v13 = BytesInCustomCPString;
    v14 = MaxBytesInUnicodeString >> 1;
    if ( CustomCP->DBCSCodePage )
    {
      DBCSOffsets = CustomCP->DBCSOffsets;
      v21 = (int)v8;
      if ( v14 )
      {
        v22 = CustomCPString;
        while ( v13 )
        {
          v23 = (unsigned __int8)*v22;
          --v14;
          --v13;
          v24 = DBCSOffsets[v23];
          if ( (_WORD)v24 )
          {
            if ( !v13 )
            {
              *v8 = 0;
              LODWORD(v8) = (_DWORD)v8 + 2;
              break;
            }
            ++v22;
            --v13;
            *v8 = DBCSOffsets[v24 + (unsigned __int8)*v22];
          }
          else
          {
            *v8 = CustomCP->MultiByteTable[v23];
          }
          ++v8;
          ++v22;
          if ( !v14 )
            break;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)v8 - v21;
    }
    else
    {
      v15 = BytesInCustomCPString;
      if ( v14 < BytesInCustomCPString )
        v15 = v14;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v15;
      MultiByteTable = CustomCP->MultiByteTable;
      if ( v15 )
      {
        v17 = CustomCPString;
        v18 = v15;
        do
        {
          v19 = (unsigned __int8)*v17++;
          *v8++ = MultiByteTable[v19];
          --v18;
        }
        while ( v18 );
      }
    }
    return v14 < v13 ? 0x80000005 : 0;
  }
}
