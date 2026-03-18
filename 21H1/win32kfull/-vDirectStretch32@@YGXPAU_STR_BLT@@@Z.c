/*
 * XREFs of ?vDirectStretch32@@YGXPAU_STR_BLT@@@Z @ 0x49530
 * Callers:
 *     ?StretchDIBDirect@@YGHPAXJKKPAU_RECTL@@0JKK111K@Z @ 0x4916C (-StretchDIBDirect@@YGHPAXJKKPAU_RECTL@@0JKK111K@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall vDirectStretch32(struct _STR_BLT *a1)
{
  int v1; // edx
  int v2; // esi
  _DWORD *v3; // eax
  unsigned int v4; // ecx
  _DWORD *v5; // ebx
  _DWORD *v6; // edi
  unsigned int v7; // edx
  int v8; // ebx
  unsigned int v9; // esi
  int v10; // ecx
  bool v11; // zf
  unsigned int v12; // [esp+Ch] [ebp-34h]
  unsigned int v13; // [esp+10h] [ebp-30h]
  unsigned int v14; // [esp+14h] [ebp-2Ch]
  int v15; // [esp+18h] [ebp-28h]
  int v16; // [esp+1Ch] [ebp-24h]
  int v17; // [esp+24h] [ebp-1Ch]
  int v18; // [esp+28h] [ebp-18h]
  int v19; // [esp+2Ch] [ebp-14h]
  unsigned int v20; // [esp+30h] [ebp-10h]
  unsigned int v21; // [esp+34h] [ebp-Ch]
  unsigned int v22; // [esp+38h] [ebp-8h]
  int v23; // [esp+3Ch] [ebp-4h]

  v19 = 0;
  v1 = *((_DWORD *)a1 + 5);
  v18 = *((_DWORD *)a1 + 7);
  v2 = *((_DWORD *)a1 + 10);
  v23 = *(_DWORD *)a1 + 4 * *((_DWORD *)a1 + 2);
  v3 = (_DWORD *)(*((_DWORD *)a1 + 3) + 4 * v1);
  v15 = *((_DWORD *)a1 + 8);
  v16 = *((_DWORD *)a1 + 9);
  v22 = *((_DWORD *)a1 + 13);
  v17 = *((_DWORD *)a1 + 11);
  v4 = v22;
  v21 = 4 * (*((_DWORD *)a1 + 6) - v1);
  v5 = (_DWORD *)v23;
  v12 = *((_DWORD *)a1 + 4) - v21;
  if ( v18 > 0 )
  {
    if ( v2 )
      v19 = v2 * *((_DWORD *)a1 + 1);
    do
    {
      v6 = v5;
      v7 = v4 + v17;
      v8 = 0;
      v13 = v4 + v17;
      v9 = *((_DWORD *)a1 + 12);
      v20 = v9;
      v14 = &v3[v21 / 4] >= v3 ? v21 >> 2 : 0;
      if ( v14 )
      {
        do
        {
          v9 += v16;
          v10 = -(v9 < v20);
          *v3 = *v6;
          v20 = v9;
          ++v8;
          ++v3;
          v6 += v15 - v10;
        }
        while ( v8 != v14 );
        v7 = v13;
      }
      v5 = (_DWORD *)(v19 + v23);
      v23 += v19;
      if ( v7 < v22 )
      {
        v5 = (_DWORD *)((char *)v5 + *((_DWORD *)a1 + 1));
        v23 = (int)v5;
      }
      v3 = (_DWORD *)((char *)v3 + v12);
      v4 = v7;
      v11 = v18-- == 1;
      v22 = v7;
    }
    while ( !v11 );
  }
}
