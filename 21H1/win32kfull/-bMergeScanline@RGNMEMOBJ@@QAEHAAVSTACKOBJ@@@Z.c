/*
 * XREFs of ?bMergeScanline@RGNMEMOBJ@@QAEHAAVSTACKOBJ@@@Z @ 0x21F8DB
 * Callers:
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QAEHKK@Z @ 0x21F6AA (-bExpandScanline@STACKOBJ@@QAEHKK@Z.c)
 *     ?vMergeSpans@@YGXPAU_SPAN@@0000@Z @ 0x220021 (-vMergeSpans@@YGXPAU_SPAN@@0000@Z.c)
 */

int __thiscall RGNMEMOBJ::bMergeScanline(RGNMEMOBJ *this, struct STACKOBJ *a2)
{
  RGNOBJ *v2; // ebx
  int v3; // edi
  int v4; // esi
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // esi
  _DWORD *v8; // ecx
  _DWORD *v9; // edx
  int v10; // eax
  _DWORD *v11; // edx
  int *v12; // ebx
  unsigned int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int *v20; // esi
  int *v21; // edx
  RGNMEMOBJ *v22; // ebx
  int v23; // edx
  int v24; // eax
  size_t v25; // eax
  int v27; // edx
  int *v28; // ebx
  _DWORD *v29; // edi
  unsigned int v30; // ecx
  int v31; // eax
  _DWORD *v32; // eax
  int v33; // ecx
  int v34; // ecx
  struct _SPAN *v35; // [esp+0h] [ebp-28h]
  struct _SPAN *v36; // [esp+4h] [ebp-24h]
  int v37; // [esp+Ch] [ebp-1Ch]
  int v38; // [esp+10h] [ebp-18h]
  int *v39; // [esp+10h] [ebp-18h]
  int v40; // [esp+14h] [ebp-14h]
  int v42; // [esp+1Ch] [ebp-Ch]
  unsigned int v43; // [esp+20h] [ebp-8h]
  unsigned int v44; // [esp+24h] [ebp-4h]
  STACKOBJ *v45; // [esp+30h] [ebp+8h]

  v2 = this;
  v3 = *((_DWORD *)a2 + 2);
  v4 = *(_DWORD *)(*(_DWORD *)this + 52);
  v5 = *(_DWORD *)(*(_DWORD *)this + 16);
  v6 = *(_DWORD *)(v3 + 4);
  if ( v4 != 16 )
  {
    v37 = 8 * v6;
    v17 = 8 * v6 + 16;
    v43 = v17;
    if ( v17 > v5 - v4 && !RGNOBJ::bExpand(v2, v17 + v5 + 4832) )
      return 0;
    v18 = *(_DWORD *)v2;
    v19 = *(_DWORD *)v3;
    v20 = *(int **)(*(_DWORD *)v2 + 60);
    v21 = *(int **)(*(_DWORD *)v2 + 32);
    v39 = v21;
    if ( *(_DWORD *)v3 > v20[1] )
    {
      do
        v20 += *v20 + 4;
      while ( v19 > v20[1] );
      v21 = *(int **)(*(_DWORD *)v2 + 32);
      v19 = *(_DWORD *)v3;
    }
    v44 = 0;
    v40 = v20[1];
    v22 = this;
    if ( v19 == v40 )
    {
      if ( v40 + 1 == v20[2] )
      {
        v23 = *((_DWORD *)a2 + 3);
        v42 = v23;
        *(_DWORD *)v23 = v40;
        v24 = ((unsigned int)*v20 >> 1) + *(_DWORD *)(v3 + 4);
        *(_DWORD *)(v23 + 4) = v24;
        v43 = v37;
        v25 = 8 * v24 + 16;
        if ( v25 > *(_DWORD *)(v23 + 8) )
        {
          if ( !STACKOBJ::bExpandScanline(a2, v25, 0) )
            return 0;
          v23 = *((_DWORD *)a2 + 3);
          v42 = v23;
        }
        vMergeSpans(
          (struct _SPAN *)(v3 + 16),
          (struct _SPAN *)(v3 + 8 * (*(_DWORD *)(v3 + 4) + 2)),
          (struct _SPAN *)(v23 + 16),
          v35,
          v36);
        v3 = v42;
        v21 = v39;
      }
      else
      {
        ++*(_DWORD *)(v18 + 56);
        *(_DWORD *)(*(_DWORD *)this + 76) = *(_DWORD *)v3 + 1;
        v20[1] = *(_DWORD *)v3 + 1;
      }
    }
    else
    {
      v20[-*(v20 - 1) - 2] = *(_DWORD *)v3;
      ++*(_DWORD *)(*(_DWORD *)this + 56);
      if ( *(_DWORD *)v3 < *(_DWORD *)(*(_DWORD *)this + 68) )
        *(_DWORD *)(*(_DWORD *)this + 68) = *(_DWORD *)v3;
    }
    for ( *(_DWORD *)(*(_DWORD *)this + 32) = (char *)v21 + v43; v21 > v20; *(int *)((char *)v21 + v43) = *v21 )
      --v21;
    v27 = 2 * *(_DWORD *)(v3 + 4);
    *v20 = v27;
    v20[1] = *(_DWORD *)v3;
    v20[2] = *(_DWORD *)v3 + 1;
    if ( v27 )
    {
      v28 = (int *)(v3 + 16);
      v29 = v20 + 4;
      v30 = ((unsigned int)(v27 - 1) >> 1) + 1;
      v44 = 2 * v30;
      do
      {
        v31 = *v28;
        v28 += 2;
        *(v29 - 1) = v31;
        *v29 = *(v28 - 1);
        v29 += 2;
        --v30;
      }
      while ( v30 );
      v22 = this;
    }
    v20[v44 + 3] = v27;
    v32 = *(_DWORD **)v22;
    v33 = v20[3];
    if ( *(_DWORD *)(*(_DWORD *)v22 + 64) > v33 )
    {
      v32[16] = v33;
      v32 = *(_DWORD **)v22;
    }
    v34 = v20[v27 + 2];
    if ( v32[18] < v34 )
    {
      v32[18] = v34;
      v32 = *(_DWORD **)v22;
    }
    v32[13] += v43;
    return 1;
  }
  v7 = 2 * v6;
  if ( 8 * v6 + 48 > v5 && !RGNOBJ::bExpand(v2, 8 * v6 + 4880) )
    return 0;
  *(_DWORD *)(*(_DWORD *)v2 + 52) = 4 * v7 + 48;
  *(_DWORD *)(*(_DWORD *)v2 + 56) = 3;
  v8 = *(_DWORD **)(*(_DWORD *)v2 + 60);
  v8[2] = *(_DWORD *)v3;
  v9 = &v8[*v8 + 4];
  *v9 = v7;
  v9[1] = *(_DWORD *)v3;
  v45 = (STACKOBJ *)v9;
  v9[2] = *(_DWORD *)v3 + 1;
  v10 = 0;
  if ( v7 )
  {
    v11 = v9 + 4;
    v12 = (int *)(v3 + 16);
    v13 = ((unsigned int)(v7 - 1) >> 1) + 1;
    v38 = 2 * v13;
    do
    {
      v14 = *v12;
      v12 += 2;
      *(v11 - 1) = v14;
      *v11 = *(v12 - 1);
      v11 += 2;
      --v13;
    }
    while ( v13 );
    v2 = this;
    v9 = v45;
    v10 = v38;
  }
  v9[v10 + 3] = v7;
  *(_DWORD *)(*(_DWORD *)v2 + 68) = *(_DWORD *)v3;
  *(_DWORD *)(*(_DWORD *)v2 + 76) = *(_DWORD *)v3 + 1;
  *(_DWORD *)(*(_DWORD *)v2 + 64) = v9[3];
  *(_DWORD *)(*(_DWORD *)v2 + 72) = v9[v7 + 2];
  v15 = &v9[*v9 + 4];
  *v15 = 0;
  v16 = *(_DWORD *)v3 + 1;
  v15[2] = 0x7FFFFFFF;
  v15[1] = v16;
  v15[3] = 0;
  *(_DWORD *)(*(_DWORD *)v2 + 32) = &v15[*v15 + 4];
  return 1;
}
