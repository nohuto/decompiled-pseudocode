/*
 * XREFs of _RtlOemToUnicodeN@20 @ 0x4B2AACD0
 * Callers:
 *     _RtlOemStringToUnicodeString@12 @ 0x4B2AABF0 (_RtlOemStringToUnicodeString@12.c)
 *     _RtlCreateEnvironmentEx@12 @ 0x4B2DACF0 (_RtlCreateEnvironmentEx@12.c)
 * Callees:
 *     _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0 (_RtlUTF8ToUnicodeN@20.c)
 *     _RtlpIsUtf8Process@4 @ 0x4B2E0C43 (_RtlpIsUtf8Process@4.c)
 */

unsigned int __fastcall RtlOemToUnicodeN(
        __int16 a1,
        int a2,
        char *a3,
        unsigned int a4,
        int *a5,
        unsigned __int8 *a6,
        unsigned int a7)
{
  unsigned int v7; // edx
  unsigned int v8; // edi
  unsigned int v9; // ecx
  int v10; // ebx
  unsigned int v11; // esi
  int *v13; // eax
  int v14; // esi
  char *v15; // esi
  char *v16; // ecx
  unsigned __int8 *v17; // ebx
  int v18; // ecx
  unsigned __int16 v19; // ax
  __int16 v20; // cx
  int v21; // [esp+4h] [ebp-Ch] BYREF
  char *v22; // [esp+8h] [ebp-8h]
  unsigned int v23; // [esp+Ch] [ebp-4h]

  LOBYTE(a1) = 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(a1) )
  {
    v13 = a5;
    if ( !a5 )
      v13 = &v21;
    v14 = 0;
    if ( a7 )
    {
      if ( RtlUTF8ToUnicodeN(a3, a4, v13, a6, a7) == -1073741789 )
        return -2147483643;
    }
    else
    {
      *v13 = 0;
    }
    return v14;
  }
  else
  {
    v7 = a7;
    v8 = a4 >> 1;
    v23 = a4 >> 1;
    if ( NlsMbOemCodePageTag )
    {
      v15 = a3;
      v16 = a3;
      v22 = a3;
      if ( v8 )
      {
        v17 = a6;
        while ( v7 )
        {
          v18 = *v17;
          v23 = v8 - 1;
          --v7;
          v19 = NlsOemLeadByteInfoTable[v18];
          v21 = v19;
          --v8;
          if ( v19 )
          {
            if ( !v7 )
            {
              *(_WORD *)v15 = 0;
              v15 += 2;
              break;
            }
            ++v17;
            --v7;
            v20 = *(_WORD *)(NlsMbOemCodePageTables + 2 * (v19 + *v17));
          }
          else
          {
            v20 = *(_WORD *)(NlsOemToUnicodeData + 2 * v18);
          }
          ++v17;
          *(_WORD *)v15 = v20;
          v15 += 2;
          if ( !v8 )
            break;
        }
        v16 = v22;
      }
      if ( a5 )
        *a5 = v15 - v16;
    }
    else
    {
      v9 = a4 >> 1;
      if ( v8 >= a7 )
        v9 = a7;
      if ( a5 )
        *a5 = 2 * v9;
      v10 = NlsOemToUnicodeData;
      v11 = 0;
      if ( v9 )
      {
        do
        {
          *(_WORD *)&a3[2 * v11] = *(_WORD *)(v10 + 2 * a6[v11]);
          ++v11;
        }
        while ( v11 < v9 );
        v7 = a7;
        v8 = v23;
      }
    }
    return v8 < v7 ? 0x80000005 : 0;
  }
}
