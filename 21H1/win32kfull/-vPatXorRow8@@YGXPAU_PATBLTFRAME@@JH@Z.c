/*
 * XREFs of ?vPatXorRow8@@YGXPAU_PATBLTFRAME@@JH@Z @ 0x22E5D7
 * Callers:
 *     <none>
 * Callees:
 *     _vFetchAndMerge@4 @ 0xEDD06 (_vFetchAndMerge@4.c)
 *     _vFetchShiftAndMerge@4 @ 0xEDD5D (_vFetchShiftAndMerge@4.c)
 */

void __stdcall vPatXorRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  _DWORD *v4; // ecx
  unsigned int v5; // esi
  int v6; // ebx
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  signed int v13; // eax
  unsigned int v14; // ecx
  int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // eax
  char v18; // al
  int v19; // ecx
  int v20; // esi
  int v21; // edx
  int v22; // esi
  _DWORD v23[7]; // [esp+Ch] [ebp-34h] BYREF
  int v24; // [esp+28h] [ebp-18h]
  unsigned int v25; // [esp+2Ch] [ebp-14h]
  unsigned int v26; // [esp+30h] [ebp-10h]
  unsigned int v27; // [esp+34h] [ebp-Ch]
  unsigned int v28; // [esp+38h] [ebp-8h]
  _DWORD *v29; // [esp+3Ch] [ebp-4h]
  unsigned int v30; // [esp+48h] [ebp+8h]
  int v31; // [esp+4Ch] [ebp+Ch]

  memset(v23, 0, sizeof(v23));
  v4 = (_DWORD *)*((_DWORD *)a1 + 4);
  v5 = *((_DWORD *)a1 + 8);
  v6 = a2 * *((_DWORD *)a1 + 2);
  v29 = v4;
  v7 = *(_DWORD *)a1 + v6;
  v8 = a2 - *((_DWORD *)a1 + 6);
  if ( v8 >= 0 )
    v9 = v8 % v5;
  else
    v9 = v5 - ~v8 % v5 - 1;
  for ( v23[1] = *((_DWORD *)a1 + 1) + v9 * *((_DWORD *)a1 + 3); a3; v9 = v22 != 0 ? v21 : 0 )
  {
    v10 = *((_DWORD *)a1 + 9);
    v11 = v10 * *v4;
    v12 = v10 * v29[1];
    v28 = v11 & 0xFFFFFFFC;
    v24 = v11 & 3;
    v31 = v12 & 3;
    v26 = (unsigned int)(&aulLeftMask)[v24];
    v27 = v12 & 0xFFFFFFFC;
    v25 = ~(unsigned int)(&aulLeftMask)[v31];
    v13 = (v11 & 0xFFFFFFFC) - *((_DWORD *)a1 + 5);
    v14 = *((_DWORD *)a1 + 7);
    if ( v13 >= 0 )
      v15 = v13 % v14;
    else
      v15 = v14 - ~v13 % v14 - 1;
    v30 = v15;
    v16 = v28;
    v17 = v27;
    if ( v28 == v27 )
    {
      v23[2] = v15;
      *(_DWORD *)(v28 + v7) ^= v26 & v25 & *(_DWORD *)(v23[1] + v15);
    }
    else
    {
      if ( v24 )
      {
        v23[2] = v15;
        *(_DWORD *)(v28 + v7) ^= v26 & *(_DWORD *)(v23[1] + v15);
        v16 += 4;
        v17 = v27;
        v28 = v16;
        v30 = v15 + 4;
      }
      v23[4] = (v17 - v16) >> 2;
      if ( v17 - v16 >= 4 )
      {
        v26 = *((_DWORD *)a1 + 7);
        v23[0] = v7 + v28;
        v18 = (v30 % v26) | v26;
        v30 %= v26;
        v23[3] = v26;
        v23[2] = v30;
        v23[5] = v26;
        if ( (v18 & 3) != 0 )
        {
          vFetchShiftAndMerge((int)v23);
        }
        else
        {
          v23[5] = v26 >> 2;
          vFetchAndMerge((int)v23);
        }
      }
      if ( v31 )
      {
        v23[2] = (v30 + 4 * v23[4]) % *((_DWORD *)a1 + 7);
        *(_DWORD *)(v27 + v7) ^= v25 & *(_DWORD *)(v23[2] + v23[1]);
      }
    }
    v19 = *((_DWORD *)a1 + 8);
    v20 = v9 + 1;
    v21 = v20;
    if ( v20 == v19 )
      v23[1] = *((_DWORD *)a1 + 1);
    else
      v23[1] += *((_DWORD *)a1 + 3);
    v7 += *((_DWORD *)a1 + 2);
    v22 = v20 - v19;
    v29 += 2;
    v4 = v29;
    --a3;
  }
}
