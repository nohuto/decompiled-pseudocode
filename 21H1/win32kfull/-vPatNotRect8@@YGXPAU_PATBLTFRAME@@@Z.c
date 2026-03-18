/*
 * XREFs of ?vPatNotRect8@@YGXPAU_PATBLTFRAME@@@Z @ 0x22E0EC
 * Callers:
 *     <none>
 * Callees:
 *     _vFetchNotAndCopy@4 @ 0xEDC5C (_vFetchNotAndCopy@4.c)
 *     _vFetchShiftNotAndCopy@4 @ 0xEDCAD (_vFetchShiftNotAndCopy@4.c)
 */

void __stdcall vPatNotRect8(struct _PATBLTFRAME *a1)
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
  bool v18; // cc
  int v19; // edx
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // edi
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int *v28; // ecx
  unsigned int v29; // edx
  int v30; // ecx
  int v31; // ecx
  int *v32; // edi
  int v33; // edx
  int v34; // ebx
  int v35; // eax
  unsigned int v36; // ebx
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
  if ( v8 >= 0 )
    v10 = v8 % v9;
  else
    v10 = v9 - ~v8 % v9 - 1;
  v57 = v10;
  v11 = *((_DWORD *)a1 + 8);
  v51 = v3[1];
  v12 = v51 - *((_DWORD *)a1 + 6);
  if ( v12 >= 0 )
    v13 = v12 % v11;
  else
    v13 = v11 - ~v12 % v11 - 1;
  v54 = v13;
  v14 = v55;
  v15 = v53;
  if ( v55 == v53 )
  {
    v56 &= v52;
  }
  else if ( !v50 )
  {
    goto LABEL_20;
  }
  v16 = v51 * *((_DWORD *)a1 + 2);
  v41 = v10;
  v51 = v55 + *(_DWORD *)a1 + v16;
  v17 = *((_DWORD *)a1 + 1) + v13 * *((_DWORD *)a1 + 3);
  v40 = v17;
  v18 = v3[1] < v3[3];
  v50 = v3[1];
  v1 = a1;
  if ( v18 )
  {
    v19 = v13;
    v20 = ~v56;
    for ( i = ~v56; ; v20 = i )
    {
      v21 = *(_DWORD *)(v41 + v17);
      v22 = v20;
      v23 = v51;
      v24 = v19 + 1;
      *(_DWORD *)v51 = *(_DWORD *)v51 & v22 | v56 & ~v21;
      v25 = *((_DWORD *)a1 + 8);
      v48 = v24;
      v49 = v25;
      v17 = v24 == v25 ? *((_DWORD *)a1 + 1) : *((_DWORD *)a1 + 3) + v40;
      v51 = *((_DWORD *)a1 + 2) + v23;
      v3 = (_DWORD *)*((_DWORD *)a1 + 4);
      v40 = v17;
      ++v50;
      v19 = v49 != v24 ? v48 : 0;
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
LABEL_20:
    v43 = (v15 - v14) >> 2;
    if ( v15 - v14 >= 4 )
    {
      v26 = v3[1] * *((_DWORD *)v1 + 2);
      i = *((_DWORD *)v1 + 7);
      v57 %= i;
      v41 = v57;
      v39 = v55 + *(_DWORD *)v1 + v26;
      v27 = v13 * *((_DWORD *)v1 + 3);
      v56 = v13;
      v42 = i;
      v44 = i;
      v40 = *((_DWORD *)v1 + 1) + v27;
      v51 = (unsigned int)(v3 + 3);
      v28 = v3 + 3;
      if ( (((unsigned __int8)v57 | (unsigned __int8)i) & 3) != 0 )
      {
        v50 = v3[1];
        if ( v50 < *v28 )
        {
          v36 = v56;
          do
          {
            vFetchShiftNotAndCopy((int)&v39);
            if ( ++v36 == *((_DWORD *)v1 + 8) )
            {
              v36 = 0;
              v40 = *((_DWORD *)v1 + 1);
            }
            else
            {
              v40 += *((_DWORD *)v1 + 3);
            }
            v39 += *((_DWORD *)v1 + 2);
            v3 = (_DWORD *)*((_DWORD *)v1 + 4);
            v29 = v57;
            v41 = v57;
            ++v50;
          }
          while ( v50 < v3[3] );
          v13 = v54;
LABEL_29:
          if ( v46 )
          {
            v30 = v13 * *((_DWORD *)v1 + 3);
            v46 = v53 + *(_DWORD *)v1 + v3[1] * *((_DWORD *)v1 + 2);
            v31 = *((_DWORD *)v1 + 1) + v30;
            v40 = v31;
            v41 = (v29 + 4 * v43) % *((_DWORD *)v1 + 7);
            v53 = v3[1];
            if ( v53 < v3[3] )
            {
              v32 = (int *)v46;
              v33 = ~v52;
              do
              {
                v34 = v13 + 1;
                *v32 = *v32 & v33 | v52 & ~*(_DWORD *)(v41 + v31);
                v35 = *((_DWORD *)v1 + 8);
                v46 = v34;
                if ( v34 == v35 )
                  v31 = *((_DWORD *)v1 + 1);
                else
                  v31 = *((_DWORD *)v1 + 3) + v40;
                v32 = (int *)((char *)v32 + *((_DWORD *)v1 + 2));
                ++v53;
                v37 = v35 != v34;
                v38 = *((_DWORD *)v1 + 4);
                v13 = v37 ? v46 : 0;
                v40 = v31;
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
        if ( v50 < *v28 )
        {
          do
          {
            vFetchNotAndCopy((int)&v39);
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
    v29 = v57;
    goto LABEL_29;
  }
}
