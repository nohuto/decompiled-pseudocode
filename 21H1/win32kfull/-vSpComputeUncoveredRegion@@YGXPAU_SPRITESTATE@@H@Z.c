/*
 * XREFs of ?vSpComputeUncoveredRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA0730
 * Callers:
 *     ?vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z @ 0xA0662 (-vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ?InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z @ 0x1D3470 (-InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z.c)
 * Callees:
 *     ?vComputeUncoveredSpriteRegion@RGNOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0xA07DE (-vComputeUncoveredSpriteRegion@RGNOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 */

void __fastcall vSpComputeUncoveredRegion(int *a1, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // [esp+Ch] [ebp-1Ch] BYREF
  int v6; // [esp+10h] [ebp-18h]
  int v7; // [esp+14h] [ebp-14h] BYREF
  int v8; // [esp+18h] [ebp-10h] BYREF
  int v9; // [esp+1Ch] [ebp-Ch] BYREF
  int v10; // [esp+20h] [ebp-8h] BYREF
  int v11; // [esp+24h] [ebp-4h] BYREF

  v7 = a2;
  v3 = a1[25] - a1[24] + 16;
  v11 = a1[95];
  if ( *(_DWORD *)(v11 + 16) >= v3 )
  {
LABEL_2:
    v10 = a1[95];
    v9 = *a1;
    RGNOBJ::vComputeUncoveredSpriteRegion((RGNOBJ *)&v10, (struct PDEVOBJ *)&v9);
    RGNOBJ::vTighten((RGNOBJ *)&v10);
    if ( a1[161] && v7 == 1 )
    {
      v7 = a1[161];
      v11 = a1[96];
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v8);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
      if ( v8 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v11, (struct _RECTL *)(a1 + 5));
        if ( !RGNOBJ::bMerge((RGNOBJ *)&v8, (struct RGNOBJ *)&v11, (struct RGNOBJ *)&v7, 4u) )
          RGNOBJ::vSet((RGNOBJ *)&v8);
        if ( !RGNOBJ::bMerge((RGNOBJ *)&v11, (struct RGNOBJ *)&v10, (struct RGNOBJ *)&v8, 0xEu) )
          RGNOBJ::vSet((RGNOBJ *)&v11);
        a1[95] = v11;
        a1[96] = v10;
      }
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v8);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
      if ( v9 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
    }
    v4 = a1[95];
    *(_DWORD *)(v4 + 20) = _InterlockedIncrement((volatile signed __int32 *)REGION::ulUniqueREGION);
    return;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v5, v3);
  if ( v5 )
  {
    v9 = v11;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
    a1[95] = v5;
    if ( v6 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
    goto LABEL_2;
  }
  if ( v6 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
}
