/*
 * XREFs of cComputeGlyphSet @ 0x1C00F4614
 * Callers:
 *     EngComputeGlyphSet @ 0x1C00F4310 (EngComputeGlyphSet.c)
 *     cUnicodeRangesSupported @ 0x1C00F43E4 (cUnicodeRangesSupported.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cComputeGlyphSet(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *v9; // r11
  _DWORD *v10; // rsi
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rdi
  unsigned int v14; // r9d
  __int64 v15; // r8
  unsigned __int16 *v16; // rdx
  __int64 v17; // r14
  unsigned __int64 v18; // rdx
  unsigned __int16 v19; // ax
  _DWORD *v20; // rcx
  unsigned __int8 *v21; // rdi
  unsigned __int64 i; // rcx

  v9 = 0LL;
  v10 = 0LL;
  if ( a5 )
  {
    a5[3] = a4;
    a5[2] = 0;
    v11 = a3 + 4 + 4 * a4;
    v12 = 2;
    *a5 = v11 * 4;
    v10 = &a5[v11];
    if ( a3 == 256 )
      v12 = 4;
    v9 = &a5[4 * a4 + 4];
    a5[1] = v12;
  }
  v13 = 0LL;
  v14 = 0;
  if ( a3 )
  {
    do
    {
      v15 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v15 < a3 )
      {
        v16 = (unsigned __int16 *)(a1 + 2 * v15);
        do
        {
          if ( *v16 - *(unsigned __int16 *)(a1 + 2LL * (unsigned int)(v15 - 1)) > 1 )
            break;
          LODWORD(v15) = v15 + 1;
          ++v16;
        }
        while ( (unsigned int)v15 < a3 );
      }
      if ( a5 )
      {
        if ( v14 < a4 )
        {
          v17 = 2LL * v14;
          LOWORD(a5[2 * v17 + 4]) = *(_WORD *)(a1 + 2 * v13);
          LOWORD(v18) = *(_WORD *)(a1 + 2LL * (unsigned int)(v15 - 1)) - *(_WORD *)(a1 + 2 * v13) + 1;
          *(_QWORD *)&a5[2 * v17 + 6] = v9;
          v19 = v18;
          HIWORD(a5[2 * v17 + 4]) = v18;
          v20 = &v9[(unsigned __int16)v18];
          if ( v20 <= v10 )
          {
            v21 = (unsigned __int8 *)(a2 + v13);
            v18 = (unsigned __int16)v18;
            if ( v9 > v20 )
              v18 = 0LL;
            if ( v18 )
            {
              for ( i = 0LL; i < v18; ++i )
                *v9++ = *v21++;
              v19 = HIWORD(a5[4 * v14 + 4]);
            }
            a5[2] += v19;
          }
        }
      }
      ++v14;
      v13 = (unsigned int)v15;
    }
    while ( (unsigned int)v15 < a3 );
  }
  return v14;
}
