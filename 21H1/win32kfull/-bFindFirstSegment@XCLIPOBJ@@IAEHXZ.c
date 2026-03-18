/*
 * XREFs of ?bFindFirstSegment@XCLIPOBJ@@IAEHXZ @ 0x237C98
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z @ 0x237A4C (-bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z.c)
 *     ?bSetup@XCLIPOBJ@@IAEHXZ @ 0x23808A (-bSetup@XCLIPOBJ@@IAEHXZ.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z @ 0x237F88 (-bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IAEXJPAU_POINTL@@0PAJ@Z @ 0x23838E (-vIntersectScan@XCLIPOBJ@@IAEXJPAU_POINTL@@0PAJ@Z.c)
 *     ?vUnflip@DDA_CLIPLINE@@QBEXPAJ0@Z @ 0x238459 (-vUnflip@DDA_CLIPLINE@@QBEXPAJ0@Z.c)
 */

int __thiscall XCLIPOBJ::bFindFirstSegment(XCLIPOBJ *this)
{
  _DWORD *v2; // edx
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  struct _POINTL *v6; // edx
  int y; // ebx
  struct _POINTL *v8; // edx
  int v9; // ebx
  int x; // edi
  int *v11; // edi
  _BYTE *v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int *v16; // ebx
  struct _POINTL *v17; // edi
  int v18; // ecx
  int v19; // eax
  LONG v20; // edx
  int v21; // edx
  int v22; // ecx
  LONG v23; // eax
  int v24; // eax
  int v25; // edx
  int v27; // [esp+Ch] [ebp-Ch] BYREF
  int v28; // [esp+10h] [ebp-8h] BYREF
  int v29; // [esp+14h] [ebp-4h]

  v2 = (_DWORD *)*((_DWORD *)this + 30);
  v2[28] = v2[34];
  v2[29] = v2[35];
  v3 = *((_DWORD *)this + 30);
  v4 = *((_DWORD *)this + 17);
  if ( (*(_DWORD *)(v3 + 16) & 0x800000) != 0 )
  {
    *(_DWORD *)(v3 + 148) = *(_DWORD *)(v4 + 4);
    v5 = *(_DWORD *)(*((_DWORD *)this + 17) + 8);
  }
  else
  {
    *(_DWORD *)(v3 + 148) = *(_DWORD *)(v4 + 8);
    v5 = *(_DWORD *)(*((_DWORD *)this + 17) + 4);
  }
  *(_DWORD *)(*((_DWORD *)this + 30) + 152) = v5;
  v6 = (struct _POINTL *)*((_DWORD *)this + 30);
  y = v6[18].y;
  if ( (((unsigned int)v6[2].x >> 23) & 1) == v6[14].y < y )
  {
    XCLIPOBJ::vIntersectScan(this, y, 0, v6 + 14, &v6[2].y);
  }
  else
  {
    v6[2].y = v6[18].x;
    *(_DWORD *)(*((_DWORD *)this + 30) + 148) = *(_DWORD *)(*((_DWORD *)this + 30) + 116);
  }
  v8 = (struct _POINTL *)*((_DWORD *)this + 30);
  v9 = v8[13].y;
  x = v8[19].x;
  if ( (((unsigned int)v8[2].x >> 23) & 1) == v9 >= x )
  {
    XCLIPOBJ::vIntersectScan(this, x, v8 + 16, v8 + 17, &v8[18].x);
  }
  else
  {
    v8[16].y = v9;
    *(_DWORD *)(*((_DWORD *)this + 30) + 128) = *(_DWORD *)(*((_DWORD *)this + 30) + 104);
    *(_DWORD *)(*((_DWORD *)this + 30) + 152) = *(_DWORD *)(*((_DWORD *)this + 30) + 108) + 1;
    v11 = (int *)*((_DWORD *)this + 30);
    v27 = v11[20];
    v28 = v11[21];
    DDA_CLIPLINE::vUnflip((DDA_CLIPLINE *)(v11 + 12), &v27, &v28);
    if ( (*v12 & 5) != 0 )
    {
      v13 = v11[27];
      v14 = v28;
    }
    else
    {
      v13 = v11[26];
      v14 = v27;
    }
    if ( v13 - v14 >= 0 )
      v15 = v13 - v14;
    else
      v15 = v14 - v13;
    v11[36] = v15;
  }
  v16 = (int *)*((_DWORD *)this + 17);
  v17 = (struct _POINTL *)*((_DWORD *)this + 30);
  v18 = *v16;
  *((_DWORD *)this + 20) = 0;
  v19 = v18 - 1;
  *((_DWORD *)this + 22) = v18 - 1;
  v20 = v17[14].x;
  v28 = v18 - 1;
  if ( v20 >= v16[v18 + 2] )
  {
    *((_DWORD *)this + 20) = v19;
    if ( (v17[2].x & 0x400000) == 0 )
      goto LABEL_30;
    return 0;
  }
  if ( v20 < v16[3] )
  {
    if ( (v17[2].x & 0x400000) != 0 )
    {
      v18 = -1;
      goto LABEL_30;
    }
    return 0;
  }
  v21 = 0;
  v29 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v22 = (v21 + v19) / 2;
      *((_DWORD *)this + 20) = v22;
      v23 = v17[14].x;
      if ( v23 >= v16[v22 + 3] )
        break;
      if ( v23 >= v16[v22 + 2] )
        goto LABEL_29;
      v21 = v29;
      v19 = v22 - 1;
      v28 = v22 - 1;
    }
    v21 = v22 + 1;
    v29 = v22 + 1;
    if ( v23 < v16[v22 + 4] )
      break;
    v19 = v28;
  }
  *((_DWORD *)this + 20) = v21;
  ++v22;
LABEL_29:
  v18 = v22 - (((unsigned int)v17[2].x >> 22) & 1);
LABEL_30:
  *((_DWORD *)this + 20) = v18;
  if ( (((unsigned __int8)v18 ^ (unsigned __int8)((unsigned int)v17[2].x >> 22)) & 1) == 0 )
  {
    v24 = v18 + *((_DWORD *)this + 21);
    *((_DWORD *)this + 20) = v24;
    v25 = v16[v24 + 3];
    if ( (((unsigned int)v17[2].x >> 22) & 1) == v25 > v17[16].x )
      return 0;
    XCLIPOBJ::bIntersectWall(this, v25, 0, v17 + 14, &v17[2].y);
  }
  return 1;
}
