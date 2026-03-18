/*
 * XREFs of RtlUnicodeToOemN @ 0x1406E45E0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x1406E3FA0 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1406E4150 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1405E6930 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x140707A20 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  NTSTATUS v9; // ebx
  ULONG v10; // edx
  ULONG v11; // eax
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rax
  ULONG *v16; // r8
  NTSTATUS v17; // eax
  int v18; // r8d
  PCHAR v19; // r9
  __int64 v20; // rcx
  __int16 v21; // r10
  ULONG v22; // eax
  char v23; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0;
  if ( RtlpIsUtf8Process(1) )
  {
    v16 = (ULONG *)&v23;
    if ( BytesInOemString )
      v16 = BytesInOemString;
    if ( BytesInUnicodeString )
    {
      v17 = RtlUnicodeToUTF8N(OemString, MaxBytesInOemString, v16, UnicodeString, BytesInUnicodeString);
    }
    else
    {
      *v16 = 0;
      v17 = 0;
    }
    if ( v17 == -1073741789 )
      return -2147483643;
    return v9;
  }
  else
  {
    v10 = BytesInUnicodeString >> 1;
    if ( (_BYTE)NlsMbOemCodePageTag )
    {
      v18 = (int)OemString;
      if ( v10 )
      {
        v19 = OemString;
        do
        {
          if ( !MaxBytesInOemString )
            break;
          v20 = *UnicodeString++;
          v21 = *(_WORD *)(NlsUnicodeToMbOemData + 2 * v20);
          if ( HIBYTE(v21) )
          {
            v22 = MaxBytesInOemString--;
            if ( v22 < 2 )
              break;
            *OemString = HIBYTE(v21);
            OemString = ++v19;
          }
          *OemString = v21;
          --MaxBytesInOemString;
          OemString = ++v19;
          --v10;
        }
        while ( v10 );
      }
      if ( BytesInOemString )
        *BytesInOemString = (_DWORD)OemString - v18;
    }
    else
    {
      v11 = MaxBytesInOemString;
      if ( v10 < MaxBytesInOemString )
        v11 = BytesInUnicodeString >> 1;
      if ( BytesInOemString )
        *BytesInOemString = v11;
      v12 = NlsUnicodeToOemData;
      if ( v11 )
      {
        v13 = v11;
        do
        {
          v14 = *UnicodeString++;
          *OemString++ = *(_BYTE *)(v14 + v12);
          --v13;
        }
        while ( v13 );
      }
    }
    return MaxBytesInOemString < v10 ? 0x80000005 : 0;
  }
}
