/*
 * XREFs of ?MulSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z @ 0x203CA5
 * Callers:
 *     ?MulSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z @ 0x203CA5 (-MulSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?MulSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z @ 0x203CA5 (-MulSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z.c)
 *     ?ulSimulateSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z @ 0x2065CB (-ulSimulateSaveScreenBits@@YGKPAU_SURFOBJ@@KKPAU_RECTL@@@Z.c)
 */

int __stdcall MulSaveScreenBits(struct _SURFOBJ *a1, unsigned int a2, _DWORD *pv, struct _RECTL *a4)
{
  _DWORD *v4; // ecx
  int v5; // esi
  DHPDEV dhpdev; // eax
  unsigned int v7; // edi
  int *v8; // ebx
  int v9; // edi
  unsigned int (__stdcall *v10)(struct _SURFOBJ *, unsigned int, SURFOBJ *, struct _RECTL *); // eax
  bool v11; // zf
  int v13; // eax
  int v14; // esi
  unsigned int (__stdcall *v15)(struct _SURFOBJ *, unsigned int, SURFOBJ *, struct _RECTL *); // eax
  int v16; // eax
  SURFOBJ *v17; // [esp+10h] [ebp-30h]
  int v18; // [esp+14h] [ebp-2Ch]
  const struct _RECTL *v19; // [esp+20h] [ebp-20h]
  unsigned int v20; // [esp+24h] [ebp-1Ch]
  unsigned int (__stdcall *v21)(struct _SURFOBJ *, unsigned int, SURFOBJ *, struct _RECTL *); // [esp+28h] [ebp-18h]
  int v22; // [esp+28h] [ebp-18h]
  struct _RECTL v23; // [esp+2Ch] [ebp-14h] BYREF

  v4 = pv;
  v19 = a4;
  memset(&v23, 0, sizeof(v23));
  v5 = 0;
  v21 = 0;
  dhpdev = a1->dhpdev;
  v7 = *((_DWORD *)dhpdev + 2);
  v8 = *(int **)dhpdev;
  v20 = v7;
  if ( a2 )
  {
    v5 = 1;
    v22 = 1;
    do
    {
      v13 = v8[2];
      v17 = (SURFOBJ *)v4[2 * v13 + 1];
      v18 = v4[2 * v13];
      if ( v17 )
      {
        v14 = v8[9];
        if ( bIntersect(v19, (const struct _RECTL *)(v8 + 5), &v23) )
        {
          v23.left -= v8[5];
          v23.right -= v8[5];
          v23.top -= v8[6];
          v23.bottom -= v8[6];
        }
        else
        {
          v23 = grclEmpty;
          v7 = v20;
        }
        if ( v18 != 2
          || (v15 = *(unsigned int (__stdcall **)(struct _SURFOBJ *, unsigned int, SURFOBJ *, struct _RECTL *))(v14 + 2060)) == 0 )
        {
          v15 = ulSimulateSaveScreenBits;
        }
        v16 = v15((struct _SURFOBJ *)v8[11], a2, v17, &v23);
        v4 = pv;
        if ( v16 || a2 != 1 )
        {
          v5 = v22;
        }
        else
        {
          v5 = 0;
          a2 = 2;
          v22 = 0;
          v19 = &grclEmpty;
        }
      }
      v8 = (int *)*v8;
      v20 = --v7;
    }
    while ( v7 );
    EngFreeMem(v4);
    return v5;
  }
  if ( v7 <= 0x1FFFFFFF )
    v5 = (int)EngAllocMem(1u, 8 * v7, 0x736D5647u);
  if ( !v5 )
    return v5;
  while ( 1 )
  {
    v9 = 0;
    if ( bIntersect(a4, (const struct _RECTL *)(v8 + 5), &v23) )
    {
      v23.left -= v8[5];
      v23.right -= v8[5];
      v23.top -= v8[6];
      v23.bottom -= v8[6];
      v10 = *(unsigned int (__stdcall **)(struct _SURFOBJ *, unsigned int, SURFOBJ *, struct _RECTL *))(v8[9] + 2060);
      v21 = v10;
      if ( !v10 )
      {
        v10 = ulSimulateSaveScreenBits;
        v21 = ulSimulateSaveScreenBits;
      }
      v9 = v10((struct _SURFOBJ *)v8[11], 0, 0, &v23);
      if ( !v9 )
      {
        if ( v21 == ulSimulateSaveScreenBits )
          break;
        v21 = ulSimulateSaveScreenBits;
        v9 = ulSimulateSaveScreenBits((struct _SURFOBJ *)v8[11], 0, 0, &v23);
        if ( !v9 )
          break;
      }
    }
    *(_DWORD *)(v5 + 8 * v8[2] + 4) = v9;
    if ( v9 )
      *(_DWORD *)(v5 + 8 * v8[2]) = (v21 != ulSimulateSaveScreenBits) + 1;
    v11 = v20-- == 1;
    v8 = (int *)*v8;
    if ( v11 )
      return v5;
  }
  MulSaveScreenBits(a1, 2u, (PVOID)v5, &grclEmpty);
  return 0;
}
