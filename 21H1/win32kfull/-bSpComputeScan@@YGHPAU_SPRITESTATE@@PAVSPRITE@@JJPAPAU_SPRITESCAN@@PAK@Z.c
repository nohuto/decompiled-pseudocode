/*
 * XREFs of ?bSpComputeScan@@YGHPAU_SPRITESTATE@@PAVSPRITE@@JJPAPAU_SPRITESCAN@@PAK@Z @ 0xA095C
 * Callers:
 *     ?vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z @ 0xA0662 (-vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z.c)
 * Callees:
 *     ?pSpGrowRanges@@YGPAU_SPRITERANGE@@PAU_SPRITESTATE@@PAU1@PAPAU_SPRITESCAN@@PAPAU1@@Z @ 0xA12A8 (-pSpGrowRanges@@YGPAU_SPRITERANGE@@PAU_SPRITESTATE@@PAU1@PAPAU_SPRITESCAN@@PAPAU1@@Z.c)
 */

int __userpurge bSpComputeScan@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _SPRITESTATE *a3,
        struct SPRITE *a4,
        struct _SPRITERANGE **a5,
        _DWORD *a6,
        struct _SPRITESCAN **a7,
        unsigned int *a8)
{
  _DWORD *v8; // ebx
  struct _SPRITERANGE *v9; // esi
  int v10; // edi
  struct _SPRITESTATE *v11; // edx
  struct _SPRITERANGE *v12; // esi
  struct SPRITE *v13; // ecx
  int v14; // eax
  char *v15; // ecx
  int v17; // eax
  int v18; // ebx
  struct _SPRITERANGE *v19; // eax
  struct _SPRITESCAN **v20; // [esp+0h] [ebp-20h]
  struct _SPRITERANGE **v21; // [esp+4h] [ebp-1Ch]
  struct _SPRITERANGE *v23; // [esp+14h] [ebp-Ch] BYREF
  int v24; // [esp+18h] [ebp-8h]
  int v25; // [esp+1Ch] [ebp-4h]

  v8 = a1;
  v25 = a2[5];
  v9 = *a5;
  v10 = a2[7];
  v23 = v9;
  *(_DWORD *)v9 = a3;
  *((_DWORD *)v9 + 1) = a4;
  v24 = v10;
  *((_DWORD *)v9 + 3) = *a6;
  v11 = (struct _SPRITESTATE *)(a2[25] - 40);
  v12 = (struct _SPRITERANGE *)((char *)v9 + 16);
  a3 = v11;
  while ( 1 )
  {
    v13 = 0;
    if ( !a1 )
      break;
    v10 = v24;
    do
    {
      v17 = v8[11];
      if ( v17 <= v25 )
      {
        if ( v8[13] <= v25 )
          goto LABEL_20;
        v13 = (struct SPRITE *)((char *)v13 + 1);
        a4 = v13;
        if ( v12 >= v11 )
        {
          v12 = pSpGrowRanges((struct _SPRITESTATE *)&v23, (struct _SPRITERANGE *)&a3, v20, v21);
          if ( !v12 )
            return 0;
          v11 = a3;
          v13 = a4;
        }
        *((_DWORD *)v12 + 2) = v8;
        v12 = (struct _SPRITERANGE *)((char *)v12 + 12);
        v17 = v8[13];
      }
      if ( v17 <= v10 )
        v10 = v17;
LABEL_20:
      v8 = (_DWORD *)v8[8];
    }
    while ( v8 );
    if ( !v13 )
      break;
    v18 = v25;
    v19 = v12;
    do
    {
      v19 = (struct _SPRITERANGE *)((char *)v19 - 12);
      *(_DWORD *)v19 = v18;
      *((_DWORD *)v19 + 1) = v10;
      v13 = (struct SPRITE *)((char *)v13 - 1);
    }
    while ( v13 );
LABEL_5:
    v25 = v10;
    if ( v10 >= v24 )
    {
      v15 = (char *)(v12 - v23);
      *((_DWORD *)v23 + 2) = v12 - v23;
      *a6 = v15;
      *a5 = v12;
      return 1;
    }
    v10 = v24;
    v8 = a1;
  }
  if ( v12 < v11 )
  {
LABEL_4:
    v14 = v25;
    *((_DWORD *)v12 + 2) = 0;
    *(_DWORD *)v12 = v14;
    *((_DWORD *)v12 + 1) = v10;
    v12 = (struct _SPRITERANGE *)((char *)v12 + 12);
    goto LABEL_5;
  }
  v12 = pSpGrowRanges((struct _SPRITESTATE *)&v23, (struct _SPRITERANGE *)&a3, v20, v21);
  if ( v12 )
  {
    v11 = a3;
    goto LABEL_4;
  }
  return 0;
}
