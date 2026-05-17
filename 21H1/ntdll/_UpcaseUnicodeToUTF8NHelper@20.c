/*
 * XREFs of _UpcaseUnicodeToUTF8NHelper@20 @ 0x4B344718
 * Callers:
 *     _RtlUpcaseUnicodeToMultiByteN@20 @ 0x4B2E0B90 (_RtlUpcaseUnicodeToMultiByteN@20.c)
 *     _RtlUpcaseUnicodeToOemN@20 @ 0x4B3444F0 (_RtlUpcaseUnicodeToOemN@20.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 *     _RtlUnicodeToUTF8N@20 @ 0x4B2E4640 (_RtlUnicodeToUTF8N@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall UpcaseUnicodeToUTF8NHelper(_BYTE *a1, int a2, _DWORD *a3, int a4, unsigned int a5)
{
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // esi
  unsigned int v9; // ebx
  unsigned int i; // edi
  int v11; // eax
  int v13; // [esp+Ch] [ebp-94h]
  int v14; // [esp+10h] [ebp-90h]
  int v16; // [esp+18h] [ebp-88h] BYREF
  unsigned int v17[32]; // [esp+1Ch] [ebp-84h] BYREF

  v5 = a2;
  v6 = 0;
  v7 = a5;
  v8 = 0;
  v14 = a2;
  v13 = 0;
  if ( a5 )
  {
    while ( 1 )
    {
      if ( !v5 )
        goto LABEL_16;
      if ( v7 < 0x40 )
        break;
      v9 = 64;
      if ( v7 == 64 )
        goto LABEL_8;
      if ( (unsigned int)*(unsigned __int16 *)(a4 + 126) - 55296 <= 0x3FF )
      {
        v9 = 63;
LABEL_8:
        if ( !v9 )
          goto LABEL_12;
      }
      for ( i = 0; i < v9; ++i )
        *((_WORD *)v17 + i) = NLS_UPCASE(*(_WORD *)(a4 + 2 * i));
      v8 = v13;
      v7 = a5;
LABEL_12:
      v11 = RtlUnicodeToUTF8N(a1, v14, &v16, v17, 2 * v9);
      v8 += v16;
      if ( v11 < 0 )
      {
        v6 = -2147483643;
        goto LABEL_16;
      }
      a4 += 2 * v9;
      a1 += v16;
      v5 = v14 - v16;
      v7 -= v9;
      v14 -= v16;
      v13 = v8;
      a5 = v7;
      v6 = 0;
      if ( !v7 )
        goto LABEL_16;
    }
    v9 = v7;
    goto LABEL_8;
  }
LABEL_16:
  if ( a3 )
    *a3 = v8;
  return v6;
}
