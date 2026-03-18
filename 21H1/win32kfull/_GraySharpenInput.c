/*
 * XREFs of _GraySharpenInput @ 0xFACE0
 * Callers:
 *     _GrayExpandDIB_CY_ExpCX @ 0x1C9C3C (_GrayExpandDIB_CY_ExpCX.c)
 * Callees:
 *     <none>
 */

char *__cdecl GraySharpenInput(
        __int16 a1,
        _BYTE *a2,
        unsigned __int8 *a3,
        char *a4,
        unsigned __int8 *a5,
        unsigned int a6)
{
  char *v6; // edx
  char *result; // eax
  _BYTE *v8; // edi
  unsigned __int8 *v10; // esi
  unsigned int v12; // ebp
  int v13; // eax
  _BYTE *v14; // edi
  int v15; // eax
  _BYTE *v16; // edi
  int v17; // eax
  _BYTE *v18; // edi
  int v19; // eax
  int v20; // ebp
  int v21; // eax
  char v22; // cl
  char v23; // cl

  v6 = &a4[a6];
  if ( (a1 & 0x200) != 0 )
  {
    result = a4;
  }
  else
  {
    *(a4 - 1) = *a4;
    *v6 = *(v6 - 1);
    v8 = a2;
    v10 = (unsigned __int8 *)a4;
    if ( a6 >> 2 )
    {
      v12 = a6 >> 2;
      do
      {
        v13 = (12 * *v10 - *(v10 - 1) - v10[1] - *a3 - *a5) >> 3;
        if ( BYTE1(v13) )
          LOBYTE(v13) = ~HIBYTE(v13);
        *v8 = v13;
        v14 = v8 + 1;
        v15 = (12 * v10[1] - *v10 - v10[2] - a3[1] - a5[1]) >> 3;
        if ( BYTE1(v15) )
          LOBYTE(v15) = ~HIBYTE(v15);
        *v14 = v15;
        v16 = v14 + 1;
        v17 = (12 * v10[2] - v10[1] - v10[3] - a3[2] - a5[2]) >> 3;
        if ( BYTE1(v17) )
          LOBYTE(v17) = ~HIBYTE(v17);
        *v16 = v17;
        v18 = v16 + 1;
        v19 = (12 * v10[3] - v10[2] - v10[4] - a3[3] - a5[3]) >> 3;
        if ( BYTE1(v19) )
          LOBYTE(v19) = ~HIBYTE(v19);
        *v18 = v19;
        v8 = v18 + 1;
        a3 += 4;
        a5 += 4;
        v10 += 4;
        --v12;
      }
      while ( v12 );
    }
    if ( (a6 & 3) != 0 )
    {
      v20 = a6 & 3;
      do
      {
        v21 = (12 * *v10 - *(v10 - 1) - v10[1] - *a3 - *a5) >> 3;
        if ( BYTE1(v21) )
          LOBYTE(v21) = ~HIBYTE(v21);
        *v8++ = v21;
        ++v10;
        ++a3;
        ++a5;
        --v20;
      }
      while ( v20 );
    }
    result = a2;
    v6 = &a2[a6];
  }
  v22 = *result;
  *(result - 1) = *result;
  *(result - 2) = v22;
  *(result - 3) = v22;
  v23 = *(v6 - 1);
  v6[1] = v23;
  *v6 = v23;
  return result;
}
