/*
 * XREFs of ?vStrWrite01@@YGXPAU_STRRUN@@PAU_XRUNLEN@@PAVSURFACE@@PAU_CLIPOBJ@@@Z @ 0x4D98E
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z @ 0x9AB36 (-vFindScan@XCLIPOBJ@@QAEXPAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z @ 0x9C772 (-vFindSegment@XCLIPOBJ@@QBEXPAU_RECTL@@JJ@Z.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vStrWrite01(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _STRRUN *v4; // ebx
  struct _XRUNLEN *v5; // esi
  struct SURFACE *v6; // edi
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edx
  int v10; // ecx
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  int v15; // esi
  int v16; // eax
  unsigned int v17; // esi
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // edx
  int v22; // edx
  int v23; // esi
  size_t v24; // edx
  char *v25; // ecx
  char *v26; // esi
  unsigned int *v27; // ecx
  int v28; // edx
  XCLIPOBJ *v29; // ecx
  LONG v30; // edi
  int v31; // ebx
  LONG *v32; // ecx
  int v33; // edi
  LONG v34; // esi
  int v35; // edx
  _DWORD *v36; // eax
  int v37; // ebx
  _DWORD *v38; // ecx
  int v39; // eax
  char v40; // [esp+13h] [ebp-35h]
  _DWORD *v41; // [esp+14h] [ebp-34h]
  int v42; // [esp+14h] [ebp-34h]
  int v43; // [esp+14h] [ebp-34h]
  int v44; // [esp+18h] [ebp-30h]
  int v45; // [esp+18h] [ebp-30h]
  int v46; // [esp+18h] [ebp-30h]
  int *v47; // [esp+1Ch] [ebp-2Ch]
  int v48; // [esp+20h] [ebp-28h]
  _DWORD *v49; // [esp+20h] [ebp-28h]
  _DWORD *v50; // [esp+24h] [ebp-24h]
  int v51; // [esp+24h] [ebp-24h]
  int v52; // [esp+24h] [ebp-24h]
  int v53; // [esp+24h] [ebp-24h]
  int v54; // [esp+24h] [ebp-24h]
  int v55; // [esp+28h] [ebp-20h]
  int v56; // [esp+28h] [ebp-20h]
  int v57; // [esp+28h] [ebp-20h]
  int v58; // [esp+28h] [ebp-20h]
  _DWORD *v59; // [esp+28h] [ebp-20h]
  _DWORD *v60; // [esp+2Ch] [ebp-1Ch]
  unsigned int v61; // [esp+2Ch] [ebp-1Ch]
  size_t v62; // [esp+2Ch] [ebp-1Ch]
  struct _XRUNLEN *v63; // [esp+2Ch] [ebp-1Ch]
  unsigned int Src; // [esp+30h] [ebp-18h]
  char *Srca; // [esp+30h] [ebp-18h]
  unsigned int Srcb; // [esp+30h] [ebp-18h]
  void *Srcc; // [esp+30h] [ebp-18h]
  int v68; // [esp+34h] [ebp-14h]
  struct _RECTL v69; // [esp+38h] [ebp-10h] BYREF

  if ( a2 )
  {
    v4 = a1;
    v5 = (struct _STRRUN *)((char *)a1 + 8);
    v47 = (int *)((char *)a1 + 8);
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v30 = *(_DWORD *)a1;
      v31 = *((_DWORD *)a1 + 1);
      v69.left = 0x7FFFFFFF;
      v69.top = 0x7FFFFFFF;
      v69.right = 0x80000000;
      v69.bottom = 0x80000000;
      Srcc = (void *)v30;
LABEL_72:
      XCLIPOBJ::vFindScan(v29, &v69, v30);
      while ( v31 )
      {
        v68 = --v31;
        if ( v30 >= v69.top && v30 < v69.bottom )
        {
          v43 = *((_DWORD *)a3 + 12) + v30 * *((_DWORD *)a3 + 13);
          if ( v5 != a2 )
          {
            v32 = (LONG *)v5;
            v33 = *((_DWORD *)a3 + 12) + v30 * *((_DWORD *)a3 + 13);
            v63 = v5;
            do
            {
              v34 = *v32;
              v35 = *v32 & 0x1F;
              v54 = v35;
              v46 = *v32 + v32[1];
              v36 = (_DWORD *)(v33 + 4 * (*v32 >> 5));
              v49 = v36;
              if ( *v32 < 0 || v34 >= *((_DWORD *)a3 + 8) )
              {
                v40 = 0;
                v37 = 0;
              }
              else
              {
                v37 = *v36;
                v40 = 1;
              }
              if ( v34 < v46 )
              {
                v38 = v32 + 2;
                v59 = v38;
                do
                {
                  if ( v34 < v69.left || v34 >= v69.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &v69, v34, (int)v38);
                    v35 = v54;
                    v38 = v59;
                  }
                  if ( v34 >= v69.left && v34 < v69.right )
                  {
                    v39 = dword_252A60[v35];
                    if ( *v38 )
                      v37 |= v39;
                    else
                      v37 &= ~v39;
                  }
                  v36 = v49;
                  ++v35;
                  ++v38;
                  v54 = v35;
                  ++v34;
                  v59 = v38;
                  if ( (v35 & 0x20) != 0 )
                  {
                    if ( v40 )
                      *v49 = v37;
                    v36 = v49 + 1;
                    v35 = 0;
                    ++v49;
                    v54 = 0;
                    if ( v34 < 0 || v34 >= *((_DWORD *)a3 + 8) )
                    {
                      v40 = 0;
                      v37 = 0;
                    }
                    else
                    {
                      v37 = *v36;
                      v40 = 1;
                    }
                  }
                }
                while ( v34 < v46 );
                v32 = (LONG *)v63;
                v33 = v43;
              }
              if ( v40 )
                *v36 = v37;
              v32 += v32[1] + 2;
              v63 = (struct _XRUNLEN *)v32;
            }
            while ( v32 != (LONG *)a2 );
            v30 = (LONG)Srcc;
            v5 = (struct _STRRUN *)((char *)a1 + 8);
            v31 = v68;
          }
        }
        Srcc = (void *)++v30;
        if ( v30 < v69.top || v30 >= v69.bottom )
        {
          v29 = (XCLIPOBJ *)a4;
          goto LABEL_72;
        }
      }
    }
    else
    {
      v6 = a3;
      v7 = *((_DWORD *)a3 + 12) + *(_DWORD *)a1 * *((_DWORD *)a3 + 13);
      v48 = v7;
      while ( v5 != a2 )
      {
        v8 = *(_DWORD *)v5;
        v55 = v8 + v47[1];
        v9 = (_DWORD *)(v7 + 4 * (v8 >> 5));
        v60 = v9;
        v50 = v9;
        if ( v8 < v55 )
        {
          v44 = *v9;
          if ( (unsigned int)v9 < *((_DWORD *)v6 + 10) + *((_DWORD *)v6 + 11) )
          {
            v10 = v8 & 0x1F;
            v11 = v47 + 2;
            v12 = *v9;
            v41 = v47 + 2;
            do
            {
              ++v41;
              v51 = dword_252A60[v10];
              v6 = a3;
              if ( *v11 )
                v12 |= v51;
              else
                v12 &= ~v51;
              ++v10;
              if ( ++v8 >= v55 )
                break;
              if ( (v10 & 0x20) != 0 )
              {
                *v9++ = v12;
                v10 = 0;
                v12 = *v9;
              }
              v11 = v41;
            }
            while ( (unsigned int)v9 < *((_DWORD *)a3 + 10) + *((_DWORD *)a3 + 11) );
            v7 = v48;
            v50 = v9;
            v9 = v60;
            v44 = v12;
            v4 = a1;
          }
          *v50 = v44;
          v13 = *((_DWORD *)v4 + 1);
          if ( v13 > 1 )
          {
            v14 = *v47 + v47[1];
            v45 = *v47 & 0x1F;
            v42 = v14 >> 5;
            v15 = *v47 >> 5;
            v52 = v14 & 0x1F;
            v4 = a1;
            if ( v15 == v42 )
            {
              v16 = v52;
              v53 = 1;
              v17 = (unsigned int)(&aulMsk)[v45] & ~(unsigned int)(&aulMsk)[v16];
              v18 = ~v17;
              v56 = *v9;
              do
              {
                v9 = (_DWORD *)((char *)v9 + *((_DWORD *)v6 + 13));
                v19 = v17 & v56 | *v9 & v18;
                *v9 = v19;
                v56 = v19;
                v18 = ~v17;
                ++v53;
              }
              while ( v53 < *((_DWORD *)a1 + 1) );
            }
            else
            {
              if ( v45 )
              {
                Src = ~(unsigned int)(&aulMsk)[v45];
                v20 = 1;
                v61 = *v9 & (unsigned int)(&aulMsk)[v45];
                do
                {
                  v9 = (_DWORD *)((char *)v9 + *((_DWORD *)v6 + 13));
                  ++v20;
                  *v9 = v61 | Src & *v9;
                  v13 = *((_DWORD *)a1 + 1);
                }
                while ( v20 < v13 );
                v7 = v48;
                ++v15;
              }
              v21 = v42;
              if ( v15 == v42 )
              {
                v23 = v13;
              }
              else
              {
                v57 = 1;
                Srca = (char *)(v7 + 4 * v15);
                v22 = v42 - v15;
                v23 = v13;
                v24 = 4 * v22;
                v62 = v24;
                if ( v13 > 1 )
                {
                  v25 = Srca;
                  do
                  {
                    v26 = &v25[*((_DWORD *)v6 + 13)];
                    memcpy(v26, v25, v24);
                    v24 = v62;
                    v25 = v26;
                    ++v57;
                    v23 = *((_DWORD *)a1 + 1);
                  }
                  while ( v57 < v23 );
                  v7 = v48;
                }
                v21 = v42;
              }
              if ( v52 )
              {
                v27 = (unsigned int *)(v7 + 4 * v21);
                Srcb = (unsigned int)(&aulMsk)[v52];
                v28 = *v27 & ~Srcb;
                v58 = 1;
                if ( v23 > 1 )
                {
                  do
                  {
                    v27 = (unsigned int *)((char *)v27 + *((_DWORD *)v6 + 13));
                    *v27 = v28 | Srcb & *v27;
                    ++v58;
                  }
                  while ( v58 < *((_DWORD *)a1 + 1) );
                }
              }
            }
          }
        }
        v7 = v48;
        v5 = (struct _XRUNLEN *)&v47[v47[1] + 2];
        v47 = (int *)v5;
      }
    }
  }
}
