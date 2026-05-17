/*
 * XREFs of _RtlUnicodeToOemN@20 @ 0x4B2E0AF0
 * Callers:
 *     _RtlUnicodeStringToOemString@12 @ 0x4B2E09B0 (_RtlUnicodeStringToOemString@12.c)
 *     _RtlUnicodeStringToCountedOemString@12 @ 0x4B34DC20 (_RtlUnicodeStringToCountedOemString@12.c)
 * Callees:
 *     _RtlpIsUtf8Process@4 @ 0x4B2E0C43 (_RtlpIsUtf8Process@4.c)
 *     _RtlUnicodeToUTF8N@20 @ 0x4B2E4640 (_RtlUnicodeToUTF8N@20.c)
 */

unsigned int __stdcall RtlUnicodeToOemN(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // esi
  int v8; // ebx
  unsigned int v9; // edi
  int *v11; // eax
  int v12; // esi
  _BYTE *v13; // esi
  _BYTE *v14; // ebx
  unsigned __int16 *v15; // edi
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // eax
  unsigned int v20; // [esp+4h] [ebp-8h] BYREF
  _BYTE *v21; // [esp+8h] [ebp-4h]

  if ( (unsigned __int8)RtlpIsUtf8Process(1) )
  {
    v11 = (int *)a3;
    if ( !a3 )
      v11 = (int *)&v20;
    v12 = 0;
    if ( a5 )
    {
      if ( RtlUnicodeToUTF8N(a1, a2, v11, a4, a5) == -1073741789 )
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
    v5 = a2;
    v6 = a5 >> 1;
    v21 = (_BYTE *)(a5 >> 1);
    if ( NlsMbOemCodePageTag )
    {
      v13 = a1;
      v14 = a1;
      v21 = a1;
      if ( v6 )
      {
        v15 = a4;
        do
        {
          if ( !v5 )
            break;
          v16 = *v15++;
          v17 = *(unsigned __int16 *)(NlsUnicodeToMbOemData + 2 * v16);
          v20 = v17;
          v18 = v17 >> 8;
          if ( BYTE1(v17) )
          {
            v19 = v5--;
            if ( v19 < 2 )
              break;
            LOBYTE(v17) = v20;
            *v13++ = v18;
          }
          *v13++ = v17;
          --v5;
          --v6;
        }
        while ( v6 );
        v14 = v21;
      }
      if ( a3 )
        *a3 = v13 - v14;
    }
    else
    {
      v7 = a5 >> 1;
      if ( v6 >= a2 )
        v7 = a2;
      if ( a3 )
        *a3 = v7;
      v8 = NlsUnicodeToOemData;
      v9 = 0;
      if ( v7 )
      {
        do
        {
          a1[v9] = *(_BYTE *)(a4[v9] + v8);
          ++v9;
        }
        while ( v9 < v7 );
        v5 = a2;
        v6 = (unsigned int)v21;
      }
    }
    return v5 < v6 ? 0x80000005 : 0;
  }
}
