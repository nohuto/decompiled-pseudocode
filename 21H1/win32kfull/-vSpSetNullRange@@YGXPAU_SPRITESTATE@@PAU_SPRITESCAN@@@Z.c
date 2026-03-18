/*
 * XREFs of ?vSpSetNullRange@@YGXPAU_SPRITESTATE@@PAU_SPRITESCAN@@@Z @ 0xA132A
 * Callers:
 *     _bSpEnableSprites@4 @ 0x9E6C6 (_bSpEnableSprites@4.c)
 *     ?pSpGrowRanges@@YGPAU_SPRITERANGE@@PAU_SPRITESTATE@@PAU1@PAPAU_SPRITESCAN@@PAPAU1@@Z @ 0xA12A8 (-pSpGrowRanges@@YGPAU_SPRITERANGE@@PAU_SPRITESTATE@@PAU1@PAPAU_SPRITESCAN@@PAPAU1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpSetNullRange(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax

  *a2 = a1[6];
  v2 = a1[8];
  a2[3] = 0;
  a2[1] = v2;
  a2[2] = 28;
  a2[4] = a1[5];
  v3 = a1[7];
  a2[6] = 0;
  a2[5] = v3;
  a1[24] = a2;
  a1[25] = a2 + 7;
}
