/*
 * XREFs of _RtlExtractBitMap@16 @ 0x4B34E520
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

char __stdcall RtlExtractBitMap(_DWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // edx
  unsigned int v7; // ebx
  int v8; // edi
  size_t v9; // ebx
  _BYTE *v10; // esi
  int v11; // ebx
  int v12; // esi
  int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // edx
  bool v16; // zf
  unsigned int v17; // edx
  unsigned int v19; // [esp+18h] [ebp-Ch]
  _DWORD *v20; // [esp+1Ch] [ebp-8h]
  int *v21; // [esp+20h] [ebp-4h]

  v4 = (int)a1;
  v5 = *a1 - a3;
  if ( a4 <= v5 )
    v5 = a4;
  if ( v5 > *(_DWORD *)a2 )
    v5 = *(_DWORD *)a2;
  if ( v5 )
  {
    v6 = a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v11 = a3 & 0x1F;
      v20 = (_DWORD *)(a1[1] + 4 * (a3 >> 5));
      v21 = *(int **)(a2 + 4);
      LOBYTE(v4) = 1;
      v12 = 1 << v11;
      if ( v5 >= 0x20 )
      {
        v13 = ~(v12 - 1);
        v19 = v5 >> 5;
        do
        {
          v5 -= 32;
          v14 = v13 & *v20++;
          v15 = v14 >> v11;
          *v21 = v15;
          v13 = ~(v12 - 1);
          *v21 = v15 | (((v12 - 1) & *v20) << (32 - v11));
          v16 = v19-- == 1;
          ++v21;
        }
        while ( !v16 );
        v12 = 1 << v11;
        LOBYTE(v4) = 1;
      }
      if ( v5 )
      {
        if ( v5 > 32 - v11 )
          v17 = ((*v20 & (unsigned int)-v12) >> v11) | ((v20[1] & ((1 << (v5 + v11 - 32)) - 1)) << (32 - v11));
        else
          v17 = (*v20 & (unsigned int)(((1 << v5) - 1) << v11)) >> v11;
        v4 = v17 | ~((1 << v5) - 1) & *v21;
        *v21 = v4;
      }
    }
    else
    {
      v7 = v5;
      v8 = v5 & 7;
      v9 = v7 >> 3;
      if ( v9 )
      {
        memcpy(*(void **)(a2 + 4), (const void *)(v6 + a1[1]), v9);
        v6 = a3 >> 3;
        v4 = (int)a1;
      }
      if ( v8 )
      {
        v10 = (_BYTE *)(v9 + *(_DWORD *)(a2 + 4));
        LOBYTE(v4) = *(_BYTE *)(v9 + *(_DWORD *)(v4 + 4) + v6) & ((1 << v8) - 1) | *v10 & ~((1 << v8) - 1);
        *v10 = v4;
      }
    }
  }
  return v4;
}
