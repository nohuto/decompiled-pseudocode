/*
 * XREFs of _RtlConsoleMultiByteToUnicodeN@24 @ 0x4B343D70
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpIsUtf8Process@4 @ 0x4B2E0C43 (_RtlpIsUtf8Process@4.c)
 *     _RtlMultiByteToUnicodeN@20 @ 0x4B2E1E50 (_RtlMultiByteToUnicodeN@20.c)
 */

int __stdcall RtlConsoleMultiByteToUnicodeN(
        char *a1,
        unsigned int a2,
        unsigned int *a3,
        char *a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // ebx
  unsigned int v7; // edx
  char v8; // cl
  unsigned int v10; // esi
  int v11; // edi
  unsigned __int8 v12; // al
  char *v13; // edx
  char *v14; // ecx
  unsigned int v15; // edi
  char *v16; // ebx
  unsigned __int8 v17; // cl
  unsigned __int16 v18; // ax
  __int16 v19; // cx
  char *v20; // [esp+8h] [ebp-8h]

  v6 = a6;
  *a6 = 0;
  if ( RtlpIsUtf8Process(0) )
  {
    if ( a5 )
    {
      while ( (unsigned __int8)a4[v7] >= 0x20u )
      {
        if ( ++v7 >= a5 )
          return RtlMultiByteToUnicodeN(a1, a2, a3, a4, a5);
      }
      *a6 = 1;
    }
    return RtlMultiByteToUnicodeN(a1, a2, a3, a4, a5);
  }
  else
  {
    v10 = a2 >> 1;
    if ( NlsMbCodePageTag == v8 )
    {
      if ( v10 >= a5 )
        v10 = a5;
      if ( a3 )
        *a3 = 2 * v10;
      v11 = NlsAnsiToUnicodeData;
      if ( v10 )
      {
        do
        {
          v12 = a4[v7];
          if ( v12 < 0x20u )
          {
            *v6 = 1;
            v12 = a4[v7];
          }
          *(_WORD *)&a1[2 * v7++] = *(_WORD *)(v11 + 2 * v12);
          v6 = a6;
        }
        while ( v7 < v10 );
      }
    }
    else
    {
      v13 = a1;
      v14 = a1;
      v20 = a1;
      if ( v10 )
      {
        v15 = a5;
        v16 = a4;
        while ( v15 )
        {
          v17 = *v16;
          --v10;
          --v15;
          v18 = NlsLeadByteInfoTable[(unsigned __int8)*v16];
          if ( v18 )
          {
            if ( !v15 )
            {
              *(_WORD *)v20 = 0;
              v13 = v20 + 2;
              break;
            }
            ++v16;
            --v15;
            v19 = *(_WORD *)(NlsMbAnsiCodePageTables + 2 * (v18 + (unsigned __int8)*v16));
          }
          else
          {
            if ( v17 < 0x20u )
            {
              *a6 = 1;
              v17 = *v16;
            }
            v19 = *(_WORD *)(NlsAnsiToUnicodeData + 2 * v17);
          }
          *(_WORD *)v20 = v19;
          ++v16;
          v13 = v20 + 2;
          v20 += 2;
          if ( !v10 )
            break;
        }
        v14 = a1;
      }
      if ( a3 )
        *a3 = v13 - v14;
    }
    return 0;
  }
}
