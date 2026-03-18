/*
 * XREFs of ?vPatNotRow8@@YGXPAU_PATBLTFRAME@@JH@Z @ 0x22E3F8
 * Callers:
 *     <none>
 * Callees:
 *     _vFetchNotAndCopy@4 @ 0xEDC5C (_vFetchNotAndCopy@4.c)
 *     _vFetchShiftNotAndCopy@4 @ 0xEDCAD (_vFetchShiftNotAndCopy@4.c)
 */

void __stdcall vPatNotRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  struct _PATBLTFRAME *v3; // edi
  _DWORD *v4; // ecx
  unsigned int v5; // esi
  int v6; // ebx
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // ecx
  signed int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // ecx
  int v20; // esi
  int v21; // edx
  int v22; // esi
  _DWORD v23[7]; // [esp+Ch] [ebp-34h] BYREF
  unsigned int v24; // [esp+28h] [ebp-18h]
  unsigned int v25; // [esp+2Ch] [ebp-14h]
  int v26; // [esp+30h] [ebp-10h]
  _DWORD *v27; // [esp+34h] [ebp-Ch]
  unsigned int v28; // [esp+38h] [ebp-8h]
  unsigned int v29; // [esp+3Ch] [ebp-4h]
  unsigned int v30; // [esp+4Ch] [ebp+Ch]
  int v31; // [esp+4Ch] [ebp+Ch]

  memset(v23, 0, sizeof(v23));
  v3 = a1;
  v4 = (_DWORD *)*((_DWORD *)a1 + 4);
  v5 = *((_DWORD *)a1 + 8);
  v6 = a2 * *((_DWORD *)a1 + 2);
  v27 = v4;
  v7 = *(_DWORD *)a1 + v6;
  v8 = a2 - *((_DWORD *)a1 + 6);
  if ( v8 >= 0 )
    v9 = v8 % v5;
  else
    v9 = v5 - ~v8 % v5 - 1;
  for ( v23[1] = *((_DWORD *)a1 + 1) + v9 * *((_DWORD *)a1 + 3); a3; v9 = v22 != 0 ? v21 : 0 )
  {
    v10 = *((_DWORD *)v3 + 9);
    v11 = v10 * *v4;
    v12 = v10 * v4[1];
    v28 = v12 & 0xFFFFFFFC;
    v24 = v11 & 3;
    v26 = v12 & 3;
    v13 = (unsigned int)(&aulLeftMask)[v24];
    v29 = v11 & 0xFFFFFFFC;
    v14 = (v11 & 0xFFFFFFFC) - *((_DWORD *)v3 + 5);
    v25 = ~(unsigned int)(&aulLeftMask)[v26];
    v30 = *((_DWORD *)v3 + 7);
    if ( v14 >= 0 )
      v15 = v14 % v30;
    else
      v15 = v30 - ~v14 % v30 - 1;
    v16 = v29;
    v31 = v15;
    if ( v29 == v28 )
    {
      v23[2] = v15;
      *(_DWORD *)(v29 + v7) = *(_DWORD *)(v29 + v7) & ~(v25 & v13) | v25 & v13 & *(_DWORD *)(v23[1] + v15);
    }
    else
    {
      if ( v24 )
      {
        v23[2] = v15;
        v17 = *(_DWORD *)(v29 + v7) & ~v13 | v13 & ~*(_DWORD *)(v23[1] + v15);
        v18 = v29;
        v3 = a1;
        *(_DWORD *)(v29 + v7) = v17;
        v15 += 4;
        v29 = v18 + 4;
        v31 = v15;
        v16 = v18 + 4;
      }
      v23[4] = (v28 - v16) >> 2;
      if ( v28 - v16 >= 4 )
      {
        v24 = *((_DWORD *)v3 + 7);
        v23[0] = v7 + v29;
        v31 = v15 % v24;
        v23[3] = v24;
        v23[2] = v15 % v24;
        v23[5] = v24;
        if ( (((unsigned __int8)(v15 % v24) | (unsigned __int8)v24) & 3) != 0 )
        {
          vFetchShiftNotAndCopy((int)v23);
        }
        else
        {
          v23[5] = v24 >> 2;
          vFetchNotAndCopy((int)v23);
        }
      }
      if ( v26 )
      {
        v23[2] = (unsigned int)(v31 + 4 * v23[4]) % *((_DWORD *)v3 + 7);
        *(_DWORD *)(v28 + v7) = *(_DWORD *)(v28 + v7) & ~v25 | v25 & ~*(_DWORD *)(v23[2] + v23[1]);
      }
    }
    v19 = *((_DWORD *)v3 + 8);
    v20 = v9 + 1;
    v21 = v20;
    if ( v20 == v19 )
      v23[1] = *((_DWORD *)v3 + 1);
    else
      v23[1] += *((_DWORD *)v3 + 3);
    v7 += *((_DWORD *)v3 + 2);
    v22 = v20 - v19;
    v27 += 2;
    v4 = v27;
    --a3;
  }
}
