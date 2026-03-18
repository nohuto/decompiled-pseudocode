/*
 * XREFs of ?bIsCursorSprite@@YGHPAVSPRITE@@@Z @ 0x1DCEC2
 * Callers:
 *     ?pSpFindInZ@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z @ 0xEA5B4 (-pSpFindInZ@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z.c)
 *     ?pSpFindInZForPidLock@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z @ 0x1DF3C3 (-pSpFindInZForPidLock@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z.c)
 *     ?pSpReverseFindInZForPidLock@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z @ 0x1DF531 (-pSpReverseFindInZForPidLock@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall bIsCursorSprite(_DWORD *this)
{
  int result; // eax

  for ( result = *(_DWORD *)(this[3] + 708); result; result = *(_DWORD *)(result + 16) )
  {
    if ( (_DWORD *)result == this )
      return 1;
  }
  return result;
}
