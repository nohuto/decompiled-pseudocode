/*
 * XREFs of _Do3121 @ 0x1C6BBB
 * Callers:
 *     _FastExpAA_CY @ 0x1C8D85 (_FastExpAA_CY.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Do3121(unsigned int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
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
      *v10 = (3 * (*a2 + 4 * *a3) + 8 + (unsigned int)*a4) >> 4;
      v10[1] = (3 * (a2[1] + 4 * a3[1]) + 8 + (unsigned int)a4[1]) >> 4;
      v10[2] = (3 * (a2[2] + 4 * a3[2]) + 8 + (unsigned int)a4[2]) >> 4;
      --v7;
      v10[3] = (3 * (a2[3] + 4 * a3[3]) + 8 + (unsigned int)a4[3]) >> 4;
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
      result = (3 * (*a2 + 4 * a2[v11]) + 8 + (unsigned int)a2[v12]) >> 4;
      (a2++)[v14] = result;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
