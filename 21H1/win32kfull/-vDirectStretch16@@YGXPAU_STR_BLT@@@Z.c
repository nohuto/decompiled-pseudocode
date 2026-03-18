/*
 * XREFs of ?vDirectStretch16@@YGXPAU_STR_BLT@@@Z @ 0x246BFE
 * Callers:
 *     ?StretchDIBDirect@@YGHPAXJKKPAU_RECTL@@0JKK111K@Z @ 0x4916C (-StretchDIBDirect@@YGHPAXJKKPAU_RECTL@@0JKK111K@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall vDirectStretch16(struct _STR_BLT *a1)
{
  struct _STR_BLT *v1; // esi
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // ebx
  int v5; // edi
  unsigned int v6; // ecx
  unsigned __int16 *v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned __int16 *v10; // ecx
  unsigned __int16 *v11; // eax
  int v12; // ecx
  bool v13; // zf
  int v14; // [esp+Ch] [ebp-44h]
  unsigned int v15; // [esp+10h] [ebp-40h]
  unsigned int v16; // [esp+14h] [ebp-3Ch]
  unsigned int v17; // [esp+18h] [ebp-38h]
  int v18; // [esp+1Ch] [ebp-34h]
  int v19; // [esp+20h] [ebp-30h]
  unsigned int v20; // [esp+24h] [ebp-2Ch]
  unsigned int v21; // [esp+28h] [ebp-28h]
  int v22; // [esp+2Ch] [ebp-24h]
  int v23; // [esp+30h] [ebp-20h]
  int v24; // [esp+34h] [ebp-1Ch]
  unsigned int v25; // [esp+38h] [ebp-18h]
  unsigned int v26; // [esp+3Ch] [ebp-14h]
  int v27; // [esp+40h] [ebp-10h]
  int v28; // [esp+44h] [ebp-Ch]
  int v29; // [esp+48h] [ebp-8h]
  unsigned __int16 *v30; // [esp+4Ch] [ebp-4h]

  v1 = a1;
  v19 = 0;
  v2 = *((_DWORD *)a1 + 5);
  v3 = *((_DWORD *)a1 + 6) - v2;
  v29 = *(_DWORD *)a1 + 2 * *((_DWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 3) + 2 * v2;
  v27 = *((_DWORD *)a1 + 8);
  v24 = *((_DWORD *)a1 + 7);
  v28 = *((_DWORD *)a1 + 9);
  v23 = (v4 >> 1) & 1;
  v25 = *((_DWORD *)a1 + 13);
  v18 = *((_DWORD *)a1 + 11);
  v20 = ((v4 - 2 * v3) >> 1) & 1;
  v5 = *((_DWORD *)a1 + 4) - 2 * v3;
  v6 = v3 - v20 - v23;
  v14 = v5;
  v7 = (unsigned __int16 *)v29;
  v21 = v6;
  if ( v24 > 0 )
  {
    if ( *((_DWORD *)a1 + 10) )
      v19 = *((_DWORD *)a1 + 10) * *((_DWORD *)a1 + 1);
    v17 = (2 * v6 + 3) >> 2;
    v8 = *((_DWORD *)a1 + 13);
    do
    {
      v9 = *((_DWORD *)v1 + 12);
      v15 = v18 + v8;
      v30 = v7;
      v26 = v9;
      if ( v23 )
      {
        v9 += v28;
        *(_WORD *)v4 = *v7;
        v6 = v21;
        v4 += 2;
        v30 = &v7[v27 + (v9 < v26)];
      }
      v22 = 0;
      v16 = v4 + 2 * v6 >= v4 ? v17 : 0;
      if ( v16 )
      {
        do
        {
          v10 = &v30[v27 + (v9 + v28 < v9)];
          v11 = &v10[v27 + (v9 + v28 + v28 < v9 + v28)];
          v9 += v28 + v28;
          v12 = *v30 | (*v10 << 16);
          v30 = v11;
          *(_DWORD *)v4 = v12;
          v4 += 4;
          ++v22;
        }
        while ( v22 != v16 );
        v1 = a1;
        v7 = (unsigned __int16 *)v29;
        v6 = v21;
      }
      if ( v20 )
      {
        *(_WORD *)v4 = *v30;
        v4 += 2;
      }
      v7 = (unsigned __int16 *)((char *)v7 + v19);
      v8 = v15;
      v29 = (int)v7;
      if ( v15 < v25 )
      {
        v7 = (unsigned __int16 *)((char *)v7 + *((_DWORD *)v1 + 1));
        v29 = (int)v7;
      }
      v4 += v14;
      v13 = v24-- == 1;
      v25 = v15;
    }
    while ( !v13 );
  }
}
