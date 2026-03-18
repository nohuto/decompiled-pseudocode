/*
 * XREFs of ?SortGestureConfigArray@@YGHPAUtagGESTURECONFIG@@H@Z @ 0xE3568
 * Callers:
 *     _SetGestureConfigSettings@20 @ 0xE3454 (_SetGestureConfigSettings@20.c)
 * Callees:
 *     <none>
 */

int __fastcall SortGestureConfigArray(unsigned int *a1, int a2)
{
  int v2; // ebx
  unsigned int *v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  _DWORD *i; // edx
  unsigned int *v9; // esi
  unsigned int *v10; // eax
  int *v11; // esi
  int v12; // edi
  unsigned int *v13; // eax
  unsigned int *v14; // edi
  unsigned int v15; // [esp+Ch] [ebp-2Ch]
  unsigned int v16; // [esp+10h] [ebp-28h]
  int v17; // [esp+14h] [ebp-24h]
  int v19; // [esp+1Ch] [ebp-1Ch]
  int v20; // [esp+20h] [ebp-18h]
  unsigned int *v22; // [esp+28h] [ebp-10h]
  int v23; // [esp+2Ch] [ebp-Ch]
  unsigned int *v24; // [esp+30h] [ebp-8h]
  unsigned int *v25; // [esp+34h] [ebp-4h]

  v2 = a2;
  v3 = a1;
  if ( a2 > 0 )
  {
    v4 = 1;
    if ( a2 / 9 > 1 )
    {
      do
        v4 = 3 * v4 + 1;
      while ( v4 < a2 / 9 );
      goto LABEL_5;
    }
    do
    {
      v5 = v4;
      if ( v4 < v2 )
      {
        v23 = 0;
        v22 = v3;
        v19 = 12 * v4;
        v9 = &v3[3 * v4];
        v10 = a1;
        v24 = v9;
        do
        {
          v15 = *v9;
          v11 = (int *)(v9 + 1);
          v16 = *v11;
          v17 = v11[1];
          v12 = v23;
          v20 = v23;
          if ( v23 >= 0 )
          {
            v13 = v22;
            v25 = v24;
            do
            {
              if ( *v13 <= v15 )
                break;
              *v25 = *v13;
              v25[1] = v13[1];
              v25[2] = v13[2];
              v12 = v20 - v4;
              v25 = (unsigned int *)((char *)v25 - v19);
              v13 = (unsigned int *)((char *)v13 - v19);
              v20 = v12;
            }
            while ( v12 >= 0 );
            v2 = a2;
            v10 = a1;
          }
          if ( v5 != v12 + v4 )
          {
            v14 = &v10[3 * v12 + 3 * v4];
            *v14++ = v15;
            *v14 = v16;
            v14[1] = v17;
          }
          ++v5;
          v22 += 3;
          v9 = v24 + 3;
          ++v23;
          v24 += 3;
        }
        while ( v5 < v2 );
        v3 = a1;
      }
      v4 /= 3;
LABEL_5:
      ;
    }
    while ( v4 > 0 );
    if ( *v3 || v2 == 1 )
    {
      v6 = 1;
      if ( v2 <= 1 )
        return 1;
      for ( i = v3 + 3; *i != *(i - 3); i += 3 )
      {
        if ( ++v6 >= v2 )
          return 1;
      }
    }
  }
  return 0;
}
