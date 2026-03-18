/*
 * XREFs of ?vPatCpyRect8@@YGXPAU_PATBLTFRAME@@@Z @ 0xA81C8
 * Callers:
 *     <none>
 * Callees:
 *     _vFetchAndCopy@4 @ 0xEDBC0 (_vFetchAndCopy@4.c)
 *     _vFetchShiftAndCopy@4 @ 0xEDC05 (_vFetchShiftAndCopy@4.c)
 */

void __stdcall vPatCpyRect8(struct _PATBLTFRAME *a1)
{
  struct _PATBLTFRAME *v1; // esi
  int v2; // eax
  _DWORD *v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  unsigned int v7; // eax
  signed int v8; // eax
  unsigned int v9; // ecx
  int v10; // ecx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // edx
  signed int v15; // eax
  int v16; // eax
  int v17; // eax
  int *v18; // ecx
  unsigned int v19; // edx
  int v20; // eax
  int v21; // eax
  bool v22; // cc
  int v23; // edx
  int v24; // edi
  int v25; // ecx
  int v26; // eax
  unsigned int v27; // edi
  int v28; // edx
  int v29; // eax
  unsigned int v30; // ebx
  int v31; // ecx
  int v32; // ecx
  int *v33; // edi
  int v34; // edx
  int v35; // ebx
  int v36; // eax
  bool v37; // cf
  int v38; // eax
  unsigned int v39; // [esp+Ch] [ebp-4Ch] BYREF
  int v40; // [esp+10h] [ebp-48h]
  unsigned int v41; // [esp+14h] [ebp-44h]
  unsigned int v42; // [esp+18h] [ebp-40h]
  unsigned int v43; // [esp+1Ch] [ebp-3Ch]
  unsigned int v44; // [esp+20h] [ebp-38h]
  int v45; // [esp+24h] [ebp-34h]
  int v46; // [esp+28h] [ebp-30h]
  unsigned int i; // [esp+2Ch] [ebp-2Ch]
  int v48; // [esp+30h] [ebp-28h]
  int v49; // [esp+34h] [ebp-24h]
  int v50; // [esp+38h] [ebp-20h]
  unsigned int v51; // [esp+3Ch] [ebp-1Ch]
  unsigned int v52; // [esp+40h] [ebp-18h]
  signed int v53; // [esp+44h] [ebp-14h]
  int v54; // [esp+48h] [ebp-10h]
  unsigned int v55; // [esp+4Ch] [ebp-Ch]
  unsigned int v56; // [esp+50h] [ebp-8h]
  unsigned int v57; // [esp+54h] [ebp-4h]

  v1 = a1;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v44 = 0;
  v45 = 0;
  v2 = *((_DWORD *)a1 + 9);
  v3 = (_DWORD *)*((_DWORD *)a1 + 4);
  v4 = v2 * *v3;
  v5 = v2 * v3[2];
  v6 = ((_BYTE)v2 * *(_BYTE *)v3) & 3;
  v55 = v4 & 0xFFFFFFFC;
  v50 = v6;
  v46 = v5 & 3;
  v56 = (unsigned int)(&aulLeftMask)[v6];
  v7 = ~(unsigned int)(&aulLeftMask)[v46];
  v53 = v5 & 0xFFFFFFFC;
  v52 = v7;
  v8 = (v4 & 0xFFFFFFFC) - *((_DWORD *)a1 + 5);
  v9 = *((_DWORD *)a1 + 7);
  if ( v8 < 0 )
    v10 = v9 - ~v8 % v9 - 1;
  else
    v10 = v8 % v9;
  v57 = v10;
  v11 = *((_DWORD *)a1 + 8);
  v51 = v3[1];
  v12 = v51 - *((_DWORD *)a1 + 6);
  if ( v12 < 0 )
    v13 = v11 - ~v12 % v11 - 1;
  else
    v13 = v12 % v11;
  v54 = v13;
  v14 = v55;
  v15 = v53;
  if ( v55 == v53 )
  {
    v56 &= v52;
  }
  else if ( !v50 )
  {
    goto LABEL_7;
  }
  v20 = v51 * *((_DWORD *)a1 + 2);
  v41 = v10;
  v51 = v55 + *(_DWORD *)a1 + v20;
  v21 = *((_DWORD *)a1 + 1) + v13 * *((_DWORD *)a1 + 3);
  v40 = v21;
  v22 = v3[1] < v3[3];
  v50 = v3[1];
  v1 = a1;
  if ( v22 )
  {
    v23 = v13;
    v24 = ~v56;
    for ( i = ~v56; ; v24 = i )
    {
      v25 = *(_DWORD *)(v41 + v21);
      v26 = v24;
      v27 = v51;
      v28 = v23 + 1;
      *(_DWORD *)v51 = *(_DWORD *)v51 & v26 | v56 & v25;
      v29 = *((_DWORD *)a1 + 8);
      v48 = v28;
      v49 = v29;
      v21 = v28 == v29 ? *((_DWORD *)a1 + 1) : *((_DWORD *)a1 + 3) + v40;
      v51 = *((_DWORD *)a1 + 2) + v27;
      v3 = (_DWORD *)*((_DWORD *)a1 + 4);
      v40 = v21;
      ++v50;
      v23 = v49 != v28 ? v48 : 0;
      if ( v50 >= v3[3] )
        break;
    }
    v10 = v57;
    v14 = v55;
  }
  v15 = v53;
  if ( v14 != v53 )
  {
    v14 += 4;
    v55 = v14;
    v57 = v10 + 4;
LABEL_7:
    v43 = (v15 - v14) >> 2;
    if ( v15 - v14 >= 4 )
    {
      v16 = *((_DWORD *)v1 + 2) * v3[1];
      i = *((_DWORD *)v1 + 7);
      v57 %= i;
      v41 = v57;
      v39 = v55 + *(_DWORD *)v1 + v16;
      v17 = v13 * *((_DWORD *)v1 + 3);
      v56 = v13;
      v42 = i;
      v44 = i;
      v40 = *((_DWORD *)v1 + 1) + v17;
      v51 = (unsigned int)(v3 + 3);
      v18 = v3 + 3;
      if ( (((unsigned __int8)v57 | (unsigned __int8)i) & 3) != 0 )
      {
        v50 = v3[1];
        if ( v50 < *v18 )
        {
          v30 = v56;
          do
          {
            vFetchShiftAndCopy(&v39);
            if ( ++v30 == *((_DWORD *)v1 + 8) )
            {
              v30 = 0;
              v40 = *((_DWORD *)v1 + 1);
            }
            else
            {
              v40 += *((_DWORD *)v1 + 3);
            }
            v39 += *((_DWORD *)v1 + 2);
            v3 = (_DWORD *)*((_DWORD *)v1 + 4);
            v19 = v57;
            v41 = v57;
            ++v50;
          }
          while ( v50 < v3[3] );
          v13 = v54;
LABEL_15:
          if ( v46 )
          {
            v31 = v13 * *((_DWORD *)v1 + 3);
            v46 = v53 + *(_DWORD *)v1 + v3[1] * *((_DWORD *)v1 + 2);
            v32 = *((_DWORD *)v1 + 1) + v31;
            v40 = v32;
            v41 = (v19 + 4 * v43) % *((_DWORD *)v1 + 7);
            v53 = v3[1];
            if ( v53 < v3[3] )
            {
              v33 = (int *)v46;
              v34 = ~v52;
              do
              {
                v35 = v13 + 1;
                *v33 = *v33 & v34 | v52 & *(_DWORD *)(v41 + v32);
                v36 = *((_DWORD *)v1 + 8);
                v46 = v35;
                if ( v35 == v36 )
                  v32 = *((_DWORD *)v1 + 1);
                else
                  v32 = *((_DWORD *)v1 + 3) + v40;
                v33 = (int *)((char *)v33 + *((_DWORD *)v1 + 2));
                ++v53;
                v37 = v36 != v35;
                v38 = *((_DWORD *)v1 + 4);
                v13 = v37 ? v46 : 0;
                v40 = v32;
                v1 = a1;
              }
              while ( v53 < *(_DWORD *)(v38 + 12) );
            }
          }
          return;
        }
      }
      else
      {
        v44 = i >> 2;
        v50 = v3[1];
        if ( v50 < *v18 )
        {
          do
          {
            vFetchAndCopy(&v39);
            if ( ++v13 == *((_DWORD *)v1 + 8) )
            {
              v13 = 0;
              v40 = *((_DWORD *)v1 + 1);
            }
            else
            {
              v40 += *((_DWORD *)v1 + 3);
            }
            v39 += *((_DWORD *)v1 + 2);
            v3 = (_DWORD *)*((_DWORD *)v1 + 4);
            ++v50;
          }
          while ( v50 < v3[3] );
          v13 = v54;
        }
      }
    }
    v19 = v57;
    goto LABEL_15;
  }
}
