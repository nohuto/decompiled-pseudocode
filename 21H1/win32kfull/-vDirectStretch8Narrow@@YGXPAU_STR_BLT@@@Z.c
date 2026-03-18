/*
 * XREFs of ?vDirectStretch8Narrow@@YGXPAU_STR_BLT@@@Z @ 0x246D7D
 * Callers:
 *     ?StretchDIBDirect@@YGHPAXJKKPAU_RECTL@@0JKK111K@Z @ 0x4916C (-StretchDIBDirect@@YGHPAXJKKPAU_RECTL@@0JKK111K@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall vDirectStretch8Narrow(struct _STR_BLT *a1)
{
  struct _STR_BLT *v1; // esi
  int v2; // eax
  _BYTE *v3; // ebx
  int v4; // edi
  unsigned int v5; // edx
  int v6; // ecx
  unsigned int v7; // eax
  _BYTE *v8; // esi
  _BYTE *v9; // edi
  bool v10; // zf
  int v11; // [esp+Ch] [ebp-30h]
  int v12; // [esp+10h] [ebp-2Ch]
  unsigned int v13; // [esp+14h] [ebp-28h]
  int v14; // [esp+18h] [ebp-24h]
  int v15; // [esp+1Ch] [ebp-20h]
  int v16; // [esp+20h] [ebp-1Ch]
  int v17; // [esp+2Ch] [ebp-10h]
  unsigned int v18; // [esp+30h] [ebp-Ch]
  int v19; // [esp+34h] [ebp-8h]
  int v20; // [esp+38h] [ebp-4h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 5);
  v3 = (_BYTE *)(v2 + *((_DWORD *)a1 + 3));
  v4 = *(_DWORD *)a1 + *((_DWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 13);
  v19 = *((_DWORD *)a1 + 7);
  v6 = *((_DWORD *)a1 + 6) - v2;
  v20 = v4;
  v15 = *((_DWORD *)a1 + 8);
  v16 = *((_DWORD *)a1 + 9);
  v17 = *((_DWORD *)a1 + 11);
  v11 = v6;
  v18 = v5;
  v12 = *((_DWORD *)a1 + 4) - v6;
  if ( v19 > 0 )
  {
    v14 = *((_DWORD *)a1 + 1) * *((_DWORD *)a1 + 10);
    do
    {
      v13 = v5 + v17;
      v7 = *((_DWORD *)v1 + 12);
      v8 = (_BYTE *)v4;
      v9 = &v3[v6];
      do
      {
        *v3 = *v8;
        v8 += v15 + (v7 + v16 < v7);
        ++v3;
        v7 += v16;
      }
      while ( v3 != v9 );
      v4 = v14 + v20;
      v1 = a1;
      v20 += v14;
      if ( v13 < v18 )
      {
        v4 += *((_DWORD *)a1 + 1);
        v20 = v4;
      }
      v3 += v12;
      v5 += v17;
      v10 = v19-- == 1;
      v6 = v11;
      v18 = v13;
    }
    while ( !v10 );
  }
}
