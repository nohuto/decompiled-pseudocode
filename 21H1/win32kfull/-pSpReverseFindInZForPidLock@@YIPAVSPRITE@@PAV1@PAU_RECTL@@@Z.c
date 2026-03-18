/*
 * XREFs of ?pSpReverseFindInZForPidLock@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z @ 0x1DF531
 * Callers:
 *     ?vSpPIDLockSpriteArea@@YG?AW4SurfaceMapStatus@SURFACE@@PAU_SPRITESTATE@@PAU_RECTL@@PAX@Z @ 0x1E18AF (-vSpPIDLockSpriteArea@@YG-AW4SurfaceMapStatus@SURFACE@@PAU_SPRITESTATE@@PAU_RECTL@@PAX@Z.c)
 *     ?vSpPIDUnlockSpriteArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@PAX@Z @ 0x1E1963 (-vSpPIDUnlockSpriteArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@PAX@Z.c)
 * Callees:
 *     ?bIsCursorSprite@@YGHPAVSPRITE@@@Z @ 0x1DCEC2 (-bIsCursorSprite@@YGHPAVSPRITE@@@Z.c)
 */

struct SPRITE *__fastcall pSpReverseFindInZForPidLock(struct SPRITE *a1, struct _RECTL *a2)
{
  LONG right; // ebx
  LONG left; // esi
  LONG top; // edi
  int v5; // edx

  right = a2->right;
  left = a2->left;
  top = a2->top;
  while ( a1
       && (bIsCursorSprite(a1)
        || !*((_DWORD *)a1 + 22)
        || (*(_DWORD *)a1 & 0x400) != 0
        || *((_DWORD *)a1 + 11) > right
        || *((_DWORD *)a1 + 12) > v5
        || *((_DWORD *)a1 + 13) < left
        || *((_DWORD *)a1 + 14) < top) )
    a1 = (struct SPRITE *)*((_DWORD *)a1 + 5);
  return a1;
}
