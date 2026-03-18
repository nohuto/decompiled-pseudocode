/*
 * XREFs of _Do6251 @ 0x1C6FF5
 * Callers:
 *     _FastExpAA_CY @ 0x1C8D85 (_FastExpAA_CY.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Do6251(unsigned int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  unsigned int result; // eax
  int v7; // ecx
  int v8; // esi
  _BYTE *v10; // esi
  int v11; // ebx
  int v12; // edi
  _BYTE *v13; // [esp+Ch] [ebp-4h]
  unsigned int v14; // [esp+Ch] [ebp-4h]
  int v15; // [esp+20h] [ebp+10h]

  result = a1;
  v7 = a5 >> 2;
  v8 = a5 & 3;
  v15 = v8;
  if ( v7 )
  {
    v10 = (_BYTE *)result;
    do
    {
      *v10 = (25 * *a3 + 6 * *a2 + 16 + (unsigned int)*a4) >> 5;
      v10[1] = (6 * a2[1] + 25 * a3[1] + 16 + (unsigned int)a4[1]) >> 5;
      v10[2] = (6 * a2[2] + 25 * a3[2] + 16 + (unsigned int)a4[2]) >> 5;
      --v7;
      v10[3] = (6 * a2[3] + 25 * a3[3] + 16 + (unsigned int)a4[3]) >> 5;
      v10 += 4;
      a2 += 4;
      a3 += 4;
      a4 += 4;
    }
    while ( v7 );
    v13 = v10;
    v8 = v15;
    result = (unsigned int)v13;
  }
  if ( v8 )
  {
    v11 = a3 - a2;
    v12 = a4 - a2;
    v14 = result - (_DWORD)a2;
    do
    {
      result = (a2[v12] + 25 * a2[v11] + 16 + 6 * (unsigned int)*a2) >> 5;
      (a2++)[v14] = result;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
