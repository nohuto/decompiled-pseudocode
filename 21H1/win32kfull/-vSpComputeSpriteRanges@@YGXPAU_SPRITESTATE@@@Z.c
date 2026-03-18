/*
 * XREFs of ?vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z @ 0xA0662
 * Callers:
 *     ?vSpHook@@YGXPAU_SPRITESTATE@@@Z @ 0x9E9AC (-vSpHook@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ?vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z @ 0x9FC56 (-vSpZorderSprite@@YGXPAUHDEV__@@PAVSPRITE@@1@Z.c)
 *     ?vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z @ 0xA0362 (-vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ?vComputeUncoveredSpriteRegion@RGNOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0xA07DE (-vComputeUncoveredSpriteRegion@RGNOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 * Callees:
 *     ?vSpComputeUncoveredRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA0730 (-vSpComputeUncoveredRegion@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     ?bSpComputeScan@@YGHPAU_SPRITESTATE@@PAVSPRITE@@JJPAPAU_SPRITESCAN@@PAK@Z @ 0xA095C (-bSpComputeScan@@YGHPAU_SPRITESTATE@@PAVSPRITE@@JJPAPAU_SPRITESCAN@@PAK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __thiscall vSpComputeSpriteRanges(_DWORD *this)
{
  int v2; // eax
  struct _SPRITESTATE *v3; // ecx
  struct SPRITE *v4; // edi
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v7; // edx
  bool v8; // cc
  struct _SPRITESTATE *v9; // ecx
  int v10; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // edx
  struct SPRITE *v13; // eax
  struct _SPRITESCAN **v14; // [esp+0h] [ebp-E8h]
  unsigned int *v15; // [esp+4h] [ebp-E4h]
  struct _SPRITESTATE *v16; // [esp+10h] [ebp-D8h]
  struct SPRITE *v17; // [esp+14h] [ebp-D4h]
  int v18; // [esp+18h] [ebp-D0h] BYREF
  int v19; // [esp+1Ch] [ebp-CCh] BYREF
  _DWORD v20[49]; // [esp+20h] [ebp-C8h] BYREF

  memset(v20, 0, 0xC0u);
  v2 = this[24];
  v3 = (struct _SPRITESTATE *)this[6];
  v4 = (struct SPRITE *)this[8];
  v18 = 0;
  v5 = (_DWORD *)this[3];
  v19 = v2;
  v16 = v3;
  v17 = v4;
  while ( v5 && v5[14] <= (int)v3 )
    v5 = (_DWORD *)v5[6];
  do
  {
    v6 = v20[8];
    v7 = v20;
    if ( v20[8] )
    {
      v4 = v17;
      do
      {
        v9 = *(struct _SPRITESTATE **)(v6 + 56);
        if ( v9 == v16 )
        {
          v7[8] = *(_DWORD *)(v6 + 32);
        }
        else
        {
          if ( (int)v9 <= (int)v4 )
            v4 = *(struct SPRITE **)(v6 + 56);
          v7 = (_DWORD *)v6;
        }
        v6 = v7[8];
      }
      while ( v6 );
LABEL_26:
      v3 = v16;
    }
    if ( !v5 )
      goto LABEL_5;
    v10 = v5[12];
    if ( (struct _SPRITESTATE *)v10 == v3 )
    {
      v11 = v20;
      do
      {
        v12 = v11;
        v11 = (_DWORD *)v11[8];
      }
      while ( v11 && v11[9] < v5[9] );
      v12[8] = v5;
      v13 = (struct SPRITE *)v5[14];
      v5[8] = v11;
      if ( (int)v13 <= (int)v4 )
        v4 = v13;
      v5 = (_DWORD *)v5[6];
      goto LABEL_26;
    }
    if ( v10 <= (int)v4 )
      v4 = (struct SPRITE *)v5[12];
LABEL_5:
    if ( !bSpComputeScan(v16, v4, (int)&v19, (int)&v18, v14, v15) )
      return;
    v8 = (int)v4 < (int)v17;
    v3 = v4;
    v4 = v17;
    v16 = v3;
  }
  while ( v8 );
  this[21] = 1;
  vSpComputeUncoveredRegion((struct _SPRITESTATE *)v14, (int)v15);
}
