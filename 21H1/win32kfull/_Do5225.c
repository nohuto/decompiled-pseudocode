/*
 * XREFs of _Do5225 @ 0x1C6EA8
 * Callers:
 *     _FastExpAA_CY @ 0x1C8D85 (_FastExpAA_CY.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall Do5225(_BYTE *a1, int a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  int v5; // eax
  int v6; // ebx
  _BYTE *v8; // edx
  unsigned __int8 *v9; // ecx
  unsigned __int8 *v10; // ebx
  unsigned __int8 *result; // eax
  unsigned __int8 *v12; // ecx
  unsigned __int8 *v13; // [esp+Ch] [ebp-Ch]
  unsigned __int8 *v14; // [esp+Ch] [ebp-Ch]
  unsigned __int8 *v15; // [esp+10h] [ebp-8h]
  unsigned __int8 *v16; // [esp+10h] [ebp-8h]
  _BYTE *v17; // [esp+14h] [ebp-4h]
  _BYTE *v18; // [esp+14h] [ebp-4h]
  int v19; // [esp+28h] [ebp+10h]

  v5 = a5 >> 2;
  v6 = a5 & 3;
  v17 = a1;
  v19 = v6;
  v8 = a1;
  v9 = a3;
  if ( v5 )
  {
    v10 = a4;
    v15 = a3;
    do
    {
      *v17 = (*(unsigned __int8 *)a2 + *v10
                                     + 2 * (*v9 + 8 + 2 * (*(unsigned __int8 *)a2 + *v10 + 5 * (unsigned int)*v9))) >> 5;
      v17[1] = (*(unsigned __int8 *)(a2 + 1)
              + v10[1]
              + 2 * (v15[1] + 8 + 2 * (*(unsigned __int8 *)(a2 + 1) + v10[1] + 5 * (unsigned int)v15[1]))) >> 5;
      v17[2] = (*(unsigned __int8 *)(a2 + 2)
              + v10[2]
              + 2 * (v15[2] + 8 + 2 * (*(unsigned __int8 *)(a2 + 2) + v10[2] + 5 * (unsigned int)v15[2]))) >> 5;
      v17[3] = (*(unsigned __int8 *)(a2 + 3)
              + v10[3]
              + 2 * (v15[3] + 8 + 2 * (*(unsigned __int8 *)(a2 + 3) + v10[3] + 5 * (unsigned int)v15[3]))) >> 5;
      v8 = v17 + 4;
      v9 = v15 + 4;
      a2 += 4;
      v17 += 4;
      v10 += 4;
      v15 += 4;
      --v5;
    }
    while ( v5 );
    v13 = v10;
    v6 = v19;
    result = v13;
  }
  else
  {
    result = a4;
  }
  if ( v6 )
  {
    v12 = &v9[-a2];
    result -= a2;
    v16 = v12;
    v14 = result;
    v18 = &v8[-a2];
    do
    {
      v18[a2] = (*(unsigned __int8 *)a2
               + result[a2]
               + 2 * (v12[a2] + 2 * (*(unsigned __int8 *)a2 + result[a2] + 5 * (unsigned int)v12[a2] + 4))) >> 5;
      ++a2;
      result = v14;
      v12 = v16;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
