/*
 * XREFs of _RtlCustomCPToUnicodeN@24 @ 0x4B343EC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0 (_RtlUTF8ToUnicodeN@20.c)
 */

NTSTATUS __cdecl RtlCustomCPToUnicodeN(
        PCPTABLEINFO CustomCP,
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCH CustomCPString,
        ULONG BytesInCustomCPString)
{
  PCPTABLEINFO v6; // ecx
  ULONG *v7; // eax
  NTSTATUS v8; // esi
  ULONG v10; // esi
  ULONG v11; // ebx
  ULONG v12; // edi
  ULONG v13; // edx
  PUSHORT MultiByteTable; // eax
  PWCH v15; // edx
  PWCH v16; // esi
  PUSHORT DBCSOffsets; // eax
  PCH v18; // esi
  unsigned __int16 v19; // ax
  USHORT *v20; // eax
  unsigned int v21; // [esp+4h] [ebp-10h] BYREF
  PUSHORT v22; // [esp+8h] [ebp-Ch]
  ULONG v23; // [esp+Ch] [ebp-8h]
  PWCH v24; // [esp+10h] [ebp-4h]

  v6 = CustomCP;
  if ( CustomCP->CodePage == 0xFDE9 )
  {
    v7 = BytesInUnicodeString;
    if ( !BytesInUnicodeString )
      v7 = &v21;
    v8 = 0;
    if ( BytesInCustomCPString )
    {
      if ( RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v7, CustomCPString, BytesInCustomCPString) == -1073741789 )
        return -2147483643;
    }
    else
    {
      *v7 = 0;
    }
    return v8;
  }
  else
  {
    v10 = 0;
    v11 = MaxBytesInUnicodeString >> 1;
    v12 = BytesInCustomCPString;
    v23 = MaxBytesInUnicodeString >> 1;
    if ( CustomCP->DBCSCodePage )
    {
      v15 = UnicodeString;
      v16 = UnicodeString;
      DBCSOffsets = CustomCP->DBCSOffsets;
      v24 = UnicodeString;
      v23 = (ULONG)DBCSOffsets;
      if ( v11 )
      {
        v18 = CustomCPString;
        while ( v12 )
        {
          --v11;
          v21 = 2 * (unsigned __int8)*v18;
          --v12;
          v19 = *(_WORD *)(v21 + v23);
          v22 = (PUSHORT)v19;
          if ( v19 )
          {
            if ( !v12 )
            {
              *v15++ = 0;
              break;
            }
            ++v18;
            --v12;
            v20 = (USHORT *)*(unsigned __int16 *)(v23 + 2 * (v19 + (unsigned __int8)*v18));
          }
          else
          {
            v20 = (USHORT *)CustomCP->MultiByteTable[v21 / 2];
          }
          v22 = v20;
          ++v18;
          *v15++ = (__int16)v20;
          if ( !v11 )
            break;
        }
        v16 = v24;
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (char *)v15 - (char *)v16;
    }
    else
    {
      v13 = MaxBytesInUnicodeString >> 1;
      if ( v11 >= BytesInCustomCPString )
        v13 = BytesInCustomCPString;
      if ( BytesInUnicodeString )
      {
        *BytesInUnicodeString = 2 * v13;
        v6 = CustomCP;
      }
      MultiByteTable = v6->MultiByteTable;
      v22 = MultiByteTable;
      if ( v13 )
      {
        do
        {
          UnicodeString[v10] = MultiByteTable[(unsigned __int8)CustomCPString[v10]];
          ++v10;
        }
        while ( v10 < v13 );
        v12 = BytesInCustomCPString;
        v11 = v23;
      }
    }
    return v11 < v12 ? 0x80000005 : 0;
  }
}
