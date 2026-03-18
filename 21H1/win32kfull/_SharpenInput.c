/*
 * XREFs of _SharpenInput @ 0xFAF6C
 * Callers:
 *     _ExpandDIB_CY_ExpCX @ 0x1C7F6C (_ExpandDIB_CY_ExpCX.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__cdecl SharpenInput(
        __int16 a1,
        _BYTE *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        int a6)
{
  unsigned __int8 *v6; // esi
  unsigned __int8 *v7; // edx
  unsigned __int8 *v8; // ebx
  _BYTE *v9; // edi
  unsigned __int8 *v11; // esi
  int v13; // eax
  _BYTE *v14; // edi
  int v15; // eax
  _BYTE *v16; // edi
  int v17; // eax
  unsigned __int8 *result; // eax
  unsigned __int8 *v19; // [esp+Ch] [ebp-4h]
  unsigned int v20; // [esp+2Ch] [ebp+1Ch]

  v19 = &a2[a6];
  v6 = &a4[a6];
  v20 = (unsigned int)&a4[a6];
  if ( (a1 & 0x200) != 0 )
  {
    v7 = a4;
    v8 = v6;
  }
  else
  {
    *(_WORD *)(a4 - 3) = *(_WORD *)a4;
    *(a4 - 1) = a4[2];
    *(_WORD *)v6 = *(_WORD *)(v6 - 3);
    v6[2] = *(v6 - 1);
    v9 = a2;
    v11 = a4;
    do
    {
      v13 = (12 * *v11 - *(v11 - 3) - v11[3] - *a3 - *a5) >> 3;
      if ( BYTE1(v13) )
        LOBYTE(v13) = ~HIBYTE(v13);
      *v9 = v13;
      v14 = v9 + 1;
      v15 = (12 * v11[1] - *(v11 - 2) - v11[4] - a3[1] - a5[1]) >> 3;
      if ( BYTE1(v15) )
        LOBYTE(v15) = ~HIBYTE(v15);
      *v14 = v15;
      v16 = v14 + 1;
      v17 = (12 * v11[2] - *(v11 - 1) - v11[5] - a3[2] - a5[2]) >> 3;
      if ( BYTE1(v17) )
        LOBYTE(v17) = ~HIBYTE(v17);
      *v16 = v17;
      v9 = v16 + 1;
      a3 += 3;
      a5 += 3;
      v11 += 3;
    }
    while ( (unsigned int)v11 < v20 );
    v7 = a2;
    v8 = v19;
  }
  *(_WORD *)(v7 - 3) = *(_WORD *)v7;
  *(v7 - 1) = v7[2];
  *((_WORD *)v7 - 3) = *(_WORD *)(v7 - 3);
  *(v7 - 4) = *(v7 - 1);
  *(_WORD *)(v7 - 9) = *((_WORD *)v7 - 3);
  *(v7 - 7) = *(v7 - 4);
  result = v7;
  *(_WORD *)(v8 + 3) = *(_WORD *)(v8 - 3);
  v8[5] = *(v8 - 1);
  *(_WORD *)v8 = *(_WORD *)(v8 + 3);
  v8[2] = v8[5];
  return result;
}
