/*
 * XREFs of ?vDitherColor4bpp@@YGXPAKPAU_VERTEX_DATA@@1K@Z @ 0x1E76B7
 * Callers:
 *     _EngDitherColor@16 @ 0x1E7B57 (_EngDitherColor@16.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge vDitherColor4bpp(
        unsigned int *a1@<edx>,
        unsigned int *a2@<ecx>,
        unsigned int *a3,
        struct _VERTEX_DATA *a4,
        struct _VERTEX_DATA *a5,
        unsigned int a6)
{
  unsigned int *v6; // esi
  unsigned int v7; // edi
  unsigned int *v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int *v11; // ecx
  unsigned int v12; // esi
  char v13; // bl
  int v14; // edi
  int v15; // eax
  unsigned int i; // esi
  int v17; // eax
  int *v18; // ebx
  int *v19; // edi
  unsigned int v20; // ecx
  int v21; // eax
  int *v22; // edx
  char v23; // bl
  int v24; // eax
  unsigned int v25; // ecx
  int *v26; // edx
  int v27; // eax
  int v28; // edx
  int v29; // esi
  int v30; // edi
  int v31; // ebx
  unsigned int v32; // ecx
  int v33; // [esp+Ch] [ebp-58h]
  int v34; // [esp+10h] [ebp-54h]
  int v36; // [esp+1Ch] [ebp-48h]
  unsigned int *v37; // [esp+20h] [ebp-44h]
  unsigned int v38; // [esp+24h] [ebp-40h]
  unsigned int *v39; // [esp+28h] [ebp-3Ch]
  unsigned int v40; // [esp+2Ch] [ebp-38h]
  unsigned int *v41; // [esp+30h] [ebp-34h]
  unsigned int v42; // [esp+34h] [ebp-30h]
  unsigned int *v43; // [esp+38h] [ebp-2Ch]
  unsigned int v44; // [esp+3Ch] [ebp-28h]
  unsigned int *v45; // [esp+40h] [ebp-24h]
  unsigned int v46; // [esp+44h] [ebp-20h]
  unsigned int *v47; // [esp+48h] [ebp-1Ch]
  unsigned int v48; // [esp+4Ch] [ebp-18h]
  unsigned int *v49; // [esp+50h] [ebp-14h]
  unsigned int v50; // [esp+54h] [ebp-10h]
  unsigned int *v51; // [esp+58h] [ebp-Ch]
  unsigned int v52; // [esp+5Ch] [ebp-8h]

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
        v11 = (int *)&aulDither4bppOrder;
        v37 = (&ulNibbleTo4bppDword)[v10];
        v38 = (unsigned int)v37;
        v39 = v37;
        v40 = (unsigned int)v37;
        v41 = v37;
        v42 = (unsigned int)v37;
        v43 = v37;
        v44 = (unsigned int)v37;
        v45 = v37;
        v46 = (unsigned int)v37;
        v47 = v37;
        v48 = (unsigned int)v37;
        v49 = v37;
        v50 = (unsigned int)v37;
        v51 = v37;
        v52 = (unsigned int)v37;
        while ( a1[1] == 255 )
        {
          v11 += *a1;
LABEL_23:
          a1 += 2;
          if ( a1 >= a3 )
            goto LABEL_38;
        }
        v12 = *a1;
        v13 = *((_BYTE *)a1 + 4);
        v14 = *a1 & 3;
        if ( v14 != 1 )
        {
          if ( (*a1 & 3) != 2 )
          {
            if ( (*a1 & 3) != 3 )
              goto LABEL_21;
            *((_BYTE *)&v37 + v11[2]) = v13;
          }
          *((_BYTE *)&v37 + v11[1]) = v13;
        }
        v15 = *v11;
        v11 += v14;
        *((_BYTE *)&v37 + v15) = v13;
LABEL_21:
        for ( i = v12 >> 2; i; --i )
        {
          *((_BYTE *)&v37 + *v11) = v13;
          *((_BYTE *)&v37 + v11[1]) = v13;
          *((_BYTE *)&v37 + v11[2]) = v13;
          v17 = v11[3];
          v11 += 4;
          *((_BYTE *)&v37 + v17) = v13;
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
  v18 = (int *)(a1 + 1);
  if ( a4 != (struct _VERTEX_DATA *)2 )
  {
    v32 = (unsigned int)(&ulNibbleTo4bppDword)[*v18] | (16 * (_DWORD)(&ulNibbleTo4bppDword)[*v18]);
    v36 = v32;
    v28 = v32;
    v33 = v32;
    v29 = v32;
    v30 = v32;
    v34 = v32;
    v31 = v32;
    goto LABEL_40;
  }
  v19 = (int *)(a1 + 3);
  v20 = a1[2];
  if ( *a1 < v20 )
  {
    v21 = *v19;
    v20 = *a1;
    v22 = (int *)&aulDither4bppOrder;
    v19 = v18;
  }
  else
  {
    v21 = *v18;
    v22 = (int *)((char *)&aulDither4bppOrder + 4 * *a1);
  }
  v23 = *(_BYTE *)v19;
  v37 = (&ulNibbleTo4bppDword)[v21];
  v38 = (unsigned int)v37;
  v39 = v37;
  v40 = (unsigned int)v37;
  v41 = v37;
  v42 = (unsigned int)v37;
  v43 = v37;
  v44 = (unsigned int)v37;
  v45 = v37;
  v46 = (unsigned int)v37;
  v47 = v37;
  v48 = (unsigned int)v37;
  v49 = v37;
  v50 = (unsigned int)v37;
  v51 = v37;
  v52 = (unsigned int)v37;
  switch ( v20 & 3 )
  {
    case 1u:
      goto LABEL_34;
    case 2u:
LABEL_33:
      *((_BYTE *)&v37 + v22[1]) = v23;
LABEL_34:
      v24 = *v22;
      v22 += v20 & 3;
      *((_BYTE *)&v37 + v24) = v23;
      break;
    case 3u:
      *((_BYTE *)&v37 + v22[2]) = v23;
      goto LABEL_33;
  }
  v25 = v20 >> 2;
  if ( v25 )
  {
    v26 = v22 + 2;
    do
    {
      *((_BYTE *)&v37 + *(v26 - 2)) = v23;
      *((_BYTE *)&v37 + *(v26 - 1)) = v23;
      v27 = *v26;
      v26 += 4;
      *((_BYTE *)&v37 + v27) = v23;
      *((_BYTE *)&v37 + *(v26 - 3)) = v23;
      --v25;
    }
    while ( v25 );
  }
LABEL_38:
  v36 = v52 | (16 * (_DWORD)v51);
  v34 = v40 | (16 * (_DWORD)v39);
  v28 = v48 | (16 * (_DWORD)v47);
  v29 = v46 | (16 * (_DWORD)v45);
  v30 = v44 | (16 * (_DWORD)v43);
  v31 = v42 | (16 * (_DWORD)v41);
  v32 = v38 | (16 * (_DWORD)v37);
  v33 = v50 | (16 * (_DWORD)v49);
LABEL_40:
  *a2 = v32;
  a2[1] = v34;
  a2[2] = v31;
  a2[3] = v30;
  a2[4] = v29;
  a2[5] = v28;
  a2[6] = v33;
  a2[7] = v36;
}
