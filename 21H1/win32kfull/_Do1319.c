/*
 * XREFs of _Do1319 @ 0x1C6AFC
 * Callers:
 *     _FastExpAA_CY @ 0x1C8D85 (_FastExpAA_CY.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Do1319(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v5; // esi
  unsigned int result; // eax
  unsigned int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  int v14; // [esp+1Ch] [ebp+Ch]

  v5 = a4 & 3;
  result = a4 >> 2;
  v14 = v5;
  if ( result )
  {
    v8 = result;
    do
    {
      *a1 = (13 * *a2 + 16 + 19 * (unsigned int)*a3) >> 5;
      a1[1] = (13 * a2[1] + 16 + 19 * (unsigned int)a3[1]) >> 5;
      a1[2] = (13 * a2[2] + 16 + 19 * (unsigned int)a3[2]) >> 5;
      v9 = a2[3];
      a2 += 4;
      v10 = 13 * v9;
      v11 = a3[3];
      a3 += 4;
      result = (unsigned int)(v10 + 19 * v11 + 16) >> 5;
      a1[3] = result;
      a1 += 4;
      --v8;
    }
    while ( v8 );
    v5 = v14;
  }
  if ( v5 )
  {
    v12 = a3 - a2;
    v13 = a1 - a2;
    do
    {
      result = (19 * a2[v12] + 13 * (unsigned int)*a2 + 16) >> 5;
      (a2++)[v13] = result;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
