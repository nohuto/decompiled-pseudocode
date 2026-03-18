/*
 * XREFs of _OutputAATo8BPP_MONO @ 0x1C1096
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl OutputAATo8BPP_MONO(
        char *a1,
        int a2,
        unsigned int a3,
        _BYTE *a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        __int16 a9)
{
  char *result; // eax
  unsigned __int8 *v10; // edx
  unsigned int v11; // esi
  _BYTE *v12; // edi
  unsigned int v13; // ebx
  unsigned int v14; // esi
  _BYTE *v15; // edi
  unsigned int v16; // [esp+14h] [ebp+8h]

  result = a1;
  v10 = (unsigned __int8 *)(a2 + 4);
  if ( *a1 >= 0 )
  {
    if ( (unsigned int)v10 < a3 )
    {
      v14 = a6;
      v15 = a4;
      do
      {
        v16 = v14;
        result = (char *)*(unsigned __int16 *)(v14 + 2);
        v14 += 6;
        *v15++ = HIBYTE(a9) ^ ((unsigned int)((_UNKNOWN *)((char *)*(&dwGrayIdxHB + v10[1])
                                                         + (unsigned __int16)wGrayIdxLB[*v10])
                                            - (_UNKNOWN *)result) >> 12);
        if ( v14 >= a7 )
          v14 = v16 + a8 + 6;
        v10 += 4;
      }
      while ( (unsigned int)v10 < a3 );
    }
  }
  else if ( (unsigned int)v10 < a3 )
  {
    v11 = a6;
    v12 = a4;
    do
    {
      v13 = v11;
      if ( v10[3] )
      {
        result = (char *)*(unsigned __int16 *)(v11 + 2);
        *v12 = HIBYTE(a9) ^ ((unsigned int)((_UNKNOWN *)((char *)*(&dwGrayIdxHB + v10[1])
                                                       + (unsigned __int16)wGrayIdxLB[*v10])
                                          - (_UNKNOWN *)result) >> 12);
      }
      v11 += 6;
      ++v12;
      if ( v11 >= a7 )
        v11 = v13 + a8 + 6;
      v10 += 4;
    }
    while ( (unsigned int)v10 < a3 );
  }
  return result;
}
