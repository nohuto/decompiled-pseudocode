/*
 * XREFs of _Do1141 @ 0x1C6929
 * Callers:
 *     _FastExpAA_CY @ 0x1C8D85 (_FastExpAA_CY.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall Do1141(_BYTE *a1, int a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5)
{
  int v7; // eax
  int v8; // edi
  _BYTE *v9; // edx
  unsigned __int8 *v10; // edi
  unsigned __int8 *result; // eax
  unsigned __int8 *v12; // ebx
  unsigned __int8 *v13; // [esp+Ch] [ebp-8h]
  unsigned __int8 *v14; // [esp+Ch] [ebp-8h]
  _BYTE *v15; // [esp+10h] [ebp-4h]
  _BYTE *v16; // [esp+10h] [ebp-4h]
  int v17; // [esp+24h] [ebp+10h]

  v15 = a1;
  v7 = a5 >> 2;
  v8 = a5 & 3;
  v17 = v8;
  v9 = a1;
  if ( v7 )
  {
    v10 = a3;
    do
    {
      *v9 = (*(unsigned __int8 *)a2 + 14 * *v10 + 8 + *a4) >> 4;
      v15[1] = (a4[1] + *(unsigned __int8 *)(a2 + 1) - 2 * v10[1] + 16 * v10[1] + 8) >> 4;
      v15[2] = (a4[2] + *(unsigned __int8 *)(a2 + 2) - 2 * v10[2] + 16 * v10[2] + 8) >> 4;
      v15[3] = (a4[3] + *(unsigned __int8 *)(a2 + 3) - 2 * v10[3] + 16 * v10[3] + 8) >> 4;
      v9 = v15 + 4;
      a2 += 4;
      v10 += 4;
      v15 += 4;
      a4 += 4;
      --v7;
    }
    while ( v7 );
    v13 = v10;
    v8 = v17;
    result = v13;
  }
  else
  {
    result = a3;
  }
  if ( v8 )
  {
    result -= a2;
    v12 = &a4[-a2];
    v14 = result;
    v16 = &v9[-a2];
    do
    {
      v16[a2] = (16 * result[a2] + v12[a2] - 2 * result[a2] + *(unsigned __int8 *)a2 + 8) >> 4;
      ++a2;
      result = v14;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
