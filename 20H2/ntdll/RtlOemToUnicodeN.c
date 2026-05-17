/*
 * XREFs of RtlOemToUnicodeN @ 0x180061110
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x18004DF50 (RtlCreateEnvironmentEx.c)
 *     RtlOemStringToUnicodeString @ 0x180060D90 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x1800594B0 (RtlUTF8ToUnicodeN.c)
 *     RtlpIsUtf8Process @ 0x1800612BC (RtlpIsUtf8Process.c)
 */

__int64 __fastcall RtlOemToUnicodeN(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // edx
  char *v6; // r8
  char *v7; // r9
  _WORD *v8; // r10
  unsigned int v9; // r11d
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // r11d
  unsigned int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rax
  char *v18; // rax
  int v19; // eax
  __int64 v20; // r14
  int v21; // esi
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdi
  __int16 v25; // ax
  char v26; // [rsp+30h] [rbp-18h] BYREF

  LOBYTE(a1) = 1;
  v10 = 0;
  if ( (unsigned __int8)RtlpIsUtf8Process(a1, a2, a3) )
  {
    v18 = &v26;
    if ( v6 )
      v18 = v6;
    if ( a5 )
    {
      v19 = RtlUTF8ToUnicodeN(v8, v5, v18, v7, a5);
    }
    else
    {
      *(_DWORD *)v18 = 0;
      v19 = 0;
    }
    if ( v19 == -1073741789 )
      return (unsigned int)-2147483643;
    return v10;
  }
  else
  {
    v11 = a5;
    v12 = v9 >> 1;
    if ( NlsMbOemCodePageTag )
    {
      v20 = NlsMbOemCodePageTables;
      v21 = (int)v8;
      if ( v12 )
      {
        v22 = NlsOemToUnicodeData;
        while ( v11 )
        {
          v23 = (unsigned __int8)*v7;
          --v12;
          --v11;
          v24 = (unsigned __int16)NlsOemLeadByteInfoTable[v23];
          if ( (_WORD)v24 )
          {
            if ( !v11 )
            {
              *v8 = 0;
              LODWORD(v8) = (_DWORD)v8 + 2;
              break;
            }
            ++v7;
            --v11;
            v25 = *(_WORD *)(v20 + 2 * (v24 + (unsigned __int8)*v7));
          }
          else
          {
            v25 = *(_WORD *)(v22 + 2 * v23);
          }
          *v8 = v25;
          ++v7;
          ++v8;
          if ( !v12 )
            break;
        }
      }
      if ( v6 )
        *(_DWORD *)v6 = (_DWORD)v8 - v21;
    }
    else
    {
      v13 = a5;
      if ( v12 < a5 )
        v13 = v12;
      if ( v6 )
        *(_DWORD *)v6 = 2 * v13;
      v14 = NlsOemToUnicodeData;
      if ( v13 )
      {
        v15 = v13;
        do
        {
          v16 = (unsigned __int8)*v7++;
          *v8++ = *(_WORD *)(v14 + 2 * v16);
          --v15;
        }
        while ( v15 );
      }
    }
    return v12 < v11 ? 0x80000005 : 0;
  }
}
