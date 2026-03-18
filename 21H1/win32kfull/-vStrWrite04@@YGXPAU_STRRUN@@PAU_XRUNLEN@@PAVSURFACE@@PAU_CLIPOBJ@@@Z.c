/*
 * XREFs of ?vStrWrite04@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x22A92A
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z @ 0x9AB36 (-vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z @ 0x9C772 (-vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vStrWrite04(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v4; // edx
  struct SURFACE *v5; // edi
  int v6; // ecx
  _DWORD *v7; // esi
  struct _STRRUN *v8; // ebx
  int v9; // ebx
  _DWORD *v10; // edx
  int v11; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // ebx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // edx
  int v20; // esi
  size_t v21; // ecx
  char *v22; // edx
  char *v23; // esi
  unsigned int *v24; // esi
  int v25; // edx
  LONG v26; // edi
  char *v27; // esi
  XCLIPOBJ *v28; // ecx
  struct _XRUNLEN *v29; // ebx
  LONG *v30; // ecx
  int v31; // edi
  LONG v32; // esi
  int v33; // ebx
  int *v34; // edx
  int v35; // eax
  _DWORD *v36; // ecx
  int v37; // ecx
  char v38; // [esp+13h] [ebp-35h]
  int v39; // [esp+14h] [ebp-34h]
  int v40; // [esp+14h] [ebp-34h]
  int v41; // [esp+14h] [ebp-34h]
  struct _XRUNLEN *v42; // [esp+18h] [ebp-30h]
  int *v43; // [esp+1Ch] [ebp-2Ch]
  int v44; // [esp+1Ch] [ebp-2Ch]
  _DWORD *v45; // [esp+1Ch] [ebp-2Ch]
  int v46; // [esp+20h] [ebp-28h]
  int *v47; // [esp+20h] [ebp-28h]
  int v48; // [esp+24h] [ebp-24h]
  int v49; // [esp+24h] [ebp-24h]
  int v50; // [esp+24h] [ebp-24h]
  struct _XRUNLEN *v51; // [esp+24h] [ebp-24h]
  _DWORD *v52; // [esp+28h] [ebp-20h]
  int v53; // [esp+28h] [ebp-20h]
  int v54; // [esp+2Ch] [ebp-1Ch]
  int v55; // [esp+2Ch] [ebp-1Ch]
  int v56; // [esp+2Ch] [ebp-1Ch]
  int v57; // [esp+2Ch] [ebp-1Ch]
  int v58; // [esp+2Ch] [ebp-1Ch]
  unsigned int v59; // [esp+30h] [ebp-18h]
  size_t v60; // [esp+30h] [ebp-18h]
  unsigned int v61; // [esp+30h] [ebp-18h]
  LONG v62; // [esp+30h] [ebp-18h]
  _DWORD *Src; // [esp+34h] [ebp-14h]
  unsigned int Srca; // [esp+34h] [ebp-14h]
  unsigned int Srcb; // [esp+34h] [ebp-14h]
  char *Srcc; // [esp+34h] [ebp-14h]
  struct _RECTL v67; // [esp+38h] [ebp-10h] BYREF

  if ( a2 )
  {
    v4 = (struct _STRRUN *)((char *)a1 + 8);
    v42 = (struct _STRRUN *)((char *)a1 + 8);
    if ( !a4 )
    {
      v5 = a3;
      v6 = *((_DWORD *)a3 + 12) + *(_DWORD *)a1 * *((_DWORD *)a3 + 13);
      v46 = v6;
      while ( 1 )
      {
        if ( v4 == a2 )
          return;
        v48 = *(_DWORD *)v4;
        v54 = *(_DWORD *)v4 + *((_DWORD *)v4 + 1);
        v7 = (_DWORD *)(v6 + 4 * (*(int *)v4 >> 3));
        Src = v7;
        v43 = v7;
        if ( *(_DWORD *)v4 < v54 )
        {
          v39 = *v7;
          v8 = a1;
          if ( (unsigned int)v7 < *((_DWORD *)v5 + 10) + *((_DWORD *)v5 + 11) )
          {
            v9 = *(_DWORD *)v4 & 7;
            v10 = (_DWORD *)((char *)v4 + 8);
            v11 = v48;
            v52 = v10;
            do
            {
              v12 = v39 & ~dword_252A40[v9] | dword_252A40[v9] & (*v10 << dword_252A20[v9]);
              v10 = v52 + 1;
              v39 = v12;
              ++v9;
              ++v52;
              if ( ++v11 >= v54 )
                break;
              if ( (v9 & 8) != 0 )
              {
                *v43++ = v12;
                v9 = 0;
                v39 = *v43;
              }
            }
            while ( (unsigned int)v43 < *((_DWORD *)v5 + 10) + *((_DWORD *)v5 + 11) );
            v7 = Src;
            v8 = a1;
            v4 = v42;
          }
          *v43 = v39;
          v13 = *((_DWORD *)v8 + 1);
          v6 = v46;
          if ( v13 > 1 )
          {
            v14 = *(_DWORD *)v4 + *((_DWORD *)v4 + 1);
            v44 = *(int *)v4 >> 3;
            v40 = v14 >> 3;
            v49 = *(_DWORD *)v4 & 7;
            v5 = a3;
            if ( v44 == v14 >> 3 )
            {
              v15 = *v7;
              v55 = 1;
              Srca = (unsigned int)(&aulMsk)[4 * v49] & ~(unsigned int)(&aulMsk)[4 * (v14 & 7)];
              v16 = ~Srca;
              do
              {
                v7 = (_DWORD *)((char *)v7 + *((_DWORD *)a3 + 13));
                v17 = Srca & v15;
                v18 = *v7 & v16;
                v16 = ~Srca;
                v15 = v17 | v18;
                *v7 = v15;
                ++v55;
              }
              while ( v55 < *((_DWORD *)a1 + 1) );
              v4 = v42;
LABEL_17:
              v6 = v46;
              goto LABEL_18;
            }
            if ( 4 * v49 )
            {
              Srcb = ~(unsigned int)(&aulMsk)[4 * v49];
              v19 = 1;
              v59 = *v7 & (unsigned int)(&aulMsk)[4 * v49];
              do
              {
                v7 = (_DWORD *)((char *)v7 + *((_DWORD *)a3 + 13));
                ++v19;
                *v7 = v59 | Srcb & *v7;
                v13 = *((_DWORD *)a1 + 1);
              }
              while ( v19 < v13 );
              v4 = v42;
              v20 = v44 + 1;
            }
            else
            {
              v20 = *(int *)v4 >> 3;
            }
            v50 = v13;
            if ( v20 != v40 )
            {
              v50 = v13;
              v21 = 4 * (v40 - v20);
              v60 = v21;
              v56 = 1;
              if ( v13 > 1 )
              {
                v22 = (char *)(v46 + 4 * v20);
                do
                {
                  v23 = &v22[*((_DWORD *)a3 + 13)];
                  memcpy(v23, v22, v21);
                  v21 = v60;
                  v22 = v23;
                  ++v56;
                  v50 = *((_DWORD *)a1 + 1);
                }
                while ( v56 < v50 );
                v4 = v42;
              }
            }
            if ( !(4 * (v14 & 7)) )
              goto LABEL_17;
            v6 = v46;
            v24 = (unsigned int *)(v46 + 4 * v40);
            v61 = (unsigned int)(&aulMsk)[4 * (v14 & 7)];
            v57 = *v24 & ~v61;
            if ( v50 > 1 )
            {
              v25 = 1;
              do
              {
                v24 = (unsigned int *)((char *)v24 + *((_DWORD *)a3 + 13));
                ++v25;
                *v24 = v57 | v61 & *v24;
              }
              while ( v25 < *((_DWORD *)a1 + 1) );
              v4 = v42;
            }
          }
        }
LABEL_18:
        v4 = (struct _XRUNLEN *)((char *)v4 + 4 * *((_DWORD *)v4 + 1) + 8);
        v42 = v4;
      }
    }
    XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
    v26 = *(_DWORD *)a1;
    v27 = (char *)*((_DWORD *)a1 + 1);
    v67.left = 0x7FFFFFFF;
    v67.top = 0x7FFFFFFF;
    v67.right = 0x80000000;
    v67.bottom = 0x80000000;
    v62 = v26;
    XCLIPOBJ::vFindScan(v28, &v67, v26);
    if ( v27 )
    {
      v29 = (struct _STRRUN *)((char *)a1 + 8);
      do
      {
        Srcc = --v27;
        if ( v26 >= v67.top && v26 < v67.bottom )
        {
          v53 = *((_DWORD *)a3 + 12) + v26 * *((_DWORD *)a3 + 13);
          if ( v29 != a2 )
          {
            v30 = (LONG *)v29;
            v31 = *((_DWORD *)a3 + 12) + v26 * *((_DWORD *)a3 + 13);
            v51 = v29;
            do
            {
              v32 = *v30;
              v33 = *v30 & 7;
              v58 = *v30 + v30[1];
              v34 = (int *)(v31 + 4 * (*v30 >> 3));
              v47 = v34;
              if ( *v30 < 0 || v32 >= *((_DWORD *)a3 + 8) )
              {
                v38 = 0;
                v35 = 0;
              }
              else
              {
                v35 = *v34;
                v38 = 1;
              }
              v41 = v35;
              if ( v32 < v58 )
              {
                v36 = v30 + 2;
                v45 = v36;
                do
                {
                  if ( v32 < v67.left || v32 >= v67.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &v67, v32, (int)v36);
                    v36 = v45;
                  }
                  if ( v32 < v67.left || v32 >= v67.right )
                  {
                    v37 = v41;
                  }
                  else
                  {
                    v37 = dword_252A40[v33] & (*v36 << dword_252A20[v33]) | ~dword_252A40[v33] & v41;
                    v41 = v37;
                  }
                  ++v45;
                  ++v33;
                  v34 = v47;
                  ++v32;
                  if ( (v33 & 8) != 0 )
                  {
                    if ( v38 )
                      *v47 = v37;
                    v34 = v47 + 1;
                    v33 = 0;
                    ++v47;
                    if ( v32 < 0 || v32 >= *((_DWORD *)a3 + 8) )
                    {
                      v38 = 0;
                      v35 = 0;
                    }
                    else
                    {
                      v35 = *v34;
                      v38 = 1;
                    }
                    v41 = v35;
                  }
                  else
                  {
                    v35 = v41;
                  }
                  v36 = v45;
                }
                while ( v32 < v58 );
                v30 = (LONG *)v51;
                v31 = v53;
              }
              if ( v38 )
                *v34 = v35;
              v30 += v30[1] + 2;
              v51 = (struct _XRUNLEN *)v30;
            }
            while ( v30 != (LONG *)a2 );
            v26 = v62;
            v29 = (struct _STRRUN *)((char *)a1 + 8);
            v27 = Srcc;
          }
        }
        v62 = ++v26;
        if ( v26 < v67.top || v26 >= v67.bottom )
          XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &v67, v26);
      }
      while ( v27 );
    }
  }
}
