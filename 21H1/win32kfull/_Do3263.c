/*
 * XREFs of _Do3263 @ 0x1C6CAE
 * Callers:
 *     _FastExpAA_CY @ 0x1C8D85 (_FastExpAA_CY.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall Do3263(_BYTE *a1, int a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  int v7; // eax
  int v8; // edi
  unsigned __int8 *v9; // edi
  unsigned __int8 *result; // eax
  unsigned __int8 *v11; // ebx
  unsigned __int8 *v12; // [esp+Ch] [ebp-8h]
  unsigned __int8 *v13; // [esp+Ch] [ebp-8h]
  _BYTE *v14; // [esp+10h] [ebp-4h]
  _BYTE *v15; // [esp+10h] [ebp-4h]
  int v16; // [esp+24h] [ebp+10h]

  v14 = a1;
  v7 = a5 >> 2;
  v8 = a5 & 3;
  v16 = v8;
  if ( v7 )
  {
    v9 = a3;
    do
    {
      *v14 = (*(unsigned __int8 *)a2 + 16 + *a4 + 2 * (*(unsigned __int8 *)a2 + *a4 + 13 * (unsigned int)*v9)) >> 5;
      v14[1] = (*(unsigned __int8 *)(a2 + 1)
              + 16
              + a4[1]
              + 2 * (*(unsigned __int8 *)(a2 + 1) + a4[1] + 13 * (unsigned int)v9[1])) >> 5;
      v14[2] = (*(unsigned __int8 *)(a2 + 2)
              + 16
              + a4[2]
              + 2 * (*(unsigned __int8 *)(a2 + 2) + a4[2] + 13 * (unsigned int)v9[2])) >> 5;
      v14[3] = (*(unsigned __int8 *)(a2 + 3)
              + a4[3]
              + 16
              + 2 * (*(unsigned __int8 *)(a2 + 3) + a4[3] + 13 * (unsigned int)v9[3])) >> 5;
      a1 = v14 + 4;
      a2 += 4;
      v9 += 4;
      v14 += 4;
      a4 += 4;
      --v7;
    }
    while ( v7 );
    v12 = v9;
    v8 = v16;
    result = v12;
  }
  else
  {
    result = a3;
  }
  if ( v8 )
  {
    result -= a2;
    v11 = &a4[-a2];
    v13 = result;
    v15 = &a1[-a2];
    do
    {
      v15[a2] = (*(unsigned __int8 *)a2
               + v11[a2]
               + 16
               + 2 * (*(unsigned __int8 *)a2 + v11[a2] + 13 * (unsigned int)result[a2])) >> 5;
      ++a2;
      result = v13;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
