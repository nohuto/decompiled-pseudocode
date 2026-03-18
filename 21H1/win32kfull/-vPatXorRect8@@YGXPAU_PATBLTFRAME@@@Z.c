/*
 * XREFs of ?vPatXorRect8@@YGXPAU_PATBLTFRAME@@@Z @ 0x111D6
 * Callers:
 *     <none>
 * Callees:
 *     _vFetchAndMerge@4 @ 0xEDD06 (_vFetchAndMerge@4.c)
 *     _vFetchShiftAndMerge@4 @ 0xEDD5D (_vFetchShiftAndMerge@4.c)
 */

void __stdcall vPatXorRect8(struct _PATBLTFRAME *a1)
{
  struct _PATBLTFRAME *v1; // esi
  _DWORD *v2; // ebx
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  unsigned int v7; // eax
  signed int v8; // eax
  unsigned int v9; // ecx
  int v10; // ecx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // edi
  unsigned int v14; // edx
  unsigned int v15; // eax
  int v16; // eax
  int v17; // eax
  _DWORD *v18; // ecx
  unsigned int v19; // edx
  int v20; // eax
  int v21; // eax
  bool v22; // cc
  _DWORD *v23; // ecx
  int v24; // edx
  int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // edi
  int v28; // ecx
  int v29; // eax
  struct _PATBLTFRAME *v30; // edx
  int v31; // ebx
  struct _PATBLTFRAME *v32; // edi
  struct _PATBLTFRAME *v33; // eax
  char *v34; // edi
  int v35; // eax
  unsigned int v36; // [esp+Ch] [ebp-44h] BYREF
  int v37; // [esp+10h] [ebp-40h]
  unsigned int v38; // [esp+14h] [ebp-3Ch]
  struct _PATBLTFRAME *v39; // [esp+18h] [ebp-38h]
  unsigned int v40; // [esp+1Ch] [ebp-34h]
  struct _PATBLTFRAME *v41; // [esp+20h] [ebp-30h]
  int v42; // [esp+24h] [ebp-2Ch]
  int v43; // [esp+28h] [ebp-28h]
  int v44; // [esp+2Ch] [ebp-24h]
  unsigned int v45; // [esp+30h] [ebp-20h]
  unsigned int v46; // [esp+34h] [ebp-1Ch]
  unsigned int v47; // [esp+38h] [ebp-18h]
  int v48; // [esp+3Ch] [ebp-14h]
  _DWORD *v49; // [esp+40h] [ebp-10h]
  unsigned int v50; // [esp+44h] [ebp-Ch]
  unsigned int v51; // [esp+48h] [ebp-8h]
  unsigned int v52; // [esp+4Ch] [ebp-4h]
  struct _PATBLTFRAME *v53; // [esp+58h] [ebp+8h]
  struct _PATBLTFRAME *v54; // [esp+58h] [ebp+8h]
  struct _PATBLTFRAME *v55; // [esp+58h] [ebp+8h]
  struct _PATBLTFRAME *v56; // [esp+58h] [ebp+8h]
  struct _PATBLTFRAME *v57; // [esp+58h] [ebp+8h]

  v1 = a1;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v2 = (_DWORD *)*((_DWORD *)a1 + 4);
  v39 = 0;
  v41 = 0;
  v42 = 0;
  v3 = *((_DWORD *)a1 + 9);
  v4 = v3 * *v2;
  v5 = v3 * v2[2];
  v6 = ((_BYTE)v3 * *(_BYTE *)v2) & 3;
  v51 = v4 & 0xFFFFFFFC;
  v49 = (_DWORD *)v6;
  v43 = v5 & 3;
  v50 = (unsigned int)(&aulLeftMask)[v6];
  v7 = ~(unsigned int)(&aulLeftMask)[v43];
  v47 = v5 & 0xFFFFFFFC;
  v46 = v7;
  v8 = (v4 & 0xFFFFFFFC) - *((_DWORD *)a1 + 5);
  v9 = *((_DWORD *)a1 + 7);
  if ( v8 < 0 )
    v10 = v9 - ~v8 % v9 - 1;
  else
    v10 = v8 % v9;
  v52 = v10;
  v11 = *((_DWORD *)a1 + 8);
  v45 = v2[1];
  v12 = v45 - *((_DWORD *)a1 + 6);
  if ( v12 < 0 )
    v13 = v11 - ~v12 % v11 - 1;
  else
    v13 = v12 % v11;
  v48 = v13;
  v14 = v51;
  v15 = v47;
  if ( v51 == v47 )
  {
    v50 &= v46;
  }
  else if ( !v49 )
  {
    goto LABEL_7;
  }
  v20 = v45 * *((_DWORD *)a1 + 2);
  v38 = v10;
  v45 = v51 + *(_DWORD *)a1 + v20;
  v21 = *((_DWORD *)a1 + 1) + v13 * *((_DWORD *)a1 + 3);
  v37 = v21;
  v22 = v2[1] < v2[3];
  v49 = (_DWORD *)v2[1];
  v1 = a1;
  if ( v22 )
  {
    v23 = (_DWORD *)v45;
    v24 = v13;
    do
    {
      *v23 ^= v50 & *(_DWORD *)(v38 + v21);
      v25 = v24 + 1;
      v26 = *((_DWORD *)v1 + 8);
      v44 = v25;
      v45 = v26;
      if ( v25 == v26 )
        v21 = *((_DWORD *)v1 + 1);
      else
        v21 = *((_DWORD *)v1 + 3) + v37;
      v23 = (_DWORD *)((char *)v23 + *((_DWORD *)v1 + 2));
      v49 = (_DWORD *)((char *)v49 + 1);
      v2 = (_DWORD *)*((_DWORD *)v1 + 4);
      v24 = v45 != v25 ? v44 : 0;
      v37 = v21;
      v1 = a1;
    }
    while ( (int)v49 < v2[3] );
    v10 = v52;
    v14 = v51;
  }
  v15 = v47;
  if ( v14 != v47 )
  {
    v14 += 4;
    v51 = v14;
    v52 = v10 + 4;
LABEL_7:
    v40 = (v15 - v14) >> 2;
    if ( v15 - v14 >= 4 )
    {
      v16 = *((_DWORD *)v1 + 2) * v2[1];
      v53 = (struct _PATBLTFRAME *)*((_DWORD *)v1 + 7);
      v52 %= (unsigned int)v53;
      v38 = v52;
      v36 = v51 + *(_DWORD *)v1 + v16;
      v17 = v13 * *((_DWORD *)v1 + 3);
      v50 = v13;
      v39 = v53;
      v41 = v53;
      v37 = *((_DWORD *)v1 + 1) + v17;
      v49 = v2 + 3;
      v18 = v2 + 3;
      if ( (((unsigned __int8)v52 | (unsigned __int8)v53) & 3) != 0 )
      {
        v55 = (struct _PATBLTFRAME *)v2[1];
        if ( (int)v55 < *v18 )
        {
          v27 = v50;
          do
          {
            vFetchShiftAndMerge(&v36);
            if ( ++v27 == *((_DWORD *)v1 + 8) )
            {
              v27 = 0;
              v37 = *((_DWORD *)v1 + 1);
            }
            else
            {
              v37 += *((_DWORD *)v1 + 3);
            }
            v36 += *((_DWORD *)v1 + 2);
            v2 = (_DWORD *)*((_DWORD *)v1 + 4);
            v19 = v52;
            v38 = v52;
            v55 = (struct _PATBLTFRAME *)((char *)v55 + 1);
          }
          while ( (int)v55 < v2[3] );
          v13 = v48;
LABEL_15:
          if ( v43 )
          {
            v56 = (struct _PATBLTFRAME *)(v47 + *(_DWORD *)v1 + v2[1] * *((_DWORD *)v1 + 2));
            v28 = *((_DWORD *)v1 + 1) + v13 * *((_DWORD *)v1 + 3);
            v37 = v28;
            v38 = (v19 + 4 * v40) % *((_DWORD *)v1 + 7);
            v29 = v2[1];
            v43 = v29;
            if ( v29 < v2[3] )
            {
              v30 = v56;
              v31 = v29;
              do
              {
                *(_DWORD *)v30 ^= v46 & *(_DWORD *)(v38 + v28);
                v32 = (struct _PATBLTFRAME *)(v13 + 1);
                v33 = (struct _PATBLTFRAME *)*((_DWORD *)v1 + 8);
                v57 = v32;
                if ( v32 == v33 )
                  v28 = *((_DWORD *)v1 + 1);
                else
                  v28 = *((_DWORD *)v1 + 3) + v37;
                v30 = (struct _PATBLTFRAME *)((char *)v30 + *((_DWORD *)v1 + 2));
                v34 = (char *)(v32 - v33);
                v35 = *((_DWORD *)v1 + 4);
                ++v31;
                v37 = v28;
                v13 = v34 != 0 ? (unsigned int)v57 : 0;
              }
              while ( v31 < *(_DWORD *)(v35 + 12) );
            }
          }
          return;
        }
      }
      else
      {
        v41 = (struct _PATBLTFRAME *)((unsigned int)v53 >> 2);
        v54 = (struct _PATBLTFRAME *)v2[1];
        if ( (int)v54 < *v18 )
        {
          do
          {
            vFetchAndMerge(&v36);
            if ( ++v13 == *((_DWORD *)v1 + 8) )
            {
              v13 = 0;
              v37 = *((_DWORD *)v1 + 1);
            }
            else
            {
              v37 += *((_DWORD *)v1 + 3);
            }
            v36 += *((_DWORD *)v1 + 2);
            v2 = (_DWORD *)*((_DWORD *)v1 + 4);
            v54 = (struct _PATBLTFRAME *)((char *)v54 + 1);
          }
          while ( (int)v54 < v2[3] );
          v13 = v48;
        }
      }
    }
    v19 = v52;
    goto LABEL_15;
  }
}
