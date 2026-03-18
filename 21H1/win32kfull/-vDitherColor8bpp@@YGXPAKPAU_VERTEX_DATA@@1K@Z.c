/*
 * XREFs of ?vDitherColor8bpp@@YGXPAKPAU_VERTEX_DATA@@1K@Z @ 0x1E7943
 * Callers:
 *     _EngDitherColor@16 @ 0x1E7B57 (_EngDitherColor@16.c)
 * Callees:
 *     <none>
 */

void __userpurge vDitherColor8bpp(
        unsigned int *a1@<edx>,
        unsigned int **a2@<ecx>,
        unsigned int *a3,
        struct _VERTEX_DATA *a4,
        struct _VERTEX_DATA *a5,
        unsigned int a6)
{
  unsigned int *v6; // edi
  unsigned int v7; // ebx
  unsigned int *v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // eax
  _DWORD *v11; // esi
  unsigned int *v12; // eax
  unsigned int v13; // eax
  char v14; // bl
  unsigned int v15; // edi
  unsigned int i; // edi
  int v17; // eax
  unsigned int *v18; // ebx
  unsigned int v19; // esi
  unsigned int v20; // eax
  int *v21; // edi
  unsigned int *v22; // edx
  char v23; // bl
  int v24; // eax
  unsigned int v25; // esi
  int *v26; // edi
  int v27; // eax
  unsigned int *v28; // eax
  int v29; // [esp+18h] [ebp+Ch]

  if ( (unsigned int)a4 > 2 )
  {
    v6 = a1 + 4;
    if ( a4 == (struct _VERTEX_DATA *)3 )
    {
      v7 = *v6;
      v8 = a1 + 2;
      v9 = a1[2];
      if ( v9 >= *v6 )
      {
LABEL_6:
        if ( a1[2] > v9 )
        {
          v8 = a1 + 2;
          v9 = a1[2];
        }
        if ( *a1 > v9 )
          v8 = a1;
        v10 = v8[1];
        v8[1] = 255;
        v11 = &aulDither8bppOrder;
        v12 = (&ulNibbleTo8bppDword)[v10];
        *a2 = v12;
        a2[1] = v12;
        a2[2] = v12;
        a2[3] = v12;
        a2[4] = v12;
        a2[5] = v12;
        a2[6] = v12;
        a2[7] = v12;
        a2[8] = v12;
        a2[9] = v12;
        a2[10] = v12;
        a2[11] = v12;
        a2[12] = v12;
        a2[13] = v12;
        a2[14] = v12;
        a2[15] = v12;
        while ( 1 )
        {
          v13 = a1[1];
          if ( v13 != 255 )
            break;
          v11 += *a1;
LABEL_23:
          a1 += 2;
          if ( a1 >= a3 )
            return;
        }
        v14 = *((_BYTE *)&ajConvert + v13);
        v15 = *a1;
        v29 = *a1 & 3;
        if ( v29 != 1 )
        {
          if ( v29 != 2 )
          {
            if ( v29 != 3 )
              goto LABEL_21;
            *((_BYTE *)a2 + v11[2]) = v14;
          }
          *((_BYTE *)a2 + v11[1]) = v14;
        }
        *((_BYTE *)a2 + *v11) = v14;
        v11 += v29;
LABEL_21:
        for ( i = v15 >> 2; i; --i )
        {
          *((_BYTE *)a2 + *v11) = v14;
          *((_BYTE *)a2 + v11[1]) = v14;
          *((_BYTE *)a2 + v11[2]) = v14;
          v17 = v11[3];
          v11 += 4;
          *((_BYTE *)a2 + v17) = v14;
        }
        goto LABEL_23;
      }
      v8 = a1 + 4;
    }
    else
    {
      v9 = *v6;
      v8 = a1 + 6;
      v7 = a1[6];
      if ( *v6 >= v7 )
      {
        v8 = a1 + 4;
        goto LABEL_6;
      }
    }
    v9 = v7;
    goto LABEL_6;
  }
  v18 = a1 + 1;
  if ( a4 != (struct _VERTEX_DATA *)2 )
  {
    v28 = (&ulNibbleTo8bppDword)[*v18];
    *a2 = v28;
    a2[1] = v28;
    a2[2] = v28;
    a2[3] = v28;
    a2[4] = v28;
    a2[5] = v28;
    a2[6] = v28;
    a2[7] = v28;
    a2[8] = v28;
    a2[9] = v28;
    a2[10] = v28;
    a2[11] = v28;
    a2[12] = v28;
    a2[13] = v28;
    a2[14] = v28;
    a2[15] = v28;
    return;
  }
  v19 = a1[2];
  if ( *a1 < v19 )
  {
    v20 = a1[3];
    v19 = *a1;
    v21 = (int *)&aulDither8bppOrder;
  }
  else
  {
    v20 = *v18;
    v21 = (int *)((char *)&aulDither8bppOrder + 4 * *a1);
    v18 = a1 + 3;
  }
  v22 = (&ulNibbleTo8bppDword)[v20];
  v23 = *((_BYTE *)&ajConvert + *v18);
  *a2 = v22;
  a2[1] = v22;
  a2[2] = v22;
  a2[3] = v22;
  a2[4] = v22;
  a2[5] = v22;
  a2[6] = v22;
  a2[7] = v22;
  a2[8] = v22;
  a2[9] = v22;
  a2[10] = v22;
  a2[11] = v22;
  a2[12] = v22;
  a2[13] = v22;
  a2[14] = v22;
  a2[15] = v22;
  if ( (v19 & 3) != 1 )
  {
    if ( (v19 & 3) != 2 )
    {
      if ( (v19 & 3) != 3 )
        goto LABEL_35;
      *((_BYTE *)a2 + v21[2]) = v23;
    }
    *((_BYTE *)a2 + v21[1]) = v23;
  }
  v24 = *v21;
  v21 += v19 & 3;
  *((_BYTE *)a2 + v24) = v23;
LABEL_35:
  v25 = v19 >> 2;
  if ( v25 )
  {
    v26 = v21 + 2;
    do
    {
      *((_BYTE *)a2 + *(v26 - 2)) = v23;
      *((_BYTE *)a2 + *(v26 - 1)) = v23;
      v27 = *v26;
      v26 += 4;
      *((_BYTE *)a2 + v27) = v23;
      *((_BYTE *)a2 + *(v26 - 3)) = v23;
      --v25;
    }
    while ( v25 );
  }
}
