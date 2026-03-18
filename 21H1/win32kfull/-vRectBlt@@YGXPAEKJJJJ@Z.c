/*
 * XREFs of ?vRectBlt@@YGXPAEKJJJJ@Z @ 0x1EFD03
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vRectBlt(unsigned __int8 *a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  unsigned __int8 *v7; // edi
  int v8; // ebx
  int v9; // ecx
  unsigned __int8 *v10; // edx
  __int16 v11; // ax
  unsigned __int8 *v12; // edi
  int v13; // ecx
  int v14; // [esp+20h] [ebp+14h]
  int v15; // [esp+24h] [ebp+18h]
  int v16; // [esp+28h] [ebp+1Ch]

  v16 = a6 - a4;
  v6 = a3 & 0xF;
  v7 = &a1[((a3 >> 3) & 0xFFFFFFFE) + a4 * a2];
  v8 = (a5 >> 4) - ((a3 + 15) >> 4);
  v9 = a5 & 0xF;
  v15 = v9;
  do
  {
    v10 = v7;
    v7 += a2;
    v14 = (int)v7;
    if ( v8 < 0 )
    {
      v11 = word_25D458[v9] & word_25D478[v6];
LABEL_13:
      *(_WORD *)v10 |= v11;
      goto LABEL_14;
    }
    if ( (a3 & 0xF) != 0 )
    {
      *(_WORD *)v10 |= word_25D478[v6];
      v10 += 2;
    }
    if ( v8 > 0 )
    {
      memset(v10, 0xFFu, 4 * ((unsigned int)v8 >> 1));
      v12 = &v10[4 * ((unsigned int)v8 >> 1)];
      v13 = v8 & 1;
      v10 += 2 * v8;
      while ( v13 )
      {
        *(_WORD *)v12 = -1;
        v12 += 2;
        --v13;
      }
      v9 = v15;
      v7 = (unsigned __int8 *)v14;
    }
    if ( v9 )
    {
      v11 = word_25D458[v9];
      goto LABEL_13;
    }
LABEL_14:
    --v16;
  }
  while ( v16 );
}
