/*
 * XREFs of _Do35 @ 0x1C6DD1
 * Callers:
 *     _FastExpAA_CY @ 0x1C8D85 (_FastExpAA_CY.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Do35(unsigned int a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  unsigned int result; // eax
  int v7; // edi
  int v8; // ecx
  _BYTE *v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // ebx
  int v14; // [esp+Ch] [ebp-4h]
  _BYTE *v15; // [esp+Ch] [ebp-4h]
  unsigned int v16; // [esp+Ch] [ebp-4h]
  int v17; // [esp+1Ch] [ebp+Ch]

  result = a1;
  v7 = a4 & 3;
  v8 = a4 >> 2;
  v17 = v7;
  if ( v8 )
  {
    v9 = (_BYTE *)result;
    do
    {
      v14 = v8 - 1;
      *v9 = (*a3 + *a2 + 2 * (*a2 + 2 * ((unsigned int)*a3 + 1))) >> 3;
      v9[1] = (a3[1] + a2[1] + 2 * (a2[1] + 2 * ((unsigned int)a3[1] + 1))) >> 3;
      v9[2] = (a3[2] + a2[2] + 2 * (a2[2] + 2 * ((unsigned int)a3[2] + 1))) >> 3;
      v10 = a3[3];
      a3 += 4;
      v11 = a2[3];
      a2 += 4;
      v12 = v11 + 2 * (v11 + 2 * (v10 + 1));
      v8 = v14;
      v9[3] = (unsigned int)(v10 + v12) >> 3;
      v9 += 4;
    }
    while ( v14 );
    v15 = v9;
    v7 = v17;
    result = (unsigned int)v15;
  }
  if ( v7 )
  {
    v13 = a3 - a2;
    v16 = result - (_DWORD)a2;
    do
    {
      result = (a2[v13] + *a2 + 2 * (*a2 + 2 * ((unsigned int)a2[v13] + 1))) >> 3;
      (a2++)[v16] = result;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
